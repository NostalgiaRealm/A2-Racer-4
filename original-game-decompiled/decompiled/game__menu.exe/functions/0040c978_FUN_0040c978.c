
/* ==== FUN_0040c978 @ 0040c978 ==== 
 * signature: undefined __register FUN_0040c978(undefined * param_1, UINT param_2)
 * body: 0040c978-0040c9cb
 */

void FUN_0040c978(undefined *param_1,UINT param_2)

{
  LPCSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  
  pcStack_1c = (code *)0x40c987;
  SetErrorMode(param_2);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  lpLibFileName = FUN_004040a0(param_1);
  LoadLibraryA(lpLibFileName);
  *in_FS_OFFSET = uStack_2c;
  return;
}


