
/* ==== FUN_00401fb0 @ 00401fb0 ==== 
 * signature: undefined4 __register FUN_00401fb0(uint * param_1)
 * body: 00401fb0-00402038
 */

undefined4 FUN_00401fb0(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_1c = *param_1;
  local_18 = param_1[1];
  FUN_00401f64();
  FUN_004014fc(&DAT_004ac494,(int *)&local_1c,(int *)&local_14);
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    if (local_14 < local_1c) {
      uVar2 = FUN_00401d9c(local_1c);
      local_1c = local_1c - uVar2;
      local_18 = local_18 + uVar2;
    }
    if ((uint *)(local_1c + local_18) < (uint *)(local_14 + local_10)) {
      uVar2 = FUN_00401e0c((uint *)(local_1c + local_18));
      local_18 = local_18 + uVar2;
    }
    if ((uint *)(local_14 + local_10) == (uint *)(local_1c + local_18)) {
      FUN_00401d20((uint *)(local_1c + local_18) + -1,4);
      local_18 = local_18 - 4;
    }
    DAT_004ac48c = local_1c;
    DAT_004ac488 = local_18;
    uVar1 = CONCAT31((int3)(local_18 >> 8),1);
  }
  return uVar1;
}


