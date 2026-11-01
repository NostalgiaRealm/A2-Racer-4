
/* ==== FUN_00429688 @ 00429688 ==== 
 * signature: undefined __register FUN_00429688(int param_1, int param_2)
 * body: 00429688-004296fc
 */

void FUN_00429688(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  HANDLE local_14;
  ushort local_e;
  HANDLE local_c;
  int local_8;
  
  pcStack_1c = (code *)0x42969c;
  local_8 = param_1;
  FUN_00429324(param_1);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_1c = (code *)&stack0xfffffffc;
  FUN_004292dc(local_8);
  local_14 = (HANDLE)0x0;
  FUN_0041b618(param_2,&local_e,&local_c,&local_14);
  SetClipboardData((uint)local_e,local_c);
  if (local_14 != (HANDLE)0x0) {
    SetClipboardData(9,local_14);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00429704;
  pcStack_20 = (code *)0x4296fc;
  FUN_004292f8(local_8);
  return;
}


