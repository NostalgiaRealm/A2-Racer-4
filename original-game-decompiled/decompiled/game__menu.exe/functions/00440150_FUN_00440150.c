
/* ==== FUN_00440150 @ 00440150 ==== 
 * signature: undefined1 __register FUN_00440150(int param_1)
 * body: 00440150-0044017b
 */

undefined1 FUN_00440150(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2f);
  if ((*(byte *)(param_1 + 0x2f) == 2) && (*(int *)(param_1 + 0x58) != 0)) {
    bVar1 = FUN_00440150(*(int *)(param_1 + 0x58));
    uVar2 = (uint)(byte)(&DAT_004aa850)[bVar1 & 0x7f];
  }
  return (&DAT_004aa854)[uVar2 & 0x7f];
}


