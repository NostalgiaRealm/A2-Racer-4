
/* ==== FUN_00419ae4 @ 00419ae4 ==== 
 * signature: undefined __register FUN_00419ae4(int param_1, int * param_2)
 * body: 00419ae4-00419ba3
 */

void FUN_00419ae4(int param_1,int *param_2)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_84;
  code *pcStack_80;
  code *pcStack_7c;
  undefined4 local_6c [6];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  UINT local_3c;
  BYTE *local_8;
  
  pcStack_7c = (code *)0x419af8;
  FUN_00419a50(param_1);
  pcStack_7c = (code *)0x419b07;
  FUN_00410b28(param_2,local_6c,100);
  if (local_44 != 0x464d4520) {
    pcStack_7c = (code *)0x419b15;
    FUN_00417720();
  }
  pcStack_7c = (code *)0x419b1d;
  local_8 = (BYTE *)FUN_004026b8(local_3c);
  iVar1 = *(int *)(param_1 + 0x20);
  pcStack_80 = thunk_FUN_00403434;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  pcStack_7c = (code *)&stack0xfffffffc;
  FUN_004027d0(local_6c,(undefined4 *)local_8,100);
  FUN_00410b28(param_2,local_8 + 100,local_3c - 100);
  pHVar2 = SetEnhMetaFileBits(local_3c,local_8);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar2;
  if (pHVar2 == (HENHMETAFILE)0x0) {
    FUN_00417720();
  }
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(int *)(iVar1 + 0xc) = local_4c - local_54;
  *(int *)(iVar1 + 0x10) = local_48 - local_50;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *in_FS_OFFSET = uStack_84;
  pcStack_7c = FUN_00419bab;
  pcStack_80 = (code *)0x419ba3;
  FUN_004026d0((int)local_8);
  return;
}


