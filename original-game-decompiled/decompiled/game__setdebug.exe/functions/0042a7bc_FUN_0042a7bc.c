
/* ==== FUN_0042a7bc @ 0042a7bc ==== 
 * signature: undefined __register FUN_0042a7bc(int param_1)
 * body: 0042a7bc-0042a7f3
 */

void FUN_0042a7bc(int param_1)

{
  tagRECT local_14;
  
  FUN_004241fc(param_1,&local_14.left);
  InflateRect(&local_14,1,1);
  InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x24) + 0x14c),&local_14,-1);
  return;
}


