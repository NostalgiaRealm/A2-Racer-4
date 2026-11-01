
/* ==== FUN_00555518 @ 00555518 ==== 
 * signature: undefined1 * __thiscall FUN_00555518(void * this, undefined1 * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined1 * param_5)
 * body: 00555518-00555588
 */

undefined1 * __thiscall
FUN_00555518(void *this,undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 *param_5)

{
  size_t sVar1;
  char *_Str;
  
  if (param_4 == 0) {
    _Str = *(char **)((int)this + 8);
  }
  else {
    if (param_4 != 1) {
      *param_1 = *param_5;
      FUN_004028f0(param_1,'\0');
      FUN_004093c0(param_1,param_5,0,0xffffffff);
      return param_1;
    }
    _Str = *(char **)((int)this + 0xc);
  }
  *param_1 = param_1._3_1_;
  FUN_004028f0(param_1,'\0');
  sVar1 = _strlen(_Str);
  FUN_00402940(param_1,(undefined4 *)_Str,sVar1);
  return param_1;
}


