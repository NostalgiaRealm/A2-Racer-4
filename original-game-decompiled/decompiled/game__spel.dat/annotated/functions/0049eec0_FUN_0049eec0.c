
/* ==== FUN_0049eec0 @ 0049eec0 ==== 
 * signature: int __thiscall FUN_0049eec0(void * this, char * param_1)
 * body: 0049eec0-0049ef17
 */

int __thiscall FUN_0049eec0(void *this,char *param_1)

{
  char *_Str2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)this != 0) && (iVar2 = 0, 0 < *(int *)((int)this + 4))) {
    iVar3 = 0;
    do {
      _Str2 = *(char **)(iVar3 + *(int *)this + 0x2c);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      iVar1 = __strcmpi(param_1,_Str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x38;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return -1;
}


