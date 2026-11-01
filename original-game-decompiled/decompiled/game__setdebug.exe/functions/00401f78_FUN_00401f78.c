
/* ==== FUN_00401f78 @ 00401f78 ==== 
 * signature: undefined4 __register FUN_00401f78(int param_1)
 * body: 00401f78-00401fa2
 */

undefined4 FUN_00401f78(int param_1)

{
  undefined4 uVar1;
  uint local_c [2];
  
  FUN_004017e4(param_1 + 4,(int *)local_c);
  if ((local_c[0] != 0) && (uVar1 = FUN_00401eec(local_c), (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


