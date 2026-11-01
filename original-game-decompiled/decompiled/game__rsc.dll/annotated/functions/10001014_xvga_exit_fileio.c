
/* ==== xvga_exit_fileio @ 10001014 ==== 
 * signature: undefined __stdcall xvga_exit_fileio(void)
 * body: 10001014-10001018
 * thunk to: xvga_exit_fileio_impl
 */

void xvga_exit_fileio(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [15];
  undefined4 uStack_8;
  
                    /* 0x1014  1  xvga_exit_fileio */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10031408 != 0) {
    LocalFree(DAT_10031400);
    iVar1 = __chkesp();
    if (iVar1 == 0) {
      FUN_10001d70(DAT_100313f8);
      DAT_10031408 = 0;
    }
    else {
      MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
      __chkesp();
    }
  }
  uStack_8 = 0x10001bcf;
  __chkesp();
  return;
}


