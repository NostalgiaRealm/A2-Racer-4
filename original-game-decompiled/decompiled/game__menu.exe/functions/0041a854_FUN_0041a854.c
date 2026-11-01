
/* ==== FUN_0041a854 @ 0041a854 ==== 
 * signature: undefined __register FUN_0041a854(int * param_1, HICON param_2, char param_3)
 * body: 0041a854-0041aa1a
 */

void FUN_0041a854(int *param_1,HICON param_2,char param_3)

{
  LONG *pLVar1;
  LPBITMAPINFO ptVar2;
  BOOL BVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_7c;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined4 local_58;
  int local_50;
  undefined4 local_4c;
  ICONINFO local_48;
  int local_34;
  undefined4 local_2e;
  undefined2 local_2a;
  undefined4 *local_28;
  LPBITMAPINFO local_24;
  undefined4 *local_20;
  LPBITMAPINFO local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
  local_5 = param_3;
  FUN_00402c30(&local_2e,6,0);
  FUN_00402c30(&local_58,0x10,0);
  uStack_70 = 0x41a88c;
  BVar3 = GetIconInfo(param_2,&local_48);
  FUN_0041a848(BVar3);
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  pcStack_78 = (code *)0x41a8af;
  FUN_0041a714(local_48.hbmMask,(int *)&local_c,&local_14,2);
  pcStack_78 = (code *)0x41a8bf;
  FUN_0041a714(local_48.hbmColor,(int *)&local_10,&local_18,0x10);
  local_1c = (LPBITMAPINFO)0x0;
  local_20 = (undefined4 *)0x0;
  local_24 = (LPBITMAPINFO)0x0;
  local_28 = (undefined4 *)0x0;
  pcStack_78 = thunk_FUN_004036bc;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  local_1c = (LPBITMAPINFO)FUN_0040816c(local_c);
  local_20 = FUN_0040816c(local_14);
  local_24 = (LPBITMAPINFO)FUN_0040816c(local_10);
  local_28 = FUN_0040816c(local_18);
  FUN_0041a780(local_48.hbmMask,(HPALETTE)0x0,local_1c,2,local_20);
  uVar4 = 0x10;
  FUN_0041a780(local_48.hbmColor,(HPALETTE)0x0,local_24,0x10,local_28);
  if (local_5 != '\0') {
    local_34 = local_10 + 0x16 + local_18 + local_14;
    (**(code **)(*param_1 + 8))(param_1,&local_34,4);
  }
  local_2e._2_2_ = 1;
  local_2a = 1;
  (**(code **)(*param_1 + 8))(param_1,&local_2e,6);
  ptVar2 = local_24;
  local_58._0_1_ = (undefined1)(local_24->bmiHeader).biWidth;
  local_58._1_1_ = (undefined1)(local_24->bmiHeader).biHeight;
  local_58._2_2_ = (local_24->bmiHeader).biPlanes * (local_24->bmiHeader).biBitCount;
  local_50 = local_10 + local_18 + local_14;
  local_4c = 0x16;
  (**(code **)(*param_1 + 8))(param_1,&local_58,0x10);
  pLVar1 = &(ptVar2->bmiHeader).biHeight;
  *pLVar1 = *pLVar1 + (ptVar2->bmiHeader).biHeight;
  (**(code **)(*param_1 + 8))(param_1,local_24,local_10);
  (**(code **)(*param_1 + 8))(param_1,local_28,local_18);
  (**(code **)(*param_1 + 8))(param_1,local_20,local_14);
  *in_FS_OFFSET = uVar4;
  FUN_00402794((int)local_24);
  FUN_00402794((int)local_28);
  FUN_00402794((int)local_1c);
  FUN_00402794((int)local_20);
  return;
}


