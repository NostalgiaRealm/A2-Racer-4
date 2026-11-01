
/* ==== xvga_src_fopen_impl @ 100017c0 ==== 
 * signature: undefined __cdecl xvga_src_fopen_impl(byte * param_1)
 * body: 100017c0-100018ea
 * note: ANALYST: Opens a name: searches the index, else plain fopen. [confidence: confirmed] [evidence: export thunk jumps here; code read]
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ANALYST: Opens a name: searches the index, else plain fopen. [confidence: confirmed] [evidence:
   export thunk jumps here; code read] */

void __cdecl xvga_src_fopen_impl(byte *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_58 [16];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  int local_8;
  
  puVar3 = local_58;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((DAT_10031408 == 0) || (DAT_1003140c == 1)) {
    local_10 = FUN_100022c0((LPCSTR)param_1,"rb");
  }
  else {
    for (local_8 = 0; local_8 < _DAT_100313fc; local_8 = local_8 + 1) {
      uVar1 = FUN_100134c0((byte *)(DAT_10031400 + local_8 * 0x1c),param_1);
      if (uVar1 == 0) {
        DAT_10031404 = *(int *)(DAT_10031400 + 0x14 + local_8 * 0x1c);
        DAT_100313f0 = DAT_10031404 + *(int *)(DAT_10031400 + 0x18 + local_8 * 0x1c);
        break;
      }
    }
    local_c = DAT_100313fc;
    if (local_8 == DAT_100313fc) {
      local_14 = FUN_100022c0((LPCSTR)param_1,"rb");
    }
    else {
      local_18 = FUN_10002320(DAT_100313f8,DAT_10031404,0);
    }
  }
  local_8 = 0x100018e7;
  __chkesp();
  return;
}


