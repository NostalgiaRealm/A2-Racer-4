
/* ==== FUN_004188c0 @ 004188c0 ==== 
 * signature: int __cdecl FUN_004188c0(int param_1)
 * body: 004188c0-00418947;0041894b-00418956
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00418948-0041894a
 */

int __cdecl FUN_004188c0(int param_1)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_004aac20(param_1,*(int *)(param_1 * 0xf0 + 0x50 + DAT_00715e50));
  FUN_00418050(param_1,iVar1);
  iVar3 = 6;
  iVar1 = extraout_EAX;
  do {
    iVar2 = FUN_00423290(iVar1,1);
    if (iVar2 == -1) {
      iVar2 = FUN_00423290(iVar1,0);
      if (iVar2 == -1) {
        iVar2 = FUN_00423290(iVar1,2);
        if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d_Waypoint__d_near_chunk__d_h_00593684);
        }
      }
    }
    iVar3 = iVar3 + -1;
    iVar1 = iVar2;
  } while (iVar3 != 0);
  return iVar2;
}


