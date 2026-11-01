
/* ==== TStringList.vmt_020 @ 00410908 ==== 
 * signature: undefined TStringList.vmt_020(void)
 * body: 00410908-0041095c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_020(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446bcc,0);
  }
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_00403a0c((int *)(param_1[3] + param_2 * 8),param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}


