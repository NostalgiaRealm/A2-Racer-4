
/* ==== TStringList.vmt_048 @ 00412234 ==== 
 * signature: undefined __register TStringList.vmt_048(int * param_1, int param_2, int param_3)
 * body: 00412234-00412289
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_048(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  if ((param_3 < 0) || (param_1[4] <= param_3)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_3);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_0041228c((int)param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}


