
/* ==== FUN_004683f0 @ 004683f0 ==== 
 * signature: bool __cdecl FUN_004683f0(LPCSTR param_1)
 * body: 004683f0-00468418
 */

bool __cdecl FUN_004683f0(LPCSTR param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c64d0(param_1);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_0055926e(param_1,0);
  return iVar1 != -1;
}


