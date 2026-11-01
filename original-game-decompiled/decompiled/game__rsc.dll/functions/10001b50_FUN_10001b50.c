
/* ==== FUN_10001b50 @ 10001b50 ==== 
 * signature: undefined __stdcall FUN_10001b50(void)
 * body: 10001b50-10001bd2
 */

void FUN_10001b50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
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


