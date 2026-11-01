
/* ==== FUN_004ea880 @ 004ea880 ==== 
 * signature: int __thiscall FUN_004ea880(void * this, int param_1, int param_2)
 * body: 004ea880-004ea8f6
 */

int __thiscall FUN_004ea880(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  int iVar3;
  char *_Str2;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x58))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 0x5c) + 4);
      if (*(int *)(iVar2 + iVar3 * 8) == param_1) {
        _Str2 = "";
        if (*(char **)(param_2 + 4) != (char *)0x0) {
          _Str2 = *(char **)(param_2 + 4);
        }
        iVar2 = FUN_004ec540(iVar2 + iVar3 * 8);
        _Str1 = *(char **)(iVar2 + 4);
        if (_Str1 == (char *)0x0) {
          _Str1 = "";
        }
        iVar2 = __strcmpi(_Str1,_Str2);
        if (iVar2 == 0) {
          return *(int *)(*(int *)((int)this + 0x5c) + 4) + iVar3 * 8;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


