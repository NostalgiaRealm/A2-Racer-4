
/* ==== TSizeConstraints.vmt_000 @ 0042d548 ==== 
 * signature: undefined TSizeConstraints.vmt_000(void)
 * body: 0042d548-0042d590
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSizeConstraints_vmt_000(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  uVar2 = FUN_00403114(param_2,(int)&PTR_TSizeConstraints_vmt_000_00429f14);
  if ((char)uVar2 != '\0') {
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    iVar1 = param_1[2];
    param_2[2] = iVar1;
    FUN_00403178(param_2,iVar1,extraout_ECX);
    return;
  }
  TPersistent_vmt_000(param_1,param_2);
  return;
}


