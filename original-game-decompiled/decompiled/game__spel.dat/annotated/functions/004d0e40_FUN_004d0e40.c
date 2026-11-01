
/* ==== FUN_004d0e40 @ 004d0e40 ==== 
 * signature: undefined4 * __fastcall FUN_004d0e40(undefined4 * param_1)
 * body: 004d0e40-004d0e5e
 */

undefined4 * __fastcall FUN_004d0e40(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0054caea();
  *param_1 = puVar1;
  if (*(int *)(DAT_0074daf8 + 4) != -1) {
    *(int *)(DAT_0074daf8 + 4) = *(int *)(DAT_0074daf8 + 4) + 1;
  }
  return param_1;
}


