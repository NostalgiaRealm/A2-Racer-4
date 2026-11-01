
/* ==== TDaviAnimation.vmt_050 @ 0045c480 ==== 
 * signature: undefined TDaviAnimation.vmt_050(void)
 * body: 0045c480-0045c508
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_050(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_ECX_01;
  int iVar5;
  
  FUN_0045b9d4(param_1);
  (**(code **)(*(int *)param_1[10] + 0x10))((int *)param_1[10],param_2);
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_1[10] + 4);
    uVar4 = extraout_ECX;
    if (iVar5 == 0) {
      uVar2 = thunk_FUN_00402808(param_1[10]);
      thunk_FUN_00402808(uVar2);
      uVar4 = extraout_ECX_00;
    }
    do {
      piVar3 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',uVar4);
      (**(code **)(*piVar3 + 0x50))(piVar3,param_2);
      (**(code **)(*(int *)param_1[0xc] + 0xc))((int *)param_1[0xc],piVar3);
      iVar5 = iVar5 + -1;
      uVar4 = extraout_ECX_01;
    } while (iVar5 != 0);
    if ((char)param_1[8] != '\0') {
      FUN_0045c798(param_1);
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


