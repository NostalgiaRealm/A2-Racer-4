
/* ==== TDaviAnimation.vmt_060 @ 0045c0e8 ==== 
 * signature: undefined TDaviAnimation.vmt_060(void)
 * body: 0045c0e8-0045c177
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_060(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iStack_c;
  int iStack_8;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if ((cVar1 == '\0') && (param_1[9] != 0)) {
    FUN_00451ac4((undefined4 *)param_1[0xc]);
    iStack_c = *(int *)(param_1[10] + 4) + -1;
    uVar3 = extraout_ECX;
    if (*(int *)(param_1[10] + 4) == 0) {
      iStack_c = thunk_FUN_00402808(0xffffffff);
      uVar3 = extraout_ECX_00;
    }
    if (iStack_c == -1) {
      iStack_c = thunk_FUN_00402808(0xffffffff);
      uVar3 = extraout_ECX_01;
    }
    iStack_c = iStack_c + 1;
    iStack_8 = 0;
    do {
      piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',uVar3);
      uVar3 = (**(code **)(*(int *)param_1[9] + 0x1c))((int *)param_1[9],iStack_8);
      (**(code **)(*piVar2 + 8))(piVar2,uVar3);
      (**(code **)(*(int *)param_1[0xc] + 0xc))((int *)param_1[0xc],piVar2);
      iStack_8 = iStack_8 + 1;
      iStack_c = iStack_c + -1;
      uVar3 = extraout_ECX_02;
    } while (iStack_c != 0);
    FUN_0045be3c(param_1,param_1 + 9);
  }
  return;
}


