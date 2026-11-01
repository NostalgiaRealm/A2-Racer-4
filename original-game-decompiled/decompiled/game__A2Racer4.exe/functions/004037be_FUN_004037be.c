
/* ==== FUN_004037be @ 004037be ==== 
 * signature: undefined __cdecl FUN_004037be(uint * param_1)
 * body: 004037be-004037f3
 */

void __cdecl FUN_004037be(uint *param_1)

{
  int *piVar1;
  
  if ((param_1 <= DAT_00407910) && (piVar1 = FUN_00403ec9(param_1), piVar1 != (int *)0x0)) {
    return;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  HeapAlloc(DAT_00409344,0,(int)param_1 + 0xfU & 0xfffffff0);
  return;
}


