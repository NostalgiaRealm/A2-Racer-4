
/* ==== FUN_0053ebc0 @ 0053ebc0 ==== 
 * signature: int __fastcall FUN_0053ebc0(int param_1)
 * body: 0053ebc0-0053ebd3
 */

int __fastcall FUN_0053ebc0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    do {
      iVar1 = param_1;
      param_1 = *(int *)(param_1 + 0x228);
    } while (param_1 != 0);
    return iVar1;
  }
  return 0;
}


