
/* ==== TStrings.vmt_05c @ 0040ffb4 ==== 
 * signature: undefined __register TStrings.vmt_05c(int * param_1, int * param_2)
 * body: 0040ffb4-00410034
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_05c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  int local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_24 = (code *)0x40ffdc;
  local_8 = param_1;
  FUN_0040f97c(param_1);
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_24 = (code *)&stack0xfffffffc;
  iVar1 = FUN_00410af0(param_2);
  iVar2 = FUN_00410ad4(param_2);
  FUN_00403aa0(&local_c,(undefined4 *)0x0,iVar1 - iVar2);
  (**(code **)(*param_2 + 4))(param_2,local_c,iVar1 - iVar2);
  (**(code **)(*local_8 + 0x2c))(local_8,local_c);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0041003c;
  pcStack_28 = (code *)0x410034;
  FUN_0040fa38(local_8);
  return;
}


