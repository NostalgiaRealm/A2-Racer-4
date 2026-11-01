
/* ==== FUN_00402990 @ 00402990 ==== 
 * signature: undefined __register FUN_00402990(void)
 * body: 00402990-004029e0
 */

void FUN_00402990(void)

{
  byte *pbVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pbVar1 = (byte *)GetCommandLineA();
  pbVar1 = FUN_00402918(pbVar1,&local_8);
  do {
    pbVar1 = FUN_00402918(pbVar1,&local_8);
  } while (local_8 != 0);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_004029e8;
  pcStack_18 = (code *)0x4029e0;
  FUN_00403c5c(&local_8);
  return;
}


