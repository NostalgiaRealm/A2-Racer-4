
/* ==== FUN_00476828 @ 00476828 ==== 
 * signature: undefined __register FUN_00476828(int param_1)
 * body: 00476828-00476892
 */

void FUN_00476828(int param_1)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  char *local_c;
  char *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (char *)0x0;
  local_c = (char *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00405808(*(undefined4 **)(&DAT_004ab23c + (uint)*(byte *)(param_1 + 0x208) * 4),
               (int *)&local_8);
  pcVar1 = local_8;
  TGroupBox_get_Caption(param_1,(int *)&local_c);
  FUN_00408268(local_c,pcVar1);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0047689a;
  pcStack_18 = (code *)0x47688a;
  FUN_00403c5c((int *)&local_c);
  pcStack_18 = (code *)0x476892;
  FUN_00403c5c((int *)&local_8);
  return;
}


