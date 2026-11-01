
/* ==== FUN_0045963c @ 0045963c ==== 
 * signature: undefined __register FUN_0045963c(int param_1, undefined4 * param_2, int * param_3)
 * body: 0045963c-004596a4
 */

void FUN_0045963c(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 *local_c;
  int local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00403cb0(param_3,param_2);
  FUN_004089a0((undefined *)param_2,&local_8);
  if (local_8 == 0) {
    FUN_004089a0(*(undefined **)(param_1 + 4),(int *)&local_c);
    FUN_00403f28(param_3,local_c,param_2);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_004596ac;
  pcStack_20 = (code *)0x4596a4;
  FUN_00403c80((int *)&local_c,2);
  return;
}


