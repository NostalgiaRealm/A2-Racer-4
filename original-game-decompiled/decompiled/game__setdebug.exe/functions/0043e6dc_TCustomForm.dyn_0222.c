
/* ==== TCustomForm.dyn_0222 @ 0043e6dc ==== 
 * signature: undefined TCustomForm.dyn_0222(void)
 * body: 0043e6dc-0043e733
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0222(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  bool bVar2;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if (*(char *)((int)param_1 + 0x217) == '\x01') {
    iVar1 = FUN_0042a8b4(param_1);
    bVar2 = iVar1 == *(int *)(param_2 + 8);
    FUN_0043dcb4(param_1,bVar2);
    if ((bVar2) && ((*(byte *)(*(int *)(DAT_004477c4 + 0x38) + 0x44) & 4) != 0)) {
      FUN_00402ef0(*(int **)(DAT_004477c4 + 0x38),CONCAT31((int3)((uint)extraout_EDX >> 8),1),
                   extraout_ECX);
    }
  }
  return;
}


