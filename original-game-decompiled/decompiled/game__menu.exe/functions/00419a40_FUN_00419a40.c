
/* ==== FUN_00419a40 @ 00419a40 ==== 
 * signature: int __register FUN_00419a40(short param_1)
 * body: 00419a40-00419a5f
 */

int FUN_00419a40(short param_1)

{
  if (((param_1 != 1) && (param_1 != 4)) && (param_1 != 8)) {
    return 0;
  }
  return 1 << ((byte)param_1 & 0x1f);
}


