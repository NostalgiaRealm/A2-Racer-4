
/* ==== FUN_0045b494 @ 0045b494 ==== 
 * signature: undefined __register FUN_0045b494(int param_1, int param_2)
 * body: 0045b494-0045b500
 */

void FUN_0045b494(int param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  
  DVar1 = GetTickCount();
  uVar2 = DVar1 + *(uint *)(param_2 + 0x28);
  if (CARRY4(DVar1,*(uint *)(param_2 + 0x28))) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  *(uint *)(param_2 + 0x30) = uVar2;
  FUN_0041fef4(*(int **)(param_1 + 8),param_2);
  if (*(int *)(*(int *)(param_1 + 8) + 8) == 1) {
    iVar3 = FUN_0045b200(param_1);
    TTimer_set_Interval(iVar3,*(int *)(param_2 + 0x28));
  }
  else {
    FUN_00410598(*(int *)(param_1 + 8),FUN_0045b45c);
    iVar3 = FUN_0045b200(param_1);
    uVar2 = FUN_0045af28(*(uint *)(iVar3 + 0x24),*(uint *)(param_2 + 0x28));
    iVar3 = FUN_0045b200(param_1);
    TTimer_set_Interval(iVar3,uVar2);
  }
  return;
}


