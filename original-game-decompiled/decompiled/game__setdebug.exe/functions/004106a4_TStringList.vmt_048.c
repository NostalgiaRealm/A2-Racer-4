
/* ==== TStringList.vmt_048 @ 004106a4 ==== 
 * signature: undefined __register TStringList.vmt_048(int * param_1, int param_2, int param_3)
 * body: 004106a4-004106f9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_048(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  if ((param_3 < 0) || (param_1[4] <= param_3)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_3);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_004106fc((int)param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}


