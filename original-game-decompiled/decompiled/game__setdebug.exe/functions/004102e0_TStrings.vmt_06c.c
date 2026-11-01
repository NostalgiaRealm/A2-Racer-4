
/* ==== TStrings.vmt_06c @ 004102e0 ==== 
 * signature: undefined TStrings.vmt_06c(void)
 * body: 004102e0-00410322
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_06c(int *param_1,char *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int iStack_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403b70(&iStack_8,param_2);
  (**(code **)(*param_1 + 0x2c))(param_1,iStack_8);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0041032a;
  pcStack_18 = (code *)0x410322;
  FUN_004039b8(&iStack_8);
  return;
}


