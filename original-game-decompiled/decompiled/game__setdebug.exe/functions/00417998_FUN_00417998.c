
/* ==== FUN_00417998 @ 00417998 ==== 
 * signature: int __register FUN_00417998(short param_1)
 * body: 00417998-004179b7
 */

int FUN_00417998(short param_1)

{
  if (((param_1 != 1) && (param_1 != 4)) && (param_1 != 8)) {
    return 0;
  }
  return 1 << ((byte)param_1 & 0x1f);
}


