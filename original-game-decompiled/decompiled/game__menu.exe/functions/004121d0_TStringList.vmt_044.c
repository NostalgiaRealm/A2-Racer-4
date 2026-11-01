
/* ==== TStringList.vmt_044 @ 004121d0 ==== 
 * signature: undefined TStringList.vmt_044(void)
 * body: 004121d0-00412232
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_044(int *param_1,int param_2)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_00404660((VARIANTARG *)(param_1[3] + param_2 * 8),"\x0e\vTStringItem\b");
  param_1[4] = param_1[4] + -1;
  if (param_2 < param_1[4]) {
    FUN_004028d8((undefined4 *)(param_1[3] + 8 + param_2 * 8),
                 (undefined4 *)(param_1[3] + param_2 * 8),(param_1[4] - param_2) * 8);
  }
  (**(code **)(*param_1 + 0x70))();
  return;
}


