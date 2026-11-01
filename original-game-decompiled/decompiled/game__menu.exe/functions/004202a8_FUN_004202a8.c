
/* ==== FUN_004202a8 @ 004202a8 ==== 
 * signature: int __register FUN_004202a8(void)
 * body: 004202a8-004202d8
 */

int FUN_004202a8(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_004ac6b8 == 0) {
    FUN_00420248();
  }
  if (DAT_004ac6bc != (code *)0x0) {
    iVar2 = (*DAT_004ac6bc)();
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_004202d3;
    }
  }
  bVar1 = 0;
LAB_004202d3:
  return -(uint)bVar1;
}


