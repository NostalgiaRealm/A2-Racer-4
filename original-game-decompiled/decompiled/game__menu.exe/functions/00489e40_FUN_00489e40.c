
/* ==== FUN_00489e40 @ 00489e40 ==== 
 * signature: undefined __register FUN_00489e40(int * param_1, int * param_2, undefined4 * param_3, int param_4)
 * body: 00489e40-00489ea7
 */

void FUN_00489e40(int *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  pcStack_1c = (code *)0x489e5a;
  local_8 = param_3;
  FUN_00404090((int)param_3);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_1c = (code *)&stack0xfffffffc;
  FUN_00480b08(param_4,(int *)&local_10);
  FUN_00403f28((int *)&local_c,local_8,local_10);
  FUN_00489c28(param_1,param_2,local_c);
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00489eaf;
  pcStack_20 = (code *)0x489ea7;
  FUN_00403c80((int *)&local_10,3);
  return;
}


