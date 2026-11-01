
/* ==== FUN_004e3bdd @ 004e3bdd ==== 
 * signature: undefined4 * __cdecl FUN_004e3bdd(undefined4 param_1, void * param_2)
 * body: 004e3bdd-004e3c36
 */

undefined4 * __cdecl FUN_004e3bdd(undefined4 param_1,void *param_2)

{
  undefined4 *this;
  int *unaff_EDI;
  undefined4 uStack00000010;
  undefined4 *puStack00000018;
  
  this = operator_new(0x14);
  if (this != (undefined4 *)0x0) {
    this[1] = 5;
    this[2] = 0;
    this[3] = 0;
    uStack00000010 = 0xb;
    *this = &PTR_FUN_00578100;
    puStack00000018 = this;
    FUN_004e88a0(this,unaff_EDI);
    ExceptionList = param_2;
    return this;
  }
  ExceptionList = param_2;
  return (undefined4 *)0x0;
}


