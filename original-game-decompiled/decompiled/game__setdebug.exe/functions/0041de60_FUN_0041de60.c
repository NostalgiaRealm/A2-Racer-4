
/* ==== FUN_0041de60 @ 0041de60 ==== 
 * signature: int __register FUN_0041de60(void)
 * body: 0041de60-0041de93
 */

int FUN_0041de60(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_0044771c != (code *)0x0) {
    iVar2 = (*DAT_0044771c)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_0041de8c;
    }
  }
  bVar1 = 0;
LAB_0041de8c:
  return -(uint)bVar1;
}


