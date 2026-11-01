
/* ==== TBasicActionLink.vmt_00c @ 00414238 ==== 
 * signature: undefined TBasicActionLink.vmt_00c(void)
 * body: 00414238-00414262
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBasicActionLink_vmt_00c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_004143c4(iVar1,param_1);
    }
    *(int *)(param_1 + 0x10) = param_2;
    if (param_2 != 0) {
      FUN_004143b8(param_2,param_1);
    }
  }
  return;
}


