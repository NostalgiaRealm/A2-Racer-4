
/* ==== FUN_00435a70 @ 00435a70 ==== 
 * signature: undefined1 __register FUN_00435a70(int param_1)
 * body: 00435a70-00435a9b
 */

undefined1 FUN_00435a70(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2f);
  if ((*(byte *)(param_1 + 0x2f) == 2) && (*(int *)(param_1 + 0x58) != 0)) {
    bVar1 = FUN_00435a70(*(int *)(param_1 + 0x58));
    uVar2 = (uint)(byte)(&DAT_0044677c)[bVar1 & 0x7f];
  }
  return (&DAT_00446780)[uVar2 & 0x7f];
}


