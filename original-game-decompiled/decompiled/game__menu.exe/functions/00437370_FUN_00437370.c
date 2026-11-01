
/* ==== FUN_00437370 @ 00437370 ==== 
 * signature: int __register FUN_00437370(int param_1, int * param_2, undefined4 * param_3)
 * body: 00437370-004373fb
 */

int FUN_00437370(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 *puVar3;
  int local_14;
  
  puVar3 = &stack0xfffffffc;
  local_14 = 0;
  *param_3 = 0;
  piVar1 = FUN_004372dc(param_2,0,param_3,(int)&stack0xfffffffc);
  if ((piVar1 == (int *)0x0) || (*(int *)(param_1 + 0x14) != piVar1[0x24])) {
    if (*(int *)(*(int *)(param_1 + 100) + 8) != 0) {
      iVar2 = FUN_00436508(*(int *)(param_1 + 100));
      if ((0 < iVar2) && (piVar1 == (int *)0x0)) {
        FUN_004370d4(*(int *)(*(int *)(param_1 + 100) + 8),extraout_EDX,extraout_ECX,
                     (int)&stack0xfffffffc);
      }
    }
  }
  else {
    local_14 = FUN_00436bc8(param_1,(int)piVar1,(int)puVar3);
    if (local_14 != 0) {
      *param_3 = 1;
    }
  }
  return local_14;
}


