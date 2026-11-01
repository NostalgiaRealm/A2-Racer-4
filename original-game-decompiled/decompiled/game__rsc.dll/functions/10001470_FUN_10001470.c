
/* ==== FUN_10001470 @ 10001470 ==== 
 * signature: undefined __cdecl FUN_10001470(undefined * * param_1, int param_2, DWORD param_3)
 * body: 10001470-1000162f
 */

void __cdecl FUN_10001470(undefined **param_1,int param_2,DWORD param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  DWORD local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (undefined **)0x0) {
    MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
    __chkesp();
  }
  if (DAT_10031408 == 0) {
    FUN_10002320(param_1,param_2,param_3);
  }
  else {
    iVar2 = FUN_10015690((int)param_1);
    iVar1 = FUN_10015690((int)DAT_100313f8);
    if (iVar2 == iVar1) {
      local_8 = param_3;
      if (param_3 == 0) {
        if ((DAT_100313f0 < DAT_10031404 + param_2) || (DAT_10031404 + param_2 < DAT_10031404)) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
        }
      }
      else if (param_3 == 1) {
        FUN_10002320(DAT_100313f8,DAT_10031404 + param_2,0);
      }
      else if (param_3 == 2) {
        if (DAT_100313f0 < DAT_100313f0 + param_2) {
          MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
          __chkesp();
        }
        else {
          FUN_10002320(DAT_100313f8,DAT_100313f0 + param_2,0);
        }
      }
      else {
        MessageBoxA((HWND)0x0,"Tekst in box","Title",0);
        __chkesp();
      }
    }
    else {
      FUN_10002320(param_1,param_2,param_3);
    }
  }
  local_8 = 0x1000162c;
  __chkesp();
  return;
}


