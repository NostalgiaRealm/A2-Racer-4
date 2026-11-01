
/* ==== FUN_004ed8c0 @ 004ed8c0 ==== 
 * signature: int __thiscall FUN_004ed8c0(void * this, int param_1)
 * body: 004ed8c0-004ed917
 */

int __thiscall FUN_004ed8c0(void *this,int param_1)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0xd8)) {
    ppuVar3 = &PTR_s_CM_KEYB_ESC_005b7a1c;
    do {
      _Str1 = *(char **)(param_1 + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar1 = __strcmpi(_Str1,*ppuVar3);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      ppuVar3 = ppuVar3 + 3;
    } while (iVar2 < *(int *)((int)this + 0xd8));
  }
  return -1;
}


