
/* ==== FUN_0049ef80 @ 0049ef80 ==== 
 * signature: int __thiscall FUN_0049ef80(void * this, char * param_1)
 * body: 0049ef80-0049f020
 */

int __thiscall FUN_0049ef80(void *this,char *param_1)

{
  char *_Str2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  FUN_004a0100((uint)(*(int *)this != 0),(byte *)s__s___d__Sound_types_not_allocate_005aea38);
  iVar4 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar2 = 0;
    do {
      _Str2 = *(char **)(iVar2 + 0x2c + *(int *)this);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      iVar1 = __strcmpi(param_1,_Str2);
      if (iVar1 == 0) {
        iVar3 = *(int *)this + iVar4 * 0x38;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x38;
    } while (iVar4 < *(int *)((int)this + 4));
  }
  FUN_004a0100((uint)(iVar3 != 0),(byte *)s__s___d__Sound_type__s_not_found__005aea60);
  return iVar3;
}


