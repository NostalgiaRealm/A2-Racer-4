
/* ==== FUN_004185c0 @ 004185c0 ==== 
 * signature: undefined __cdecl FUN_004185c0(int param_1)
 * body: 004185c0-00418650;00418654-004186ca;004186ce-00418702
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00418651-00418653 004186cb-004186cd
 */

void __cdecl FUN_004185c0(int param_1)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  float10 fVar3;
  
  iVar1 = FUN_004aac20(param_1,*(int *)(param_1 * 0xf0 + 0x50 + DAT_00715e50));
  FUN_00418050(param_1,iVar1);
  DAT_005d2b70 = 1;
  DAT_005d2b74 = 3.4028235e+38;
  iVar1 = FUN_00423290(extraout_EAX,1);
  if (((iVar1 == -1) && (iVar1 = FUN_00423290(extraout_EAX,0), iVar1 == -1)) &&
     (iVar1 = FUN_00423290(extraout_EAX,2), iVar1 == -1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_Waypoint__d_near_chunk__d_h_005935d4);
  }
  fVar3 = FUN_00422c00(param_1,iVar1);
  if (fVar3 < (float10)DAT_005d2b74) {
    DAT_005d2b74 = (float)fVar3;
  }
  iVar2 = FUN_00423290(iVar1,1);
  if (((iVar2 == -1) && (iVar2 = FUN_00423290(iVar1,0), iVar2 == -1)) &&
     (iVar2 = FUN_00423290(iVar1,2), iVar2 == -1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_Waypoint__d_near_chunk__d_h_0059362c);
  }
  fVar3 = FUN_00422c00(param_1,iVar2);
  if ((float10)DAT_005d2b74 <= fVar3) {
    DAT_005d2b78 = iVar2;
    return;
  }
  DAT_005d2b74 = (float)fVar3;
  DAT_005d2b78 = iVar2;
  return;
}


