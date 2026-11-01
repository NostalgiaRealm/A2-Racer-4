
/* ==== FUN_0049e6f0 @ 0049e6f0 ==== 
 * signature: longlong __fastcall FUN_0049e6f0(int param_1, uint param_2)
 * body: 0049e6f0-0049e74c
 */

longlong __fastcall FUN_0049e6f0(int param_1,uint param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  lVar1 = __ftol();
  return lVar1;
}


