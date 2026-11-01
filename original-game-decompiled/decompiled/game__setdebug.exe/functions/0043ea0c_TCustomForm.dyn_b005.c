
/* ==== TCustomForm.dyn_b005 @ 0043ea0c ==== 
 * signature: undefined TCustomForm.dyn_b005(void)
 * body: 0043ea0c-0043eaa5
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b005(int param_1,int param_2)

{
  int iVar1;
  SHORT SVar2;
  undefined4 uVar3;
  
  SVar2 = GetKeyState(0x12);
  if (-1 < SVar2) {
    if (*(short *)(param_2 + 4) == 9) {
      SVar2 = GetKeyState(0x11);
      if (-1 < SVar2) {
        uVar3 = 1;
        SVar2 = GetKeyState(0x10);
        FUN_0042add8(param_1,*(undefined4 *)(param_1 + 0x208),-1 < SVar2,uVar3);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
    else if ((ushort)(*(short *)(param_2 + 4) - 0x25U) < 4) {
      iVar1 = *(int *)(param_1 + 0x208);
      if (iVar1 == 0) {
        return;
      }
      if ((*(short *)(param_2 + 4) == 0x27) || (*(short *)(param_2 + 4) == 0x28)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      FUN_0042add8(*(undefined4 *)(iVar1 + 0x24),iVar1,uVar3,0);
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
  }
  TWinControl_dyn_b005(param_1,param_2);
  return;
}


