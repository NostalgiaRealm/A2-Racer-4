
/* ==== FUN_004e3aa7 @ 004e3aa7 ==== 
 * signature: undefined4 * __cdecl FUN_004e3aa7(undefined4 param_1, void * param_2)
 * body: 004e3aa7-004e3b03
 */

undefined4 * __cdecl FUN_004e3aa7(undefined4 param_1,void *param_2)

{
  undefined4 *this;
  int *unaff_EDI;
  undefined4 uStack00000010;
  undefined4 *puStack00000018;
  
  this = operator_new(0x1c);
  if (this != (undefined4 *)0x0) {
    this[1] = 0;
    this[2] = 2;
    this[4] = 0;
    this[6] = 0;
    uStack00000010 = 5;
    *this = &PTR_FUN_00577b98;
    puStack00000018 = this;
    FUN_004e40e0(this,unaff_EDI);
    ExceptionList = param_2;
    return this;
  }
  ExceptionList = param_2;
  return (undefined4 *)0x0;
}


