
/* ==== TDaviLoopProperties.vmt_008 @ 0045a548 ==== 
 * signature: undefined TDaviLoopProperties.vmt_008(void)
 * body: 0045a548-0045a595
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviLoopProperties_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_0045a0f8);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_008(param_1,param_2);
  }
  else {
    iVar2 = FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_0045a0f8);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 4);
    param_1[2] = *(int *)(iVar2 + 8);
    param_1[3] = *(int *)(iVar2 + 0xc);
    param_1[4] = *(int *)(iVar2 + 0x10);
  }
  return;
}


