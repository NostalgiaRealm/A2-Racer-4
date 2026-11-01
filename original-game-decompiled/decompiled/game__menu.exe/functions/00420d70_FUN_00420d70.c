
/* ==== FUN_00420d70 @ 00420d70 ==== 
 * signature: int __register FUN_00420d70(void)
 * body: 00420d70-00420da3
 */

int FUN_00420d70(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_004ac72c != (code *)0x0) {
    iVar2 = (*DAT_004ac72c)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_00420d9c;
    }
  }
  bVar1 = 0;
LAB_00420d9c:
  return -(uint)bVar1;
}


