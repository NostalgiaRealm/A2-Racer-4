
/* ==== TStringList.vmt_020 @ 00412498 ==== 
 * signature: undefined TStringList.vmt_020(void)
 * body: 00412498-004124ec
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_020(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab7bc,0);
  }
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_00403cb0((int *)(param_1[3] + param_2 * 8),param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}


