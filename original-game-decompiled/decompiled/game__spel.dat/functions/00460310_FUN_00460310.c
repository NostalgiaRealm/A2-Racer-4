
/* ==== FUN_00460310 @ 00460310 ==== 
 * signature: bool __cdecl FUN_00460310(int param_1)
 * body: 00460310-00460330
 */

bool __cdecl FUN_00460310(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = FUN_0045e8b0(param_1)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 < 100;
}


