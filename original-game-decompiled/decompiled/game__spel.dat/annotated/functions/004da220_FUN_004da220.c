
/* ==== FUN_004da220 @ 004da220 ==== 
 * signature: int __thiscall FUN_004da220(void * this, int param_1)
 * body: 004da220-004da277
 */

int __thiscall FUN_004da220(void *this,int param_1)

{
  char *_Str2;
  int iVar1;
  char *_Str1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + 8);
  if (piVar2 != *(int **)((int)this + 0xc)) {
    do {
      _Str2 = *(char **)(*piVar2 + 0x10);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      _Str1 = *(char **)(param_1 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar1 = __strcmpi(_Str1,_Str2);
      if (iVar1 == 0) {
        return *piVar2;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)((int)this + 0xc));
  }
  return 0;
}


