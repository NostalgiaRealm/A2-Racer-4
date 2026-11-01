
/* ==== FUN_0040f760 @ 0040f760 ==== 
 * signature: int __thiscall FUN_0040f760(void * this, int param_1)
 * body: 0040f760-0040f7cc
 */

int __thiscall FUN_0040f760(void *this,int param_1)

{
  int iVar1;
  char *_Str1;
  int iVar2;
  char *_Str2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x24))();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)((int)this + 0x28) + 4) + iVar1 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __strcmpi(_Str1,_Str2);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x54;
      iVar2 = (*(code *)**(undefined4 **)((int)this + 0x24))();
    } while (iVar3 < iVar2);
  }
  return -1;
}


