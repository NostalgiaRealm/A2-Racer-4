
/* ==== TCustomGDIButton.vmt_094 @ 004685ac ==== 
 * signature: undefined4 __register TCustomGDIButton.vmt_094(int param_1, uint param_2, int param_3)
 * body: 004685ac-00468693
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TCustomGDIButton_vmt_094(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_c;
  
  local_c = TWinControlWrapper_vmt_094();
  if (*(int *)(param_1 + 0x174) != 0) {
    piVar2 = (int *)FUN_00467d48(*(int *)(param_1 + 0x174),6);
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if ((cVar1 == '\0') &&
       (uVar3 = FUN_00403114(piVar2,(int)&PTR_TPersistent_vmt_000_00454aa4), (char)uVar3 != '\0')) {
      piVar2 = (int *)FUN_0040312c(piVar2,(int)&PTR_TPersistent_vmt_000_00454aa4);
      FUN_0045727c(piVar2,'\0');
      (**(code **)(*piVar2 + 0x3c))(piVar2,1);
    }
    else {
      piVar2 = FUN_00468d10(param_1);
    }
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if (cVar1 == '\0') {
      if ((piVar2[0x23] < (int)param_2) || (piVar2[0x10] < param_3)) {
        local_c = 0;
      }
      else {
        cVar1 = (**(code **)(*piVar2 + 0x28))();
        if (cVar1 != '\0') {
          uVar4 = FUN_00456a44((int)piVar2,param_2,param_3);
          uVar5 = FUN_00456a14((int)piVar2);
          if ((uVar4 & 0xffffff) == (uVar5 & 0xffffff)) {
            local_c = 0;
          }
        }
      }
    }
    else {
      local_c = 0;
    }
    return local_c;
  }
  return local_c;
}


