
/* ==== FUN_10001940 @ 10001940 ==== 
 * signature: undefined __cdecl FUN_10001940(undefined * * param_1)
 * body: 10001940-100019fb
 */

void __cdecl FUN_10001940(undefined **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  else if (DAT_10031408 == 0) {
    FUN_10001d70(param_1);
  }
  else {
    iVar2 = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690(DAT_100313f8);
    if (iVar2 == iVar1) {
      if (DAT_10031408 == 0) {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10001d70(param_1);
    }
  }
  uStack_8 = 0x100019f8;
  __chkesp();
  return;
}


