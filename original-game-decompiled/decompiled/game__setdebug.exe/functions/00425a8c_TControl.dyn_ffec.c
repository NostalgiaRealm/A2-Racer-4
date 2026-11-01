
/* ==== TControl.dyn_ffec @ 00425a8c ==== 
 * signature: undefined __register TControl.dyn_ffec(int param_1)
 * body: 00425a8c-00425af5
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_ffec(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x10a) != 0) {
    iVar1 = TButton_get_Action(param_1);
    if (iVar1 != 0) {
      iVar1 = TButton_get_Action(param_1);
      if (*(int *)(iVar1 + 0x30) != *(int *)(param_1 + 0x108)) {
        (**(code **)(param_1 + 0x108))(*(undefined4 *)(param_1 + 0x10c),param_1);
        return;
      }
    }
  }
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))();
  }
  else if (*(short *)(param_1 + 0x10a) != 0) {
    (**(code **)(param_1 + 0x108))(*(undefined4 *)(param_1 + 0x10c),param_1);
  }
  return;
}


