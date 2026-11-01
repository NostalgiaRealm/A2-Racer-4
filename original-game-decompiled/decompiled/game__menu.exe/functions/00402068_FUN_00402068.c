
/* ==== FUN_00402068 @ 00402068 ==== 
 * signature: undefined4 __register FUN_00402068(LPVOID param_1, int param_2)
 * body: 00402068-00402098
 */

undefined4 FUN_00402068(LPVOID param_1,int param_2)

{
  undefined4 uVar1;
  uint local_10 [2];
  
  FUN_00401938(param_1,param_2 + 4,(int *)local_10);
  if ((local_10[0] != 0) && (uVar1 = FUN_00401fb0(local_10), (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


