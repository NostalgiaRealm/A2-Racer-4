
/* ==== FUN_0047c3c0 @ 0047c3c0 ==== 
 * signature: int __thiscall FUN_0047c3c0(void * this, int param_1)
 * body: 0047c3c0-0047c429
 */

int __thiscall FUN_0047c3c0(void *this,int param_1)

{
  char *_Str2;
  int iVar1;
  int iVar2;
  char *_Str1;
  int iVar3;
  
  _Str2 = *(char **)((int)this + 0x38);
  if (_Str2 == (char *)0x0) {
    _Str2 = "";
  }
  _Str1 = *(char **)(param_1 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  iVar1 = __strcmpi(_Str1,_Str2);
  if (iVar1 != 0) {
    iVar1 = (*(code *)**(undefined4 **)((int)this + 0x74))();
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x78) + 4) + iVar3 * 4) + 0xc)
                )(param_1);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    return 0;
  }
  return (int)this;
}


