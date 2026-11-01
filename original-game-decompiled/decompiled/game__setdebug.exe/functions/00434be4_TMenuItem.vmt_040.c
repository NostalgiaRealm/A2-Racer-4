
/* ==== TMenuItem.vmt_040 @ 00434be4 ==== 
 * signature: undefined TMenuItem.vmt_040(void)
 * body: 00434be4-00434c53
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenuItem_vmt_040(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x2d) != '\0') {
    if (((*(short *)(param_1 + 0x82) != 0) && (iVar1 = TMenuItem_get_Action(param_1), iVar1 != 0))
       && (iVar1 = TMenuItem_get_Action(param_1), *(int *)(iVar1 + 0x30) != *(int *)(param_1 + 0x80)
          )) {
      (**(code **)(param_1 + 0x80))(*(undefined4 *)(param_1 + 0x84),param_1);
      return;
    }
    if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x38) != 0)) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
    }
    else if (*(short *)(param_1 + 0x82) != 0) {
      (**(code **)(param_1 + 0x80))(*(undefined4 *)(param_1 + 0x84),param_1);
    }
  }
  return;
}


