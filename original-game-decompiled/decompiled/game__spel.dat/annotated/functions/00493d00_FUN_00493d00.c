
/* ==== FUN_00493d00 @ 00493d00 ==== 
 * signature: int __stdcall FUN_00493d00(undefined4 param_1, int param_2, int param_3)
 * body: 00493d00-00493d56
 */

int FUN_00493d00(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = param_2;
  if (param_2 < param_3) {
    iVar2 = param_3;
    param_3 = param_2;
  }
  lVar3 = __ftol();
  iVar1 = (int)lVar3;
  if (iVar2 <= (int)lVar3) {
    iVar1 = iVar2;
  }
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  return iVar1;
}


