
/* ==== TIcon.vmt_040 @ 0041ccb8 ==== 
 * signature: undefined TIcon.vmt_040(void)
 * body: 0041ccb8-0041cccf
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIcon_vmt_040(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    return;
  }
  FUN_004176d8((undefined4 *)PTR_PTR_00446b28);
  return;
}


