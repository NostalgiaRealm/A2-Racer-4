
/* ==== FUN_0040bc88 @ 0040bc88 ==== 
 * signature: undefined __register FUN_0040bc88(undefined * param_1, UINT param_2)
 * body: 0040bc88-0040bcdb
 */

void FUN_0040bc88(undefined *param_1,UINT param_2)

{
  LPCSTR lpLibFileName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  
  pcStack_1c = (code *)0x40bc97;
  SetErrorMode(param_2);
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  lpLibFileName = FUN_00403dfc(param_1);
  LoadLibraryA(lpLibFileName);
  *in_FS_OFFSET = uStack_2c;
  return;
}


