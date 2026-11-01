
/* ==== FUN_0043d52c @ 0043d52c ==== 
 * signature: undefined __register FUN_0043d52c(int * param_1, int param_2, uint param_3)
 * body: 0043d52c-0043d575
 */

void FUN_0043d52c(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00414e1c(param_2,(int *)&local_8,param_3);
  sVar1 = FUN_0043cb6c(local_8);
  TMenuItem_set_ShortCut(param_1,sVar1);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0043d57d;
  pcStack_18 = (code *)0x43d575;
  FUN_00403c5c((int *)&local_8);
  return;
}


