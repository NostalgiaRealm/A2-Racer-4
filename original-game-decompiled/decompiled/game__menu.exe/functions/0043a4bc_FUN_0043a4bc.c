
/* ==== FUN_0043a4bc @ 0043a4bc ==== 
 * signature: undefined __register FUN_0043a4bc(int param_1, HIMAGELIST param_2)
 * body: 0043a4bc-0043a4f2
 */

void FUN_0043a4bc(int param_1,HIMAGELIST param_2)

{
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x28);
  local_c = *(int *)(param_1 + 0x24);
  ImageList_GetIconSize(param_2,&local_8,&local_c);
  *(int *)(param_1 + 0x28) = local_8;
  *(int *)(param_1 + 0x24) = local_c;
  FUN_0043a3f8(param_1);
  return;
}


