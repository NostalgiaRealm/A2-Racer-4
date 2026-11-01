
/* ==== FUN_0044017c @ 0044017c ==== 
 * signature: undefined1 __register FUN_0044017c(int param_1)
 * body: 0044017c-004401a7
 */

undefined1 FUN_0044017c(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x30) == 2) && (*(int *)(param_1 + 0x58) != 0)) {
    bVar1 = FUN_0044017c(*(int *)(param_1 + 0x58));
    uVar2 = (uint)(byte)(&DAT_004aa850)[bVar1 & 0x7f];
  }
  return (&DAT_004aa854)[uVar2 & 0x7f];
}


