
/* ==== TGraphic.vmt_018 @ 0041ab44 ==== 
 * signature: undefined TGraphic.vmt_018(void)
 * body: 0041ab44-0041ac57;0041ac7c-0041ac85
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
    puStack_20 = (undefined1 *)0x41ab5c;
    iVar4 = FUN_00402ee0(param_1);
    puStack_20 = (undefined1 *)0x41ab65;
    iVar5 = FUN_00402ee0(param_2);
    if (iVar4 == iVar5) {
      bVar1 = true;
      goto LAB_0041ab6f;
    }
  }
  bVar1 = false;
LAB_0041ab6f:
  puStack_20 = (undefined1 *)0x41ab79;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 == '\0') {
    puStack_20 = (undefined1 *)0x41ab84;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 == '\0') {
      if (!bVar1) {
        return 0;
      }
      puStack_20 = (undefined1 *)0x41abc2;
      piVar6 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_vmt_000_0040f194,'\x01',extraout_ECX);
      pcStack_24 = thunk_FUN_004036bc;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      pcStack_2c = (code *)0x41abdd;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0x44))(param_1,piVar6);
      pcStack_2c = (code *)0x41abe9;
      piVar7 = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_vmt_000_0040f194,'\x01',extraout_ECX_00
                                  );
      pcStack_30 = thunk_FUN_004036bc;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      pcStack_2c = (code *)&stack0xfffffffc;
      (**(code **)(*param_2 + 0x44))(param_2,piVar7);
      iVar4 = FUN_00412680(piVar6);
      iVar5 = FUN_00412680(piVar7);
      if (iVar4 == iVar5) {
        uVar8 = FUN_00412680(piVar6);
        FUN_00408298((int *)piVar6[1],(int *)piVar7[1],uVar8);
      }
      *in_FS_OFFSET = uStack_34;
      pcStack_2c = FUN_0041ac5f;
      pcStack_30 = (code *)0x41ac57;
      uVar3 = FUN_00402f9c(piVar7);
      return uVar3;
    }
  }
  puStack_20 = (undefined1 *)0x41ab8f;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 != '\0') {
    puStack_20 = (undefined1 *)0x41ab9a;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


