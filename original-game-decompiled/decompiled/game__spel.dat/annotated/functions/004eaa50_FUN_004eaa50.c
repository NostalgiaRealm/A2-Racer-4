
/* ==== FUN_004eaa50 @ 004eaa50 ==== 
 * signature: undefined __fastcall FUN_004eaa50(int param_1)
 * body: 004eaa50-004eaa9c
 */

void __fastcall FUN_004eaa50(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_005586c5(param_1,8,5,FUN_004ec6e0);
  return;
}


