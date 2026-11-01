
/* ==== FUN_0046bd3c @ 0046bd3c ==== 
 * signature: undefined __register FUN_0046bd3c(int param_1, int * param_2)
 * body: 0046bd3c-0046bd9e;0046bdbd-0046bdc3
 */

void FUN_0046bd3c(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  if (DAT_004ab06c != '\0') {
    pcStack_30 = thunk_FUN_00403408;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    local_8 = param_2;
    FUN_00402c30(&local_1c,0x14,0);
    local_1c = 0x14;
    local_18 = 0x80e0;
    local_14 = *(undefined4 *)(param_1 + 0x34);
    local_c = *(undefined4 *)(param_1 + 0x30);
    FUN_0046bb44(&local_1c,local_8);
    *in_FS_OFFSET = uStack_34;
  }
  return;
}


