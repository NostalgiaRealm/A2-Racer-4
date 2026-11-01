
/* ==== TStringList.vmt_024 @ 00410960 ==== 
 * signature: undefined TStringList.vmt_024(void)
 * body: 00410960-00410999
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_024(int *param_1,int param_2,undefined4 param_3)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  *(undefined4 *)(param_1[3] + 4 + param_2 * 8) = param_3;
  (**(code **)(*param_1 + 0x70))();
  return;
}


