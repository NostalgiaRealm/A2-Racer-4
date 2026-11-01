
/* ==== FUN_0044476c @ 0044476c ==== 
 * signature: byte __register FUN_0044476c(uint param_1)
 * body: 0044476c-004447a3
 */

byte FUN_0044476c(uint param_1)

{
  SHORT SVar1;
  byte bVar2;
  
  SVar1 = GetKeyState(0x10);
  bVar2 = SVar1 < 0;
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    bVar2 = bVar2 | 4;
  }
  if ((param_1 & 0x20000000) != 0) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}


