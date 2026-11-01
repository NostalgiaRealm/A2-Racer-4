
/* ==== TCustomForm.vmt_0bc @ 0043e4f4 ==== 
 * signature: undefined TCustomForm.vmt_0bc(void)
 * body: 0043e4f4-0043e52a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_0bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    *(char *)((int)param_1 + 0x213) = (char)param_2;
  }
  if ((char)param_2 != '\x01') {
    FUN_00402ef0(param_1,param_2,param_3);
  }
  if (param_1[0x93] != 0) {
    (**(code **)(*(int *)param_1[0x93] + 0x10))();
  }
  return;
}


