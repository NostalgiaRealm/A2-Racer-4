
/* ==== FUN_0042a9d0 @ 0042a9d0 ==== 
 * signature: undefined __fastcall FUN_0042a9d0(int * param_1)
 * body: 0042a9d0-0042aa14
 */

void __fastcall FUN_0042a9d0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_1[0x1d];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_004f5510(param_1);
  return;
}


