
/* ==== FUN_004348e8 @ 004348e8 ==== 
 * signature: undefined __register FUN_004348e8(int param_1)
 * body: 004348e8-0043491f
 */

void FUN_004348e8(int param_1)

{
  tagRECT local_14;
  
  FUN_0042e13c(param_1,&local_14.left);
  InflateRect(&local_14,1,1);
  InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x24) + 0x14c),&local_14,-1);
  return;
}


