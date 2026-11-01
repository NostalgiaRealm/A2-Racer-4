
/* ==== FUN_00494ec0 @ 00494ec0 ==== 
 * signature: undefined __fastcall FUN_00494ec0(int param_1)
 * body: 00494ec0-00494f06
 */

void __fastcall FUN_00494ec0(int param_1)

{
  int iVar1;
  char cVar2;
  
  if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      FUN_00494e80();
    }
    else {
      if (iVar1 == 1) {
        FUN_00494e90();
        return;
      }
      if (iVar1 == 2) {
        cVar2 = FUN_004195f0();
        if (cVar2 != '\0') {
          FUN_00494ea0(param_1);
          return;
        }
      }
    }
  }
  return;
}


