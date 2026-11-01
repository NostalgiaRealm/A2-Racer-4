
/* ==== FUN_0043a940 @ 0043a940 ==== 
 * signature: undefined __register FUN_0043a940(int * param_1, int param_2, int * param_3, int param_4)
 * body: 0043a940-0043aaca;0043ab0f-0043ab56
 */

void FUN_0043a940(int *param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  HDC pHVar3;
  HIMAGELIST p_Var4;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  BOOL BVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined4 *in_FS_OFFSET;
  int iVar8;
  int iVar9;
  int iVar10;
  UINT UVar11;
  undefined4 uStack_54;
  code *pcStack_50;
  code *pcStack_4c;
  undefined4 uStack_48;
  code *pcStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  code *pcStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  pcStack_28 = (code *)&stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x43a96d;
  local_8 = param_1;
  bVar1 = FUN_0043a3e4((int)param_1);
  uVar6 = extraout_ECX;
  uVar7 = extraout_EDX;
  if (bVar1) {
    puStack_34 = (undefined1 *)0x43a97f;
    FUN_0043b1ac((int)local_8,param_3);
    puStack_34 = (undefined1 *)0x43a98c;
    local_c = FUN_0043a7b8(local_8,param_3,param_4);
    if (local_c != -1) {
      pcStack_38 = thunk_FUN_004036bc;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_40 = (undefined1 *)0x43a9b3;
      puStack_34 = &stack0xfffffffc;
      local_10 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX_00);
      pcStack_44 = thunk_FUN_004036bc;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_48;
      pcStack_4c = (code *)0x43a9d2;
      puStack_40 = &stack0xfffffffc;
      (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
      pcStack_4c = (code *)0x43a9e0;
      (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
      pcStack_4c = (code *)0x43a9ec;
      local_14 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX_01);
      pcStack_50 = thunk_FUN_004036bc;
      uStack_54 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_54;
      pcStack_4c = (code *)&stack0xfffffffc;
      FUN_0041ecdc(local_14,1);
      (**(code **)(*local_14 + 0x34))(local_14,local_8[9]);
      (**(code **)(*local_14 + 0x40))(local_14,local_8[10]);
      UVar11 = 0;
      iVar10 = 0;
      iVar9 = 0;
      piVar2 = (int *)FUN_0041df1c(local_10);
      pHVar3 = (HDC)FUN_004194d8(piVar2);
      iVar8 = local_c;
      p_Var4 = (HIMAGELIST)FUN_0043a5b8(local_8);
      ImageList_Draw(p_Var4,iVar8,pHVar3,iVar9,iVar10,UVar11);
      UVar11 = 0x10;
      iVar10 = 0;
      iVar9 = 0;
      piVar2 = (int *)FUN_0041df1c(local_14);
      pHVar3 = (HDC)FUN_004194d8(piVar2);
      iVar8 = local_c;
      p_Var4 = (HIMAGELIST)FUN_0043a5b8(local_8);
      ImageList_Draw(p_Var4,iVar8,pHVar3,iVar9,iVar10,UVar11);
      hbmMask = (HBITMAP)(**(code **)(*local_14 + 0x60))();
      hbmImage = (HBITMAP)(**(code **)(*local_10 + 0x60))();
      p_Var4 = (HIMAGELIST)FUN_0043a5b8(local_8);
      BVar5 = ImageList_Replace(p_Var4,param_2,hbmImage,hbmMask);
      if (BVar5 == 0) {
        FUN_00405808((undefined4 *)PTR_PTR_004ab6b4,(int *)&local_18);
        piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_18);
        FUN_004036f4(piVar2);
      }
      *in_FS_OFFSET = uStack_54;
      pcStack_4c = FUN_0043aad2;
      pcStack_50 = (code *)0x43aaca;
      FUN_00402f9c(local_14);
      return;
    }
    puStack_34 = (undefined1 *)0x43ab1c;
    FUN_00405808((undefined4 *)PTR_PTR_004ab6b4,(int *)&local_1c);
    puStack_34 = (undefined1 *)0x43ab2b;
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_1c);
    puStack_34 = (undefined1 *)0x43ab30;
    FUN_004036f4(piVar2);
    uVar6 = extraout_ECX_02;
    uVar7 = extraout_EDX_00;
  }
  puStack_34 = (undefined1 *)0x43ab3c;
  FUN_00403178(local_8,uVar7,uVar6);
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_0043ab5e;
  pcStack_2c = (code *)0x43ab56;
  FUN_00403c80((int *)&local_1c,2);
  return;
}


