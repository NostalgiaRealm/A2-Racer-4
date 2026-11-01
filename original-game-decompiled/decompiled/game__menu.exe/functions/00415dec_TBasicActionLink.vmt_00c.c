
/* ==== TBasicActionLink.vmt_00c @ 00415dec ==== 
 * signature: undefined TBasicActionLink.vmt_00c(void)
 * body: 00415dec-00415e16
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBasicActionLink_vmt_00c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_00415f78(iVar1,param_1);
    }
    *(int *)(param_1 + 0x10) = param_2;
    if (param_2 != 0) {
      FUN_00415f6c(param_2,param_1);
    }
  }
  return;
}


