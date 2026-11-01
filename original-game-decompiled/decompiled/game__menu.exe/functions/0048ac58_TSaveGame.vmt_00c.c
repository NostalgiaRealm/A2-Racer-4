
/* ==== TSaveGame.vmt_00c @ 0048ac58 ==== 
 * signature: undefined TSaveGame.vmt_00c(void)
 * body: 0048ac58-0048ace5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSaveGame_vmt_00c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  code *pcStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  puStack_114 = &stack0xfffffffc;
  iStack_8 = 0;
  iStack_c = 0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c(&iStack_8,5);
  FUN_00403c40(iStack_8);
  *in_FS_OFFSET = "This method not implemented";
  FUN_00403c80(&iStack_c,2);
  return;
}


