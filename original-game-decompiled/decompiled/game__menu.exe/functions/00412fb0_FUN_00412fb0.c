
/* ==== FUN_00412fb0 @ 00412fb0 ==== 
 * signature: undefined __register FUN_00412fb0(void)
 * body: 00412fb0-004130ca;00413124-0041313b;00413162-00413168
 */

void FUN_00412fb0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  code *pcStack_48;
  code *pcStack_44;
  undefined4 uStack_40;
  code *pcStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  
  if (DAT_004ac61c == (code *)0x0) {
    return;
  }
  puStack_20 = (undefined1 *)0x412fd0;
  FUN_0040c8f8(DAT_004ac618);
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_2c = (code *)0x412fe8;
  puStack_20 = &stack0xfffffffc;
  piVar1 = (int *)FUN_00410750(DAT_004ac630);
  pcStack_30 = thunk_FUN_004036bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (piVar1[2] < 1) {
    *in_FS_OFFSET = uStack_34;
    pcStack_2c = FUN_00413143;
    pcStack_30 = (code *)0x41313b;
    FUN_004107b4(DAT_004ac630);
    return;
  }
  puStack_38 = (undefined1 *)0x41300e;
  pcStack_2c = (code *)&stack0xfffffffc;
  FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX);
  pcStack_3c = thunk_FUN_004036bc;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  pcStack_44 = (code *)0x41302b;
  puStack_38 = &stack0xfffffffc;
  piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
  pcStack_48 = thunk_FUN_004036bc;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  iVar8 = 0;
  pcStack_44 = (code *)&stack0xfffffffc;
  do {
    while( true ) {
      if (piVar1[2] <= iVar8) {
        *in_FS_OFFSET = uStack_4c;
        pcStack_44 = FUN_004130d2;
        pcStack_48 = (code *)0x4130ca;
        FUN_00402f9c(piVar2);
        return;
      }
      piVar3 = (int *)FUN_004102b0(piVar1,iVar8);
      iVar4 = (*DAT_004ac61c)(piVar3[4]);
      uVar6 = extraout_ECX_01;
      uVar7 = extraout_EDX;
      if (iVar4 == 0) break;
LAB_0041306c:
      if (iVar4 != 0) {
        iVar4 = FUN_00412e68(iVar4,(char *)piVar3[5]);
        FUN_0040dff4((int *)piVar3[1],(undefined4 *)piVar3[3],iVar4);
        uVar6 = extraout_ECX_03;
        uVar7 = extraout_EDX_01;
      }
      FUN_00412f30(piVar3[1],uVar7,uVar6,(int)&stack0xfffffffc);
      FUN_00410150(piVar1,iVar8);
      FUN_00402f9c(piVar3);
    }
    uVar5 = FUN_0040df80((int *)piVar3[1],(undefined4 *)piVar3[3]);
    uVar6 = extraout_ECX_02;
    uVar7 = extraout_EDX_00;
    if (uVar5 != 0) goto LAB_0041306c;
    FUN_00412f68(piVar3[1],extraout_EDX_00,extraout_ECX_02,(int)&stack0xfffffffc);
    iVar8 = iVar8 + 1;
  } while( true );
}


