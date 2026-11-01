
/* ==== FUN_004f6030 @ 004f6030 ==== 
 * signature: int __fastcall FUN_004f6030(int param_1)
 * body: 004f6030-004f604c
 */

int __fastcall FUN_004f6030(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x20) + *(int *)(param_1 + 4));
  iVar1 = piVar2[1];
  if (*piVar2 == 0) {
    return iVar1 + (int)piVar2;
  }
  if (iVar1 != 0) {
    return iVar1 + (int)piVar2;
  }
  return 0;
}


