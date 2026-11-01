
/* ==== FUN_004307a4 @ 004307a4 ==== 
 * signature: undefined __register FUN_004307a4(int * param_1, HIMAGELIST param_2)
 * body: 004307a4-004308f1
 */

void FUN_004307a4(int *param_1,HIMAGELIST param_2)

{
  int iVar1;
  int *piVar2;
  HDC pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int i;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  UINT UVar6;
  undefined4 uStack_54;
  code *pcStack_50;
  code *pcStack_4c;
  undefined4 uStack_48;
  code *pcStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  RECT local_24;
  int *local_14;
  int *local_10;
  HIMAGELIST local_c;
  int *local_8;
  
  uStack_3c = 0x4307cd;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040e5ac(0,0,param_1[10],&local_24.left,param_1[9]);
  FUN_00431214((int)local_8);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x4307ef;
  local_10 = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',extraout_ECX);
  pcStack_44 = thunk_FUN_00403434;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  pcStack_4c = (code *)0x43080e;
  puStack_40 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
  pcStack_4c = (code *)0x43081c;
  (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
  pcStack_4c = (code *)0x430828;
  local_14 = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',extraout_ECX_00);
  pcStack_50 = thunk_FUN_00403434;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  pcStack_4c = (code *)&stack0xfffffffc;
  FUN_0041c378(local_14,1);
  (**(code **)(*local_14 + 0x34))(local_14,local_8[9]);
  (**(code **)(*local_14 + 0x40))(local_14,local_8[10]);
  iVar1 = ImageList_GetImageCount(local_c);
  if (-1 < iVar1 + -1) {
    i = 0;
    do {
      piVar2 = (int *)FUN_0041b6f8(local_10);
      FUN_00417100(piVar2,&local_24);
      UVar6 = 0;
      iVar5 = 0;
      iVar4 = 0;
      pHVar3 = (HDC)FUN_00417430(piVar2);
      ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
      piVar2 = (int *)FUN_0041b6f8(local_14);
      FUN_00417100(piVar2,&local_24);
      UVar6 = 0x10;
      iVar5 = 0;
      iVar4 = 0;
      pHVar3 = (HDC)FUN_00417430(piVar2);
      ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
      FUN_00430398(local_8,local_10,local_14);
      i = i + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_54;
  pcStack_4c = FUN_004308f9;
  pcStack_50 = (code *)0x4308f1;
  FUN_00402d14(local_14);
  return;
}


