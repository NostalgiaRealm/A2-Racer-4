
/* ==== FUN_0048063c @ 0048063c ==== 
 * signature: undefined __register FUN_0048063c(int * param_1, undefined4 * param_2, int param_3)
 * body: 0048063c-004806a0
 */

void FUN_0048063c(int *param_1,undefined4 *param_2,int param_3)

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
  pcStack_1c = (code *)0x480656;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcStack_1c = (code *)&stack0xfffffffc;
  FUN_00480b08(param_3,(int *)&local_10);
  FUN_00403f28((int *)&local_c,local_8,local_10);
  FUN_00480448(param_1,local_c);
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_004806a8;
  pcStack_20 = (code *)0x4806a0;
  FUN_00403c80((int *)&local_10,3);
  return;
}


