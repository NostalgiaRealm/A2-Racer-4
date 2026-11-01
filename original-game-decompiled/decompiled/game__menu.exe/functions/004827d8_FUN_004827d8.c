
/* ==== FUN_004827d8 @ 004827d8 ==== 
 * signature: undefined __register FUN_004827d8(int param_1)
 * body: 004827d8-0048282e
 */

void FUN_004827d8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(uint *)(param_1 + 0x1c) + 8);
  iVar3 = iVar1 + -1;
  if (SBORROW4(iVar1,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 0x1c));
  }
  if (-1 < iVar3) {
    do {
      piVar2 = (int *)FUN_004102b0(*(undefined4 **)(param_1 + 0x1c),iVar3);
      (**(code **)(*(int *)piVar2[1] + 0x48))();
      FUN_00410150(*(int **)(param_1 + 0x1c),iVar3);
      FUN_00402f9c(piVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  FUN_00482a08(param_1,0);
  return;
}


