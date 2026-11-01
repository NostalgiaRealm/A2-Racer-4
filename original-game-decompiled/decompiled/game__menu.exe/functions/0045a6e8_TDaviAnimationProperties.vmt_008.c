
/* ==== TDaviAnimationProperties.vmt_008 @ 0045a6e8 ==== 
 * signature: undefined __register TDaviAnimationProperties.vmt_008(int * param_1, int * param_2)
 * body: 0045a6e8-0045a740
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimationProperties_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_0045a1ac);
  if ((char)uVar1 == '\0') {
    TPersistent_vmt_008(param_1,param_2);
  }
  else {
    iVar2 = FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_0045a1ac);
    param_1[1] = *(int *)(iVar2 + 4);
    param_1[2] = *(int *)(iVar2 + 8);
    param_1[3] = *(int *)(iVar2 + 0xc);
    param_1[4] = *(int *)(iVar2 + 0x10);
    (**(code **)(*(int *)param_1[5] + 8))((int *)param_1[5],*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}


