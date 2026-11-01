
/* ==== TMemoryStream.vmt_000 @ 00412a5c ==== 
 * signature: undefined TMemoryStream.vmt_000(void)
 * body: 00412a5c-00412a86
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TMemoryStream_vmt_000(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[3];
  FUN_00412a34(param_1,param_2);
  param_1[2] = param_2;
  if (param_2 < iVar1) {
    (**(code **)(*param_1 + 0xc))(param_1,0,2);
  }
  return;
}


