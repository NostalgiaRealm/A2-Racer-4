
/* ==== TStringList.vmt_00c @ 00412318 ==== 
 * signature: undefined TStringList.vmt_00c(void)
 * body: 00412318-00412349
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_00c(int param_1,int param_2,int *param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_004115e8(param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  FUN_00403cb0(param_3,*(undefined4 **)(*(int *)(param_1 + 0xc) + param_2 * 8));
  return;
}


