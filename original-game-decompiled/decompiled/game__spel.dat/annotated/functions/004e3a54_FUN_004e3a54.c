
/* ==== FUN_004e3a54 @ 004e3a54 ==== 
 * signature: undefined4 * __cdecl FUN_004e3a54(undefined4 param_1, void * param_2)
 * body: 004e3a54-004e3aa6
 */

undefined4 * __cdecl FUN_004e3a54(undefined4 param_1,void *param_2)

{
  undefined4 *this;
  int *unaff_EDI;
  undefined4 uStack00000010;
  undefined4 *puStack00000018;
  
  this = operator_new(0x14);
  if (this != (undefined4 *)0x0) {
    this[1] = 0;
    this[2] = 1;
    uStack00000010 = 3;
    *this = &PTR_FUN_00577bd4;
    puStack00000018 = this;
    FUN_004e4660(this,unaff_EDI);
    ExceptionList = param_2;
    return this;
  }
  ExceptionList = param_2;
  return (undefined4 *)0x0;
}


