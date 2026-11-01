
/* ==== FUN_0040efb0 @ 0040efb0 ==== 
 * signature: undefined __register FUN_0040efb0(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * body: 0040efb0-0040eff7
 */

void FUN_0040efb0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  byte *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (byte *)0x0;
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00405298(param_2,(int *)&local_8);
  TList_vmt_00c(&PTR_TList_vmt_000_0040d9ac,local_8,param_3);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0040efff;
  pcStack_18 = (code *)0x40eff7;
  FUN_004039b8((int *)&local_8);
  return;
}


