
/* ==== FUN_005559bf @ 005559bf ==== 
 * signature: undefined1 * __thiscall FUN_005559bf(void * this, undefined1 * param_1)
 * body: 005559bf-005559f4
 */

undefined1 * __thiscall FUN_005559bf(void *this,undefined1 *param_1)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)((int)this + 0x10);
  *param_1 = param_1._3_1_;
  FUN_004028f0(param_1,'\0');
  sVar1 = _strlen(_Str);
  FUN_00402940(param_1,(undefined4 *)_Str,sVar1);
  return param_1;
}


