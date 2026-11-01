
/* ==== TStringList.vmt_040 @ 00412198 ==== 
 * signature: undefined TStringList.vmt_040(void)
 * body: 00412198-004121cf
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_040(int *param_1)

{
  if (param_1[4] != 0) {
    (**(code **)(*param_1 + 0x74))();
    FUN_00404578((VARIANTARG *)param_1[3],"\x0e\vTStringItem\b",param_1[4]);
    param_1[4] = 0;
    (**(code **)(*param_1 + 0x28))(param_1,0);
    (**(code **)(*param_1 + 0x70))();
  }
  return;
}


