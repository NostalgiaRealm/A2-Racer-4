
/* ==== FUN_004eced0 @ 004eced0 ==== 
 * signature: int __thiscall FUN_004eced0(void * this, int param_1)
 * body: 004eced0-004ecf35
 */

int __thiscall FUN_004eced0(void *this,int param_1)

{
  int iVar1;
  char *_Str1;
  int iVar2;
  char *_Str2;
  int iVar3;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 8))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)((int)this + 0xc) + 4) + iVar3 * 4) + 8);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __strcmpi(_Str1,_Str2);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return -1;
}


