
/* ==== FUN_0046efbc @ 0046efbc ==== 
 * signature: undefined __register FUN_0046efbc(short * param_1, int param_2)
 * body: 0046efbc-0046f018
 */

void FUN_0046efbc(short *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined4 *local_c;
  int *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (undefined4 *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00404e50((int *)&local_c,param_1);
  FUN_00405894((int *)&local_8,local_c);
  FUN_0046d544(param_2,local_8);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0046f020;
  pcStack_1c = (code *)0x46f010;
  FUN_00405860((int *)&local_c);
  pcStack_1c = (code *)0x46f018;
  FUN_00405860((int *)&local_8);
  return;
}


