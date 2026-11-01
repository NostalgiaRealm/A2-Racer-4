
/* ==== FUN_004101ec @ 004101ec ==== 
 * signature: undefined __register FUN_004101ec(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * body: 004101ec-00410233
 */

void FUN_004101ec(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  byte *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (byte *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00405808(param_2,(int *)&local_8);
  TList_vmt_00c(&PTR_TList_vmt_000_0040ea6c,local_8,param_3);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0041023b;
  pcStack_18 = (code *)0x410233;
  FUN_00403c5c((int *)&local_8);
  return;
}


