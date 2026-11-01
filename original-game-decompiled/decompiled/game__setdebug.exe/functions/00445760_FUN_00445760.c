
/* ==== FUN_00445760 @ 00445760 ==== 
 * signature: undefined __register FUN_00445760(undefined * param_1)
 * body: 00445760-004457cf
 */

void FUN_00445760(undefined *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  uint local_10;
  bool local_9;
  undefined *local_8;
  
  pcStack_14 = (code *)0x445771;
  local_8 = param_1;
  FUN_00403dec((int)param_1);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  local_10 = FUN_00407e3c(local_8);
  if (local_10 == 0xffffffff) {
    local_9 = false;
  }
  else if ((local_10 & 1) == 1) {
    local_10 = local_10 & 0xfffffffe;
    DVar1 = FUN_00407e50(local_8,local_10);
    local_9 = DVar1 == 0;
  }
  else {
    local_9 = true;
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_004457d7;
  pcStack_18 = (code *)0x4457cf;
  FUN_004039b8((int *)&local_8);
  return;
}


