
/* ==== FUN_004881d8 @ 004881d8 ==== 
 * signature: undefined __register FUN_004881d8(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 004881d8-00488244
 */

void FUN_004881d8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  WPARAM WVar4;
  
  uVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(param_4 + -4) + 0x2d8) + 0x1f0) + 0x14))();
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)(uVar2 - 1)) {
    WVar4 = 0;
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_4 + -4) + 0x2d8) + 0x1f0);
      iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,WVar4);
      if (param_1 == iVar3) {
        FUN_00427924(*(int **)(*(int *)(param_4 + -4) + 0x2d8),WVar4);
        return;
      }
      WVar4 = WVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


