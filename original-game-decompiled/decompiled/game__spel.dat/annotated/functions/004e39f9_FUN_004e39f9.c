
/* ==== FUN_004e39f9 @ 004e39f9 ==== 
 * signature: undefined4 * __cdecl FUN_004e39f9(undefined4 param_1, void * param_2)
 * body: 004e39f9-004e3a53
 */

undefined4 * __cdecl FUN_004e39f9(undefined4 param_1,void *param_2)

{
  undefined4 *this;
  int *unaff_EDI;
  undefined4 uStack00000010;
  undefined4 *puStack00000018;
  
  this = operator_new(0xc);
  if (this != (undefined4 *)0x0) {
    this[1] = 0;
    uStack00000010 = 1;
    *this = &PTR_FUN_00577a44;
    puStack00000018 = this;
    FUN_004e3790(this,unaff_EDI);
    ExceptionList = param_2;
    return this;
  }
  ExceptionList = param_2;
  return (undefined4 *)0x0;
}


