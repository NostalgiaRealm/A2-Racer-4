
/* ==== FUN_004293a0 @ 004293a0 ==== 
 * signature: undefined __register FUN_004293a0(int param_1, uint param_2, undefined4 * param_3, uint param_4)
 * body: 004293a0-00429432
 */

void FUN_004293a0(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x4293bb;
  FUN_00429324(param_1);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_30 = 0x4293d4;
  puStack_1c = &stack0xfffffffc;
  hMem = GlobalAlloc(0x2002,param_4);
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = GlobalLock(hMem);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_004028d8(param_3,puVar1,param_4);
  FUN_004292dc(param_1);
  SetClipboardData(param_2 & 0xffff,hMem);
  *in_FS_OFFSET = uStack_3c;
  uStack_3c = 0x429432;
  GlobalUnlock(hMem);
  return;
}


