
/* ==== TfrmResults.FormShow @ 004a0624 ==== 
 * signature: undefined TfrmResults.FormShow(void)
 * body: 004a0624-004a09a1
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmResults_FormShow(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar7;
  int extraout_EDX;
  int iVar8;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  undefined4 extraout_EDX_08;
  int *in_FS_OFFSET;
  undefined4 *puVar9;
  int iStack_134;
  undefined *puStack_130;
  undefined1 *puStack_12c;
  undefined4 *puStack_11c;
  uint *puStack_118;
  uint *puStack_114;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  
  puStack_12c = &stack0xfffffffc;
  puStack_118 = (uint *)0x0;
  puStack_11c = (undefined4 *)0x0;
  puStack_114 = (uint *)0x0;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  puStack_130 = &UNK_004a09a2;
  iStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_134;
  TBaseFormOneWay_FormShow((int)param_1);
  FUN_00402ee4(*param_1,abStack_110);
  FUN_00403e80(&iStack_10,abStack_110);
  FUN_00403f9c((int *)&puStack_c,3);
  puVar9 = puStack_c;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar9,0);
  FUN_00480448(*(int **)PTR_DAT_004ab694,(undefined4 *)&UNK_004a09dc);
  FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xbe],(undefined4 *)"focus"
              );
  iVar4 = FUN_00480390(*(int *)PTR_DAT_004ab694,0);
  iVar4 = *(int *)(iVar4 + 8);
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
               (undefined4 *)"win_ch",iVar4);
  iVar5 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  uVar3 = iVar5 - 1;
  if (SBORROW4(iVar5,1)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  if (-1 < (int)uVar3) {
    iStack_8 = uVar3 + 1;
    iVar5 = 0;
    do {
      piVar6 = TCustomGDIGraphic_vmt_02c((int *)&PTR_TControl_vmt_000_004638d0,'\x01',param_1);
      (**(code **)(*piVar6 + 0x60))(piVar6,param_1);
      TControl_set_Left(piVar6,*(undefined4 *)(param_1[0xbf] + 0x30));
      uVar3 = *(uint *)(param_1[0xbf] + 0x34);
      iVar7 = *(int *)(param_1[0xc0] + 0x34) - uVar3;
      if (SBORROW4(*(int *)(param_1[0xc0] + 0x34),uVar3)) {
        uVar3 = thunk_FUN_00402808(uVar3);
        iVar7 = extraout_EDX;
      }
      iVar8 = (int)((longlong)iVar7 * (longlong)iVar5);
      if ((longlong)iVar8 != (longlong)iVar7 * (longlong)iVar5) {
        uVar3 = thunk_FUN_00402808(uVar3);
        iVar8 = extraout_EDX_00;
      }
      iVar7 = iVar8 + uVar3;
      if (SCARRY4(iVar8,uVar3)) {
        thunk_FUN_00402808(uVar3);
        iVar7 = extraout_EDX_01;
      }
      TControl_set_Top(piVar6,iVar7);
      (**(code **)(*piVar6 + 0x98))(piVar6,1);
      iVar7 = FUN_00480390(*(int *)PTR_DAT_004ab694,iVar5);
      FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),piVar6,(undefined4 *)"res_ch",
                   *(int *)(iVar7 + 8));
      piVar6 = TCustomLabel_vmt_02c((int *)&PTR_TControl_vmt_000_00421a9c,'\x01',param_1);
      (**(code **)(*piVar6 + 0x60))(piVar6,param_1);
      TControl_set_Left(piVar6,*(undefined4 *)(param_1[0xc2] + 0x30));
      uVar3 = param_1[0xbf];
      iVar7 = *(int *)(param_1[0xc0] + 0x34) - *(int *)(uVar3 + 0x34);
      if (SBORROW4(*(int *)(param_1[0xc0] + 0x34),*(int *)(uVar3 + 0x34))) {
        uVar3 = thunk_FUN_00402808(uVar3);
        iVar7 = extraout_EDX_02;
      }
      iVar8 = (int)((longlong)iVar7 * (longlong)iVar5);
      if ((longlong)iVar8 != (longlong)iVar7 * (longlong)iVar5) {
        thunk_FUN_00402808(uVar3);
        iVar8 = extraout_EDX_03;
      }
      piVar1 = (int *)(param_1[0xc2] + 0x34);
      iVar7 = iVar8 + *piVar1;
      if (SCARRY4(iVar8,*piVar1)) {
        thunk_FUN_00402808(param_1[0xc2]);
        iVar7 = extraout_EDX_04;
      }
      TControl_set_Top(piVar6,iVar7);
      TLabel_set_Transparent(piVar6,1);
      iVar7 = TFont_get_Size(*(int *)(param_1[0xc2] + 0x58));
      TFont_set_Size((int *)piVar6[0x16],iVar7);
      TFont_set_Color((int *)piVar6[0x16],*(int *)(*(int *)(param_1[0xc2] + 0x58) + 0x18),
                      extraout_ECX);
      if (iVar5 == 0) {
        iVar7 = FUN_00480390(*(int *)PTR_DAT_004ab694,0);
        FUN_00481090(*(undefined4 *)(iVar7 + 4),&puStack_114);
        TGroupBox_set_Caption((int)piVar6,puStack_114);
      }
      else {
        iVar7 = FUN_00480390(*(int *)PTR_DAT_004ab694,iVar5);
        iVar7 = *(int *)(iVar7 + 4);
        iVar8 = FUN_00480390(*(int *)PTR_DAT_004ab694,0);
        uVar3 = iVar7 - *(int *)(iVar8 + 4);
        if (SBORROW4(iVar7,*(int *)(iVar8 + 4))) {
          uVar3 = thunk_FUN_00402808(uVar3);
        }
        FUN_00481090(uVar3,&puStack_11c);
        FUN_00403f28((int *)&puStack_118,(undefined4 *)&UNK_004a0a1c,puStack_11c);
        TGroupBox_set_Caption((int)piVar6,puStack_118);
      }
      iVar5 = iVar5 + 1;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
  }
  TControl_set_Left((int *)param_1[0xbe],*(undefined4 *)(param_1[0xc1] + 0x30));
  piVar6 = (int *)(param_1[0xbf] + 0x34);
  iVar5 = *(int *)(param_1[0xc0] + 0x34) - *piVar6;
  if (SBORROW4(*(int *)(param_1[0xc0] + 0x34),*piVar6)) {
    thunk_FUN_00402808(param_1[0xbf]);
    iVar5 = extraout_EDX_05;
  }
  lVar2 = (longlong)iVar5 * (longlong)*(int *)(*(uint *)PTR_DAT_004ab694 + 0xa4);
  iVar5 = (int)lVar2;
  if (iVar5 != lVar2) {
    thunk_FUN_00402808(*(uint *)PTR_DAT_004ab694);
    iVar5 = extraout_EDX_06;
  }
  piVar6 = (int *)(param_1[0xc1] + 0x34);
  iVar7 = iVar5 + *piVar6;
  if (SCARRY4(iVar5,*piVar6)) {
    thunk_FUN_00402808(param_1[0xc1]);
    iVar7 = extraout_EDX_07;
  }
  TControl_set_Top((int *)param_1[0xbe],iVar7);
  FUN_0042e978((int *)param_1[0xbe],extraout_EDX_08,extraout_ECX_00);
  (**(code **)(*(int *)param_1[0xbc] + 0xb4))();
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = iVar4;
  FUN_00403c80((int *)&puStack_11c,3);
  FUN_00403c80(&iStack_10,2);
  return;
}


