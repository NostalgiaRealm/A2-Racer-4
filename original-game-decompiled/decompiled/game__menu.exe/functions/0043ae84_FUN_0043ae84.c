
/* ==== FUN_0043ae84 @ 0043ae84 ==== 
 * signature: undefined __register FUN_0043ae84(int * param_1, HIMAGELIST param_2)
 * body: 0043ae84-0043afd1
 */

void FUN_0043ae84(int *param_1,HIMAGELIST param_2)

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
  
  uStack_3c = 0x43aead;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040f7e8(0,0,param_1[10],&local_24.left,param_1[9]);
  FUN_0043b8f4((int)local_8);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x43aecf;
  local_10 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX);
  pcStack_44 = thunk_FUN_004036bc;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  pcStack_4c = (code *)0x43aeee;
  puStack_40 = &stack0xfffffffc;
  (**(code **)(*local_10 + 0x34))(local_10,local_8[9]);
  pcStack_4c = (code *)0x43aefc;
  (**(code **)(*local_10 + 0x40))(local_10,local_8[10]);
  pcStack_4c = (code *)0x43af08;
  local_14 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX_00);
  pcStack_50 = thunk_FUN_004036bc;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  pcStack_4c = (code *)&stack0xfffffffc;
  FUN_0041ecdc(local_14,1);
  (**(code **)(*local_14 + 0x34))(local_14,local_8[9]);
  (**(code **)(*local_14 + 0x40))(local_14,local_8[10]);
  iVar1 = ImageList_GetImageCount(local_c);
  if (-1 < iVar1 + -1) {
    i = 0;
    do {
      piVar2 = (int *)FUN_0041df1c(local_10);
      FUN_0041907c(piVar2,&local_24);
      UVar6 = 0;
      iVar5 = 0;
      iVar4 = 0;
      pHVar3 = (HDC)FUN_004194d8(piVar2);
      ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
      piVar2 = (int *)FUN_0041df1c(local_14);
      FUN_0041907c(piVar2,&local_24);
      UVar6 = 0x10;
      iVar5 = 0;
      iVar4 = 0;
      pHVar3 = (HDC)FUN_004194d8(piVar2);
      ImageList_Draw(local_c,i,pHVar3,iVar4,iVar5,UVar6);
      FUN_0043a6ec(local_8,local_10,local_14);
      i = i + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_54;
  pcStack_4c = FUN_0043afd9;
  pcStack_50 = (code *)0x43afd1;
  FUN_00402f9c(local_14);
  return;
}


