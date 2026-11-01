
/* ==== FUN_004a7f2c @ 004a7f2c ==== 
 * signature: undefined __register FUN_004a7f2c(undefined4 param_1, uint * param_2, int * param_3, byte param_4)
 * body: 004a7f2c-004a7f8b
 */

void FUN_004a7f2c(undefined4 param_1,uint *param_2,int *param_3,byte param_4)

{
  uint uVar1;
  uint *in_FS_OFFSET;
  uint uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  int local_c;
  uint *local_8;
  
  local_c = 0;
  puStack_18 = (undefined1 *)0x4a7f48;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_20;
  uVar1 = (uint)param_4;
  puStack_18 = &stack0xfffffffc;
  FUN_004a73c8(param_3,&local_c);
  FUN_004a7c14(param_1,local_8,local_c,(char)uVar1);
  *in_FS_OFFSET = uVar1;
  pcStack_1c = FUN_004a7f93;
  uStack_20 = 0x4a7f8b;
  FUN_00403c80(&local_c,2);
  return;
}


