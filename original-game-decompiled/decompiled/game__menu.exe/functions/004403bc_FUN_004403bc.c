
/* ==== FUN_004403bc @ 004403bc ==== 
 * signature: undefined4 __register FUN_004403bc(int * param_1, int param_2, char param_3)
 * body: 004403bc-00440428
 */

undefined4 FUN_004403bc(int *param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (((param_3 == '\0') &&
      (uVar1 = FUN_00403114(param_1,(int)&PTR_TPersistent_vmt_000_0043c4d0), (char)uVar1 != '\0'))
     && (iVar2 = (**(code **)(*param_1 + 0x34))(), param_2 == iVar2)) {
    uVar3 = TPopupMenu_get_HelpContext((int)param_1);
  }
  else {
    for (iVar2 = FUN_0044038c((int)param_1); (iVar2 != 0 && (*(int *)(iVar2 + 0x48) == 0));
        iVar2 = *(int *)(iVar2 + 0x58)) {
    }
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x48);
    }
  }
  return uVar3;
}


