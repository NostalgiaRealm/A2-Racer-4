// JavaScript implementations of the functions listed in tools/recomp/replacements.py.
export class LongJmp extends Error {
  constructor(buf, val) {
    super('longjmp');
    this.buf = buf;
    this.val = val;
  }
}

export class CxxThrow extends Error {}

export function installCoreHooks(m, host) {
  const { u32 } = m;
  const TIB = m.layout.TIB_BASE;

  m.bindRaw('hook!longjmp', 0, (esp) => {
    throw new LongJmp(u32[(esp + 4) >> 2], u32[(esp + 8) >> 2] || 1);
  });

  // The two qhull functions that call setjmp. See RESUME_ENTRIES in replacements.py.
  const guard = (name, body, buffer, resume) => {
    m.bindRaw('hook!' + name, 0, (esp, ecx, edx, eax) => {
      try {
        return m.__call(body, esp, eax, ecx, edx);
      } catch (e) {
        if (!(e instanceof LongJmp) || e.buf !== buffer) throw e;
        const b = e.buf >> 2;
        const ex = m.exports;
        ex.g_ebp.value = u32[b];
        ex.g_ebx.value = u32[b + 1];
        ex.g_edi.value = u32[b + 2];
        ex.g_esi.value = u32[b + 3];
        u32[TIB >> 2] = u32[b + 6];
        m.esp = u32[b + 4] + 4;
        return m.__call(resume, m.esp, e.val, 0, 0);
      }
    });
  };
  guard('setjmpGuardA', 0x0051e7a0, 0x0074c514, 0x0051e837);
  guard('setjmpGuardB', 0x005251c0, 0x0074c57c, 0x005251dd);

  m.bindRaw('hook!CxxThrowException', 8, (esp) => {
    const type = u32[(esp + 8) >> 2];
    const obj = u32[(esp + 4) >> 2];
    throw new CxxThrow(`C++ exception thrown: throwinfo ${type.toString(16)} object ${obj.toString(16)} ${describeThrow(m, type, obj)}`);
  });

  // Functions that catch and carry on: see GUARDED in tools/recomp/replacements.py.
  for (const [name, h] of Object.entries(m.meta.hooks)) {
    if (!name.startsWith('guard_')) continue;
    m.bindRaw('hook!' + name, h.pop, (esp, ecx, edx, eax) => {
      const frame = u32[TIB >> 2];
      try {
        return m.__call(h.addr, esp, eax, ecx, edx);
      } catch (e) {
        if (!(e instanceof CxxThrow)) throw e;
        console.warn(e.message);
        u32[TIB >> 2] = frame;
        return 0;
      }
    });
  }
}

function describeThrow(m, type, obj) {
  if (type === 0x57d508) return JSON.stringify(m.cstr(m.u32[obj >> 2]));   // char *
  return '';
}
