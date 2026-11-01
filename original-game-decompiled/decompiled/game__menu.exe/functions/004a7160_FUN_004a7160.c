
/* ==== FUN_004a7160 @ 004a7160 ==== 
 * signature: undefined FUN_004a7160(void)
 * body: 004a7160-004a7186
 */

undefined4 FUN_004a7160(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x3c);
  if (cVar1 == '\0') {
    return 0x200000;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return 0x800000;
    }
    return 0x1000000;
  }
  return 0x800000;
}


