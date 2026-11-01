
/* ==== FUN_004a6a38 @ 004a6a38 ==== 
 * signature: undefined4 __register FUN_004a6a38(int param_1)
 * body: 004a6a38-004a6a6f
 */

undefined4 FUN_004a6a38(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\0') {
    return 1;
  }
  if (cVar1 == '\x01') {
    return 3;
  }
  if (cVar1 == '\x02') {
    return 2;
  }
  if (cVar1 == '\x03') {
    uVar2 = 4;
  }
  return uVar2;
}


