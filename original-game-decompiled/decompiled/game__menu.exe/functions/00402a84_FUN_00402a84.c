
/* ==== FUN_00402a84 @ 00402a84 ==== 
 * signature: undefined __register FUN_00402a84(void)
 * body: 00402a84-00402a90
 */

void FUN_00402a84(void)

{
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  
  fcos(in_ST0);
  if ((in_FPUStatusWord & 0x400) == 0) {
    return;
  }
  return;
}


