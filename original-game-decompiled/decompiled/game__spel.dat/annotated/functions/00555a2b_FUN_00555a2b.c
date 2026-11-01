
/* ==== FUN_00555a2b @ 00555a2b ==== 
 * signature: undefined1 * __thiscall FUN_00555a2b(void * this, undefined1 * param_1)
 * body: 00555a2b-00555a60
 */

undefined1 * __thiscall FUN_00555a2b(void *this,undefined1 *param_1)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)((int)this + 0x18);
  *param_1 = param_1._3_1_;
  FUN_004028f0(param_1,'\0');
  sVar1 = _strlen(_Str);
  FUN_00402940(param_1,(undefined4 *)_Str,sVar1);
  return param_1;
}


