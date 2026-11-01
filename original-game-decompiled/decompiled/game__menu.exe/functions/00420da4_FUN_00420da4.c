
/* ==== FUN_00420da4 @ 00420da4 ==== 
 * signature: int __register FUN_00420da4(void)
 * body: 00420da4-00420dcb
 */

int FUN_00420da4(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_004ac730 != (code *)0x0) {
    iVar2 = (*DAT_004ac730)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_00420dc4;
    }
  }
  bVar1 = 0;
LAB_00420dc4:
  return -(uint)bVar1;
}


