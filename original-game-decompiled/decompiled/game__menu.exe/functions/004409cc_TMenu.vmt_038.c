
/* ==== TMenu.vmt_038 @ 004409cc ==== 
 * signature: undefined __register TMenu.vmt_038(int * param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4)
 * body: 004409cc-004409fc
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMenu_vmt_038(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  if ((*(ushort *)(param_1 + 8) & 9) == 0) {
    (**(code **)(*param_1 + 0x30))(param_1,param_3,param_4);
  }
  return;
}


