
/* ==== FUN_004e5400 @ 004e5400 ==== 
 * signature: undefined __stdcall FUN_004e5400(void)
 * body: 004e5400-004e542d
 */

void FUN_004e5400(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  longlong lVar2;
  
  FUN_00559960();
  lVar2 = __ftol();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  puVar1[2] = 2;
  puVar1[4] = (int)lVar2;
  *puVar1 = &PTR_FUN_005778c0;
  FUN_004e5203();
  return;
}


