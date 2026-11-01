
/* ==== FUN_0047bcd0 @ 0047bcd0 ==== 
 * signature: uint __thiscall FUN_0047bcd0(void * this, int param_1)
 * body: 0047bcd0-0047bd04
 */

uint __thiscall FUN_0047bcd0(void *this,int param_1)

{
  char *_Str2;
  int iVar1;
  char *_Str1;
  
  _Str2 = *(char **)((int)this + 0x38);
  if (_Str2 == (char *)0x0) {
    _Str2 = "";
  }
  _Str1 = *(char **)(param_1 + 4);
  if (_Str1 == (char *)0x0) {
    _Str1 = "";
  }
  iVar1 = __strcmpi(_Str1,_Str2);
  return ~-(uint)(iVar1 != 0) & (uint)this;
}


