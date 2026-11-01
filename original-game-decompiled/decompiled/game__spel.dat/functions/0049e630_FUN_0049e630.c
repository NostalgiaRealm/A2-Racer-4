
/* ==== FUN_0049e630 @ 0049e630 ==== 
 * signature: uint __fastcall FUN_0049e630(int param_1)
 * body: 0049e630-0049e65a
 */

uint __fastcall FUN_0049e630(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x38) != -1) {
    iVar1 = FUN_004c7e70(*(int *)(param_1 + 0x38));
    if (iVar1 == *(int *)(param_1 + 0x40)) {
      piVar2 = FUN_0049e5a0(param_1);
      return (uint)piVar2 & 1;
    }
  }
  return 0;
}


