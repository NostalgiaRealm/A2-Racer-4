
/* ==== TStringList.vmt_00c @ 00410788 ==== 
 * signature: undefined TStringList.vmt_00c(void)
 * body: 00410788-004107b9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStringList_vmt_00c(int param_1,int param_2,int *param_3)

{
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    FUN_0040fb30(param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  FUN_00403a0c(param_3,*(undefined4 **)(*(int *)(param_1 + 0xc) + param_2 * 8));
  return;
}


