
/* ==== FUN_00401eec @ 00401eec ==== 
 * signature: undefined4 __register FUN_00401eec(uint * param_1)
 * body: 00401eec-00401f74
 */

undefined4 FUN_00401eec(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_1c = *param_1;
  local_18 = param_1[1];
  FUN_00401ea0();
  FUN_00401438(&DAT_0044748c,(int *)&local_1c,(int *)&local_14);
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    if (local_14 < local_1c) {
      uVar2 = FUN_00401cd8(local_1c);
      local_1c = local_1c - uVar2;
      local_18 = local_18 + uVar2;
    }
    if ((uint *)(local_1c + local_18) < (uint *)(local_14 + local_10)) {
      uVar2 = FUN_00401d48((uint *)(local_1c + local_18));
      local_18 = local_18 + uVar2;
    }
    if ((uint *)(local_14 + local_10) == (uint *)(local_1c + local_18)) {
      FUN_00401c5c((uint *)(local_1c + local_18) + -1,4);
      local_18 = local_18 - 4;
    }
    DAT_00447484 = local_1c;
    DAT_00447480 = local_18;
    uVar1 = CONCAT31((int3)(local_18 >> 8),1);
  }
  return uVar1;
}


