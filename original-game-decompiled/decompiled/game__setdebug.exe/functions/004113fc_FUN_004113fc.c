
/* ==== FUN_004113fc @ 004113fc ==== 
 * signature: undefined __register FUN_004113fc(void)
 * body: 004113fc-00411516;00411570-00411587;004115ae-004115b4
 */

void FUN_004113fc(void)

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
  
  if (DAT_00447614 == (code *)0x0) {
    return;
  }
  puStack_20 = (undefined1 *)0x41141c;
  FUN_0040bc08(DAT_00447610);
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_2c = (code *)0x411434;
  puStack_20 = &stack0xfffffffc;
  piVar1 = (int *)FUN_0040f38c(DAT_00447628);
  pcStack_30 = thunk_FUN_00403434;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (piVar1[2] < 1) {
    *in_FS_OFFSET = uStack_34;
    pcStack_2c = FUN_0041158f;
    pcStack_30 = (code *)0x411587;
    FUN_0040f3f0(DAT_00447628);
    return;
  }
  puStack_38 = (undefined1 *)0x41145a;
  pcStack_2c = (code *)&stack0xfffffffc;
  FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX);
  pcStack_3c = thunk_FUN_00403434;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  pcStack_44 = (code *)0x411477;
  puStack_38 = &stack0xfffffffc;
  piVar2 = (int *)FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_00);
  pcStack_48 = thunk_FUN_00403434;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  iVar8 = 0;
  pcStack_44 = (code *)&stack0xfffffffc;
  do {
    while( true ) {
      if (piVar1[2] <= iVar8) {
        *in_FS_OFFSET = uStack_4c;
        pcStack_44 = FUN_0041151e;
        pcStack_48 = (code *)0x411516;
        FUN_00402d14(piVar2);
        return;
      }
      piVar3 = (int *)FUN_0040f024(piVar1,iVar8);
      iVar4 = (*DAT_00447614)(piVar3[4]);
      uVar6 = extraout_ECX_01;
      uVar7 = extraout_EDX;
      if (iVar4 == 0) break;
LAB_004114b8:
      if (iVar4 != 0) {
        iVar4 = FUN_004112b4(iVar4,(char *)piVar3[5]);
        FUN_0040cf54((int *)piVar3[1],(undefined4 *)piVar3[3],iVar4);
        uVar6 = extraout_ECX_03;
        uVar7 = extraout_EDX_01;
      }
      FUN_0041137c(piVar3[1],uVar7,uVar6,(int)&stack0xfffffffc);
      FUN_0040ef14(piVar1,iVar8);
      FUN_00402d14(piVar3);
    }
    uVar5 = FUN_0040cee0((int *)piVar3[1],(undefined4 *)piVar3[3]);
    uVar6 = extraout_ECX_02;
    uVar7 = extraout_EDX_00;
    if (uVar5 != 0) goto LAB_004114b8;
    FUN_004113b4(piVar3[1],extraout_EDX_00,extraout_ECX_02,(int)&stack0xfffffffc);
    iVar8 = iVar8 + 1;
  } while( true );
}


