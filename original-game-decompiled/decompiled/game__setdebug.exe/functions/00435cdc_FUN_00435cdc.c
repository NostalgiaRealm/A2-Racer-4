
/* ==== FUN_00435cdc @ 00435cdc ==== 
 * signature: undefined4 __register FUN_00435cdc(int * param_1, int param_2, char param_3)
 * body: 00435cdc-00435d48
 */

undefined4 FUN_00435cdc(int *param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (((param_3 == '\0') &&
      (uVar1 = FUN_00402e8c(param_1,(int)&PTR_TPersistent_vmt_000_00431df0), (char)uVar1 != '\0'))
     && (iVar2 = (**(code **)(*param_1 + 0x34))(), param_2 == iVar2)) {
    uVar3 = TPopupMenu_get_HelpContext((int)param_1);
  }
  else {
    for (iVar2 = FUN_00435cac((int)param_1); (iVar2 != 0 && (*(int *)(iVar2 + 0x48) == 0));
        iVar2 = *(int *)(iVar2 + 0x58)) {
    }
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x48);
    }
  }
  return uVar3;
}


