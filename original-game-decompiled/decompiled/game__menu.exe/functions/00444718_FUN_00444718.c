
/* ==== FUN_00444718 @ 00444718 ==== 
 * signature: byte __register FUN_00444718(uint param_1)
 * body: 00444718-00444767
 */

byte FUN_00444718(uint param_1)

{
  SHORT SVar1;
  byte bVar2;
  
  bVar2 = (param_1 & 4) != 0;
  if ((param_1 & 8) != 0) {
    bVar2 = bVar2 | 4;
  }
  if ((param_1 & 1) != 0) {
    bVar2 = bVar2 | 8;
  }
  if ((param_1 & 2) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  if ((param_1 & 0x10) != 0) {
    bVar2 = bVar2 | 0x20;
  }
  SVar1 = GetKeyState(0x12);
  if (SVar1 < 0) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}


