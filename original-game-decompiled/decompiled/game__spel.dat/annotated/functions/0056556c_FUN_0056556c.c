
/* ==== FUN_0056556c @ 0056556c ==== 
 * signature: bool __cdecl FUN_0056556c(void * param_1, UINT_PTR param_2)
 * body: 0056556c-00565587
 */

bool __cdecl FUN_0056556c(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}


