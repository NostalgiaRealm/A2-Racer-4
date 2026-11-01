
/* ==== FUN_0041de94 @ 0041de94 ==== 
 * signature: int __register FUN_0041de94(void)
 * body: 0041de94-0041debb
 */

int FUN_0041de94(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_00447720 != (code *)0x0) {
    iVar2 = (*DAT_00447720)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_0041deb4;
    }
  }
  bVar1 = 0;
LAB_0041deb4:
  return -(uint)bVar1;
}


