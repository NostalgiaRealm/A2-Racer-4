
/* ==== FUN_0041c25c @ 0041c25c ==== 
 * signature: undefined __register FUN_0041c25c(int param_1, int * param_2)
 * body: 0041c25c-0041c31b
 */

void FUN_0041c25c(int param_1,int *param_2)

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
  
  pcStack_7c = (code *)0x41c270;
  FUN_0041c1c8(param_1);
  pcStack_7c = (code *)0x41c27f;
  FUN_004126b8(param_2,local_6c,100);
  if (local_44 != 0x464d4520) {
    pcStack_7c = (code *)0x41c28d;
    FUN_004197c8();
  }
  pcStack_7c = (code *)0x41c295;
  local_8 = (BYTE *)FUN_0040277c(local_3c);
  iVar1 = *(int *)(param_1 + 0x20);
  pcStack_80 = thunk_FUN_004036bc;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  pcStack_7c = (code *)&stack0xfffffffc;
  FUN_004028d8(local_6c,(undefined4 *)local_8,100);
  FUN_004126b8(param_2,local_8 + 100,local_3c - 100);
  pHVar2 = SetEnhMetaFileBits(local_3c,local_8);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar2;
  if (pHVar2 == (HENHMETAFILE)0x0) {
    FUN_004197c8();
  }
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(int *)(iVar1 + 0xc) = local_4c - local_54;
  *(int *)(iVar1 + 0x10) = local_48 - local_50;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *in_FS_OFFSET = uStack_84;
  pcStack_7c = FUN_0041c323;
  pcStack_80 = (code *)0x41c31b;
  FUN_00402794((int)local_8);
  return;
}


