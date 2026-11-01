
/* ==== FUN_00467f70 @ 00467f70 ==== 
 * signature: uint __register FUN_00467f70(int param_1)
 * body: 00467f70-00467fbf
 */

uint FUN_00467f70(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar2 = 0x20;
  }
  else {
    uVar2 = 0x10;
  }
  cVar1 = *(char *)(param_1 + 0x6d);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar2 = uVar2 | 4;
    }
    else if (cVar1 == '\x02') {
      uVar2 = uVar2 | 8;
    }
  }
  cVar1 = *(char *)(param_1 + 0x6e);
  if (cVar1 == '\0') {
    return uVar2;
  }
  if (cVar1 == '\x01') {
    return uVar2 | 2;
  }
  if (cVar1 == '\x02') {
    uVar2 = uVar2 | 1;
  }
  return uVar2;
}


