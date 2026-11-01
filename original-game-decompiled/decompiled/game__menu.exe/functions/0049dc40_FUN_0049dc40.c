
/* ==== FUN_0049dc40 @ 0049dc40 ==== 
 * signature: undefined __register FUN_0049dc40(int param_1)
 * body: 0049dc40-0049dcb4
 */

void FUN_0049dc40(int param_1)

{
  undefined4 *in_FS_OFFSET;
  uint **ppuVar1;
  undefined4 uStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  byte local_34 [36];
  byte *local_10;
  undefined1 local_c;
  uint *local_8;
  
  pcStack_3c = (code *)&stack0xfffffffc;
  local_8 = (uint *)0x0;
  pcStack_40 = thunk_FUN_004036bc;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  ppuVar1 = &local_8;
  FUN_0048b2b4(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0),local_34);
  local_10 = local_34;
  local_c = 4;
  FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x20),&local_10,0,(int *)ppuVar1);
  TGroupBox_set_Caption(*(int *)(param_1 + 0x304),local_8);
  *in_FS_OFFSET = uStack_44;
  pcStack_3c = FUN_0049dcbc;
  pcStack_40 = (code *)0x49dcb4;
  FUN_00403c5c((int *)&local_8);
  return;
}


