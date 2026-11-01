
/* ==== TDaviLinkedGraphic.vmt_008 @ 0045d054 ==== 
 * signature: undefined TDaviLinkedGraphic.vmt_008(void)
 * body: 0045d054-0045d0d6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviLinkedGraphic_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_0045ca28);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00416f48);
    if ((char)uVar1 == '\0') {
      TPersistent_vmt_008(param_1,param_2);
    }
    else {
      (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3],param_2);
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
    }
  }
  else {
    iVar2 = FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_0045ca28);
    FUN_00403cb0(param_1 + 2,*(undefined4 **)(iVar2 + 8));
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 4);
    (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3],*(undefined4 *)(iVar2 + 0xc));
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


