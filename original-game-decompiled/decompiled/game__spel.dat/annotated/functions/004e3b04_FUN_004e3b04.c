
/* ==== FUN_004e3b04 @ 004e3b04 ==== 
 * signature: undefined4 * __cdecl FUN_004e3b04(undefined4 param_1, void * param_2)
 * body: 004e3b04-004e3b41
 */

undefined4 * __cdecl FUN_004e3b04(undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  int *unaff_EDI;
  undefined4 uStack00000010;
  void *pvStack00000018;
  
  pvStack00000018 = operator_new(0x10);
  uStack00000010 = 6;
  if (pvStack00000018 != (void *)0x0) {
    puVar1 = FUN_004e36e0(pvStack00000018,unaff_EDI);
    ExceptionList = param_2;
    return puVar1;
  }
  ExceptionList = param_2;
  return (undefined4 *)0x0;
}


