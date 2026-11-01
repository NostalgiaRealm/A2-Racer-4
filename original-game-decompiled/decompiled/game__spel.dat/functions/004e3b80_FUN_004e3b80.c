
/* ==== FUN_004e3b80 @ 004e3b80 ==== 
 * signature: undefined4 * __cdecl FUN_004e3b80(undefined4 param_1, void * param_2)
 * body: 004e3b80-004e3bdc
 */

undefined4 * __cdecl FUN_004e3b80(undefined4 param_1,void *param_2)

{
  undefined4 *this;
  int *unaff_EDI;
  undefined4 uStack00000010;
  undefined4 *puStack00000018;
  
  this = operator_new(0x18);
  if (this != (undefined4 *)0x0) {
    this[1] = 4;
    this[2] = 0;
    this[3] = 0;
    uStack00000010 = 9;
    this[5] = 0;
    *this = &PTR_FUN_0057813c;
    puStack00000018 = this;
    FUN_004e4d20(this,unaff_EDI);
    ExceptionList = param_2;
    return this;
  }
  ExceptionList = param_2;
  return (undefined4 *)0x0;
}


