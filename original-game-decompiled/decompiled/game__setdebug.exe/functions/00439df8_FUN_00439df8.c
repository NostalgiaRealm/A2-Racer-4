
/* ==== FUN_00439df8 @ 00439df8 ==== 
 * signature: byte __register FUN_00439df8(int param_1)
 * body: 00439df8-00439e3c
 */

byte FUN_00439df8(int param_1)

{
  byte bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x10) & 0x80) != 0;
  if ((*(byte *)(param_1 + 0x11) & 0x80) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((*(byte *)(param_1 + 0x12) & 0x80) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((*(byte *)(param_1 + 1) & 0x80) != 0) {
    bVar1 = bVar1 | 8;
  }
  if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  if ((*(byte *)(param_1 + 4) & 0x80) != 0) {
    bVar1 = bVar1 | 0x20;
  }
  return bVar1;
}


