
/* ==== FUN_00565588 @ 00565588 ==== 
 * signature: bool __cdecl FUN_00565588(LPVOID param_1, UINT_PTR param_2)
 * body: 00565588-005655a3
 */

bool __cdecl FUN_00565588(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}


