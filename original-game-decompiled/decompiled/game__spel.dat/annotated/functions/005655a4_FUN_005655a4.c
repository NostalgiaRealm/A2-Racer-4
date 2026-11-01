
/* ==== FUN_005655a4 @ 005655a4 ==== 
 * signature: bool __cdecl FUN_005655a4(FARPROC param_1)
 * body: 005655a4-005655bb
 */

bool __cdecl FUN_005655a4(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}


