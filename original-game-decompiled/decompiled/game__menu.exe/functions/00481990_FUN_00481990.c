
/* ==== FUN_00481990 @ 00481990 ==== 
 * signature: undefined FUN_00481990(void)
 * body: 00481990-00481ad2
 */

void FUN_00481990(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar4;
  int *piVar5;
  int aiStack_2c [4];
  int aiStack_1c [4];
  int *piStack_c;
  int *piStack_8;
  
  iVar1 = FUN_0040312c(*(int **)(*(int *)(param_2 + 300) + 0xc),
                       (int)&PTR_TPersistent_vmt_000_00454aa4);
  piStack_8 = (int *)FUN_00456800(iVar1,extraout_EDX,extraout_ECX);
  piVar4 = (int *)0x0;
  uVar2 = FUN_00403114(param_3,(int)&PTR_TControl_vmt_000_0044e5dc);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_00403114(param_3,(int)&PTR_TControl_vmt_000_004638d0);
    if ((char)uVar2 == '\0') {
      FUN_00403c40("CopyBackGroundOntoPanel : aDestImg is not TImage or TGDIGraphic");
    }
    else {
      piStack_c = (int *)FUN_0040312c(param_3,(int)&PTR_TControl_vmt_000_004638d0);
      iVar1 = 0x18;
      piVar4 = (int *)FUN_0040312c(*(int **)(piStack_c[0x4b] + 0xc),
                                   (int)&PTR_TPersistent_vmt_000_00454aa4);
      FUN_00457194(piVar4,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c),iVar1);
      iVar1 = FUN_0040312c(*(int **)(piStack_c[0x4b] + 0xc),(int)&PTR_TPersistent_vmt_000_00454aa4);
      piVar4 = (int *)FUN_00456800(iVar1,extraout_EDX_00,extraout_ECX_00);
      TControl_set_Width(piStack_c,*(undefined4 *)(param_1 + 0x38));
      TControl_set_Height(piStack_c,*(undefined4 *)(param_1 + 0x3c));
    }
  }
  else {
    FUN_0040312c(param_3,(int)&PTR_TControl_vmt_000_0044e5dc);
    piVar4 = (int *)FUN_0044fd50();
  }
  uVar3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c);
  if (SCARRY4(*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x3c))) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  piVar5 = aiStack_1c;
  iVar1 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38);
  if (SCARRY4(*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x38))) {
    thunk_FUN_00402808((uint)piVar5);
    iVar1 = extraout_ECX_01;
  }
  FUN_0040f7e8(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),iVar1,piVar5,uVar3);
  piVar5 = aiStack_1c;
  FUN_0040f7e8(0,0,*(undefined4 *)(param_1 + 0x38),aiStack_2c,*(undefined4 *)(param_1 + 0x3c));
  FUN_00418f14(piVar4,aiStack_2c,piStack_8,piVar5);
  FUN_0042e988(param_3);
  return;
}


