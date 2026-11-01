
/* ==== FUN_00559f59 @ 00559f59 ==== 
 * signature: undefined __cdecl FUN_00559f59(uint * param_1)
 * body: 00559f59-00559f8e
 */

void __cdecl FUN_00559f59(uint *param_1)

{
  int *piVar1;
  
  if ((param_1 <= DAT_005c8bd4) && (piVar1 = FUN_005623b0(param_1), piVar1 != (int *)0x0)) {
    return;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  HeapAlloc(DAT_0075008c,0,(int)param_1 + 0xfU & 0xfffffff0);
  return;
}


