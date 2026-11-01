
/* ==== FUN_00429298 @ 00429298 ==== 
 * signature: undefined __register FUN_00429298(int param_1)
 * body: 00429298-004292cf
 */

void FUN_00429298(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  code *pcStack_c;
  int local_8;
  
  pcStack_c = (code *)0x4292a7;
  local_8 = param_1;
  FUN_00429324(param_1);
  pcStack_10 = thunk_FUN_004036bc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  pcStack_c = (code *)&stack0xfffffffc;
  EmptyClipboard();
  *in_FS_OFFSET = uStack_14;
  pcStack_c = FUN_004292d7;
  pcStack_10 = (code *)0x4292cf;
  FUN_004292f8(local_8);
  return;
}


