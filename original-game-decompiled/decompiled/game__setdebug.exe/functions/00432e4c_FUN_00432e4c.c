
/* ==== FUN_00432e4c @ 00432e4c ==== 
 * signature: undefined __register FUN_00432e4c(int * param_1, int param_2, uint param_3)
 * body: 00432e4c-00432e95
 */

void FUN_00432e4c(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00413268(param_2,(int *)&local_8,param_3);
  sVar1 = FUN_0043248c(local_8);
  TMenuItem_set_ShortCut(param_1,sVar1);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00432e9d;
  pcStack_18 = (code *)0x432e95;
  FUN_004039b8((int *)&local_8);
  return;
}


