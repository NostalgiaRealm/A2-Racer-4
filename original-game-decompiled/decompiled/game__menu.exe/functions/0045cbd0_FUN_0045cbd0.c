
/* ==== FUN_0045cbd0 @ 0045cbd0 ==== 
 * signature: undefined __register FUN_0045cbd0(undefined4 param_1, uint * param_2)
 * body: 0045cbd0-0045cc4f
 */

void FUN_0045cbd0(undefined4 param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  uint *local_8;
  
  pcStack_10 = (code *)0x45cbe0;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  bVar1 = true;
  pcStack_10 = (code *)&stack0xfffffffc;
  FUN_00403fec(local_8,(uint *)&DAT_0045cc68);
  if (((!bVar1) && (FUN_00403fec(local_8,(uint *)&DAT_0045cc78), !bVar1)) &&
     (FUN_00403fec(local_8,(uint *)&DAT_0045cc88), !bVar1)) {
    FUN_00403fec(local_8,(uint *)FUN_0045cc98);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0045cc57;
  pcStack_14 = (code *)0x45cc4f;
  FUN_00403c5c((int *)&local_8);
  return;
}


