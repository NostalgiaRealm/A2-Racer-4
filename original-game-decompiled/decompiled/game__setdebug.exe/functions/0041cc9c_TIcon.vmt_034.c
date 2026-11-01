
/* ==== TIcon.vmt_034 @ 0041cc9c ==== 
 * signature: undefined TIcon.vmt_034(void)
 * body: 0041cc9c-0041ccb3
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIcon_vmt_034(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    return;
  }
  FUN_004176d8((undefined4 *)PTR_PTR_00446b28);
  return;
}


