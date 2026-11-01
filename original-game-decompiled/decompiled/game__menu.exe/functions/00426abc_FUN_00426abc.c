
/* ==== FUN_00426abc @ 00426abc ==== 
 * signature: undefined __register FUN_00426abc(int * param_1)
 * body: 00426abc-00426af3
 */

void FUN_00426abc(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x1f7) != '\0') && ((char)param_1[0x7d] == '\x01')) {
    param_1[0x10] = param_1[0x10] | 0x200;
    FUN_00426af8(param_1);
    return;
  }
  param_1[0x10] = param_1[0x10] & 0xfffffdff;
  return;
}


