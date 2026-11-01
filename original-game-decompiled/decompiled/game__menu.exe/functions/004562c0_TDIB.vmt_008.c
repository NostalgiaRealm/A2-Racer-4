
/* ==== TDIB.vmt_008 @ 004562c0 ==== 
 * signature: undefined __register TDIB.vmt_008(int * param_1, int * param_2, undefined4 param_3)
 * body: 004562c0-004563b6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_008(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if (param_2 == (int *)0x0) {
    FUN_00456634(param_1,0,param_3);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  else {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00454aa4);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_00416f48);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_00403114(param_2,(int)&PTR_TPicture_vmt_000_0041702c);
        if ((char)uVar1 == '\0') {
          TPersistent_vmt_008(param_1,param_2);
        }
        else {
          if ((int *)param_2[1] == (int *)0x0) {
            FUN_00456634(param_1,extraout_EDX_00,extraout_ECX_00);
          }
          else {
            FUN_00456234((int *)param_2[1],extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
          }
          (**(code **)(*param_1 + 0x10))(param_1,param_1);
        }
      }
      else {
        FUN_00456234(param_2,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
        (**(code **)(*param_1 + 0x10))(param_1,param_1);
      }
    }
    else if (param_2 != param_1) {
      FUN_00457048((int)param_1,param_2[9]);
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
      uVar1 = (**(code **)(*param_2 + 0x28))();
      (**(code **)(*param_1 + 0x3c))(param_1,uVar1);
      iVar2 = FUN_00456a14((int)param_2);
      FUN_00457260(param_1,iVar2);
      FUN_0045727c(param_1,(char)param_2[0x22]);
    }
  }
  return;
}


