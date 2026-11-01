
/* ==== FUN_00472ad0 @ 00472ad0 ==== 
 * signature: bool __thiscall FUN_00472ad0(void * this, int param_1)
 * body: 00472ad0-00472b06
 */

bool __thiscall FUN_00472ad0(void *this,int param_1)

{
  int iVar1;
  char *_Str2;
  char *_Str1;
  
  iVar1 = FUN_00472920(param_1);
  _Str2 = *(char **)(iVar1 + 4);
  if (_Str2 == (char *)0x0) {
    _Str2 = "";
  }
  _Str1 = *(char **)((int)this + 8);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  iVar1 = __strcmpi(_Str1,_Str2);
  return iVar1 == 0;
}


