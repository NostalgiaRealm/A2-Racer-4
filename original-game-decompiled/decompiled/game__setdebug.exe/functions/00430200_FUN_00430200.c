
/* ==== FUN_00430200 @ 00430200 ==== 
 * signature: undefined __register FUN_00430200(int param_1, HIMAGELIST param_2)
 * body: 00430200-00430236
 */

void FUN_00430200(int param_1,HIMAGELIST param_2)

{
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x28);
  local_c = *(int *)(param_1 + 0x24);
  ImageList_GetIconSize(param_2,&local_8,&local_c);
  *(int *)(param_1 + 0x28) = local_8;
  *(int *)(param_1 + 0x24) = local_c;
  FUN_0043013c(param_1);
  return;
}


