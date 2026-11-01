
/* ==== FUN_0051cd30 @ 0051cd30 ==== 
 * signature: undefined __stdcall FUN_0051cd30(void)
 * body: 0051cd30-0051cea8
 */

void FUN_0051cd30(void)

{
  int iVar1;
  bool bVar2;
  
  DAT_0074c5fc = DAT_0074c760 - 8U >> 2;
  if ((DAT_0074c5fc == 0) || (DAT_0074c760 < (int)DAT_0074c5fc)) {
    DAT_0074c5fc = 8;
  }
  DAT_0074c6ec = FUN_005147d0(DAT_0074c5fc);
  DAT_0074c6f0 = FUN_005147d0(DAT_0074c5fc);
  DAT_0074c748 = FUN_005147d0(DAT_0074c5fc);
  DAT_0074c4e4 = FUN_0051e110(DAT_0074c03c * 8);
  DAT_0074c46c = FUN_0051e110(DAT_0074c040 * 8 + 8);
  DAT_0074c468 = FUN_0051e110(DAT_0074c040 * 8 + 8);
  DAT_0074c474 = FUN_0051e110(DAT_0074c040 * 8 + 8);
  DAT_0074c470 = FUN_0051e110(DAT_0074c040 * 8 + 8);
  iVar1 = DAT_0074c040;
  if (DAT_0074c040 != -1) {
    do {
      *(undefined4 *)((int)DAT_0074c46c + iVar1 * 8) = 0xffffffff;
      *(undefined4 *)((int)DAT_0074c46c + iVar1 * 8 + 4) = 0xffefffff;
      *(undefined4 *)((int)DAT_0074c468 + iVar1 * 8) = 0xffffffff;
      *(undefined4 *)((int)DAT_0074c468 + iVar1 * 8 + 4) = 0x7fefffff;
      *(undefined4 *)((int)DAT_0074c474 + iVar1 * 8) = 0xffffffff;
      *(undefined4 *)((int)DAT_0074c474 + iVar1 * 8 + 4) = 0xffefffff;
      *(undefined4 *)((int)DAT_0074c470 + iVar1 * 8) = 0xffffffff;
      *(undefined4 *)((int)DAT_0074c470 + iVar1 * 8 + 4) = 0x7fefffff;
      bVar2 = iVar1 != 0;
      iVar1 = iVar1 + -1;
    } while (bVar2);
  }
  DAT_0074c6f4 = FUN_0051e110((DAT_0074c03c + 1) * DAT_0074c03c * 8);
  DAT_0074c6f8 = FUN_0051e110(DAT_0074c03c * 4 + 4);
  return;
}


