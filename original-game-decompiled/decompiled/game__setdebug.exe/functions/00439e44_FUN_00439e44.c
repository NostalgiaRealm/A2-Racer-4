
/* ==== FUN_00439e44 @ 00439e44 ==== 
 * signature: undefined __register FUN_00439e44(undefined4 param_1, int param_2)
 * body: 00439e44-00439ea1
 */

void FUN_00439e44(undefined4 param_1,int param_2)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  char *local_c;
  char *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (char *)0x0;
  local_c = (char *)0x0;
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00437264(param_2,(int *)&local_8);
  pcVar1 = local_8;
  FUN_00403b60((int *)&local_c,param_1);
  FUN_00407a7c(local_c,pcVar1);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00439ea9;
  pcStack_1c = (code *)0x439ea1;
  FUN_004039dc((int *)&local_c,2);
  return;
}


