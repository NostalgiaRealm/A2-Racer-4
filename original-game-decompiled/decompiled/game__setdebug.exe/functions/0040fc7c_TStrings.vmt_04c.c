
/* ==== TStrings.vmt_04c @ 0040fc7c ==== 
 * signature: undefined __register TStrings.vmt_04c(int * param_1)
 * body: 0040fc7c-0040fcc0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_04c(int *param_1)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  pcVar1 = FUN_00403dfc(local_8);
  FUN_00408228(pcVar1);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0040fcc8;
  pcStack_14 = (code *)0x40fcc0;
  FUN_004039b8((int *)&local_8);
  return;
}


