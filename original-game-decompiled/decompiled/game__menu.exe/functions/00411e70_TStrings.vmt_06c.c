
/* ==== TStrings.vmt_06c @ 00411e70 ==== 
 * signature: undefined TStrings.vmt_06c(void)
 * body: 00411e70-00411eb2
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
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403e14(&iStack_8,param_2);
  (**(code **)(*param_1 + 0x2c))(param_1,iStack_8);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00411eba;
  pcStack_18 = (code *)0x411eb2;
  FUN_00403c5c(&iStack_8);
  return;
}


