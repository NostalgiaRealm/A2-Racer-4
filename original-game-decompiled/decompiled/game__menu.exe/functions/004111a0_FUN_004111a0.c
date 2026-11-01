
/* ==== FUN_004111a0 @ 004111a0 ==== 
 * signature: undefined __register FUN_004111a0(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004111a0-004111f4
 */

void FUN_004111a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  int *local_8;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_8 = (int *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piVar1 = FUN_00405860((int *)&local_8);
  FUN_00411108(param_1,piVar1);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 0x10))(local_8,param_2,param_3);
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_004111fc;
  pcStack_1c = (code *)0x4111f4;
  FUN_00405860((int *)&local_8);
  return;
}


