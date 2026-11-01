
/* ==== TGraphic.vmt_018 @ 00418a9c ==== 
 * signature: undefined TGraphic.vmt_018(void)
 * body: 00418a9c-00418baf;00418bd4-00418bdd
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined1 TGraphic_vmt_018(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  
  if (param_2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x418ab4;
    iVar4 = FUN_00402c5c(param_1);
    puStack_20 = (undefined1 *)0x418abd;
    iVar5 = FUN_00402c5c(param_2);
    if (iVar4 == iVar5) {
      bVar1 = true;
      goto LAB_00418ac7;
    }
  }
  bVar1 = false;
LAB_00418ac7:
  puStack_20 = (undefined1 *)0x418ad1;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 == '\0') {
    puStack_20 = (undefined1 *)0x418adc;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 == '\0') {
      if (!bVar1) {
        return 0;
      }
      puStack_20 = (undefined1 *)0x418b1a;
      piVar6 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_vmt_000_0040df58,'\x01',extraout_ECX);
      pcStack_24 = thunk_FUN_00403434;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      pcStack_2c = (code *)0x418b35;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0x44))(param_1,piVar6);
      pcStack_2c = (code *)0x418b41;
      piVar7 = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_vmt_000_0040df58,'\x01',extraout_ECX_00
                                  );
      pcStack_30 = thunk_FUN_00403434;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      pcStack_2c = (code *)&stack0xfffffffc;
      (**(code **)(*param_2 + 0x44))(param_2,piVar7);
      iVar4 = FUN_00410af0(piVar6);
      iVar5 = FUN_00410af0(piVar7);
      if (iVar4 == iVar5) {
        uVar8 = FUN_00410af0(piVar6);
        FUN_00407a5c((int *)piVar6[1],(int *)piVar7[1],uVar8);
      }
      *in_FS_OFFSET = uStack_34;
      pcStack_2c = FUN_00418bb7;
      pcStack_30 = (code *)0x418baf;
      uVar3 = FUN_00402d14(piVar7);
      return uVar3;
    }
  }
  puStack_20 = (undefined1 *)0x418ae7;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 != '\0') {
    puStack_20 = (undefined1 *)0x418af2;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


