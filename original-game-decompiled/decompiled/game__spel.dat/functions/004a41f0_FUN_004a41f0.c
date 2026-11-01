
/* ==== FUN_004a41f0 @ 004a41f0 ==== 
 * signature: undefined4 __thiscall FUN_004a41f0(void * this, int param_1)
 * body: 004a41f0-004a4258
 */

undefined4 __thiscall FUN_004a41f0(void *this,int param_1)

{
  int iVar1;
  char *_Str1;
  int iVar2;
  char *_Str2;
  int iVar3;
  
  iVar1 = (*(code *)**(undefined4 **)((int)this + 100))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      _Str2 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        _Str2 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(*(int *)(*(int *)(*(int *)((int)this + 0x68) + 4) + iVar3 * 4) + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __strcmpi(_Str1,_Str2);
      if (iVar2 == 0) {
        return *(undefined4 *)(*(int *)(*(int *)((int)this + 0x68) + 4) + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


