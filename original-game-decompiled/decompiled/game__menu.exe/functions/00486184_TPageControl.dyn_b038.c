
/* ==== TPageControl.dyn_b038 @ 00486184 ==== 
 * signature: undefined TPageControl.dyn_b038(void)
 * body: 00486184-00486239;00486257-004862a0
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TPageControl_dyn_b038(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  uint *puStack_c;
  int *piStack_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_c = (uint *)0x0;
  puStack_20 = &UNK_004862be;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *(undefined4 *)(param_2 + 0xc) = 0;
  puStack_28 = (undefined1 *)0x4861b9;
  piStack_8 = param_1;
  iVar4 = TTabSheet_vmt_02c(&PTR_TWinControl_vmt_000_00483258,1,param_1);
  piStack_8[0x92] = iVar4;
  puStack_2c = &UNK_004862a1;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_38 = &UNK_0048623a;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  piVar2 = *(int **)(*(int *)(param_2 + 4) + 0x38);
  puStack_34 = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  uVar5 = FUN_00403114(piVar2,(int)&PTR_TWinControl_vmt_000_00442cf0);
  if ((char)uVar5 != '\0') {
    TGroupBox_get_Caption((int)piVar2,(int *)&puStack_c);
    TGroupBox_set_Caption(iVar4,puStack_c);
  }
  FUN_004856b8((int *)piStack_8[0x92],piStack_8);
  FUN_00403178(piVar2,piStack_8,*(int *)(param_2 + 4) + 0x44);
  puVar3 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  cVar1 = *(char *)((int)piVar2 + 0x47);
  puStack_34 = (undefined1 *)0x48626a;
  TTabSheet_set_TabVisible
            (piStack_8[0x92],
             CONCAT31((int3)(CONCAT22((short)((uint)iVar4 >> 0x10),0xffd1) >> 8),cVar1),puVar3);
  uVar5 = extraout_ECX;
  uVar6 = extraout_EDX;
  if (cVar1 != '\0') {
    puStack_34 = (undefined1 *)0x48627f;
    TPageControl_set_ActivePage(piStack_8,(int *)piStack_8[0x92]);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX_00;
  }
  puStack_34 = (undefined1 *)0x486288;
  TGroupBox_set_Align(piVar2,CONCAT31((int3)((uint)uVar6 >> 8),5),uVar5);
  *in_FS_OFFSET = uStack_30;
  piStack_8[0x92] = 0;
  return;
}


