
/* ==== FUN_004245f0 @ 004245f0 ==== 
 * signature: int __thiscall FUN_004245f0(void * this, int param_1)
 * body: 004245f0-00424652
 */

int __thiscall FUN_004245f0(void *this,int param_1)

{
  int iVar1;
  char *_Str1;
  int iVar2;
  char *_Str2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)**(undefined4 **)this)();
  iVar3 = 0;
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)((int)this + 4) + 4) + iVar4 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __strcmpi(_Str1,_Str2);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x60;
    } while (iVar3 < iVar1);
  }
  return -1;
}


