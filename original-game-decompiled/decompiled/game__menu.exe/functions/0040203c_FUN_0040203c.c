
/* ==== FUN_0040203c @ 0040203c ==== 
 * signature: undefined4 __register FUN_0040203c(int param_1)
 * body: 0040203c-00402066
 */

undefined4 FUN_0040203c(int param_1)

{
  undefined4 uVar1;
  uint local_c [2];
  
  FUN_004018a8(param_1 + 4,(int *)local_c);
  if ((local_c[0] != 0) && (uVar1 = FUN_00401fb0(local_c), (char)uVar1 != '\0')) {
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}


