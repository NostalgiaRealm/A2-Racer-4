
/* ==== TStrings.vmt_068 @ 0041024c ==== 
 * signature: undefined TStrings.vmt_068(void)
 * body: 0041024c-00410298
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_068(int *param_1,int *param_2)

{
  int iVar1;
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
  (**(code **)(*param_1 + 0x1c))(param_1,&iStack_8);
  iVar1 = FUN_00403c38(iStack_8);
  FUN_00410b60(param_2,iStack_8,iVar1);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_004102a0;
  pcStack_18 = (code *)0x410298;
  FUN_004039b8(&iStack_8);
  return;
}


