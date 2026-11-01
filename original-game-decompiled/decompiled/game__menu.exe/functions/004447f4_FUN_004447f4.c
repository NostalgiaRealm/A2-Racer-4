
/* ==== FUN_004447f4 @ 004447f4 ==== 
 * signature: undefined __register FUN_004447f4(undefined4 param_1, int param_2)
 * body: 004447f4-00444851
 */

void FUN_004447f4(undefined4 param_1,int param_2)

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
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00441a00(param_2,(int *)&local_8);
  pcVar1 = local_8;
  FUN_00403e04((int *)&local_c,param_1);
  FUN_004082b8(local_c,pcVar1);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00444859;
  pcStack_1c = (code *)0x444851;
  FUN_00403c80((int *)&local_c,2);
  return;
}


