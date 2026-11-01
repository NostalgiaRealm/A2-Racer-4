
/* ==== FUN_004f0fe0 @ 004f0fe0 ==== 
 * signature: int __thiscall FUN_004f0fe0(void * this, int param_1)
 * body: 004f0fe0-004f1044
 */

int __thiscall FUN_004f0fe0(void *this,int param_1)

{
  int iVar1;
  char *_Str2;
  int iVar2;
  char *_Str1;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 4))();
  iVar4 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      _Str2 = *(char **)(*(int *)(*(int *)((int)this + 8) + 4) + iVar3 + 4);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      _Str1 = *(char **)(param_1 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __strcmpi(_Str1,_Str2);
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar4 < iVar1);
  }
  return -1;
}


