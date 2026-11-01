
/* ==== HandleGasBreak @ 004038a0 ==== 
 * signature: undefined __cdecl HandleGasBreak(int param_1)
 * body: 004038a0-004038cd;004038d1-00403a68
 * note: ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence: string '(%s):%d Illegal index (%d) in FSM passed to HandleGasBreak function']
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004038ce-004038d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ANALYST: Name appears in this function's own error string. [confidence: confirmed] [evidence:
   string '(%s):%d Illegal index (%d) in FSM passed to HandleGasBreak function'] */

void __cdecl HandleGasBreak(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar3 = param_1;
  if ((-1 < param_1) && (param_1 < 0x13)) {
    iVar6 = param_1 * 0x294;
    iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5];
    iVar4 = FUN_004188c0(iVar2);
    pfVar1 = (float *)(iVar4 * 0x50 + 8 + DAT_00715eb8);
    lVar7 = FUN_004031f0(iVar2,*pfVar1,pfVar1[1],pfVar1[2]);
    uVar5 = (int)(uint)lVar7 >> 0x1f;
    param_1 = ((uint)lVar7 ^ uVar5) - uVar5;
    if (500 < param_1) {
      param_1 = 500;
    }
    FUN_00403440(iVar3,(float)param_1);
    if (*(int *)(&DAT_005cea08 + iVar6) == 2) {
      FUN_00403830((&DAT_005973c8)[iVar3 * 0x16] + 1);
    }
    FUN_00403490(iVar3);
    lVar7 = __ftol();
    FUN_004037a0(iVar3,0,(int)lVar7);
    FUN_00403100(&DAT_005cea7c + iVar6,0);
    if ((*(int *)(&DAT_005cea08 + iVar6) == 1) && (param_1 < 0x32)) {
      FUN_00403100(&DAT_005cea7c + iVar6,1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058eb18);
}


