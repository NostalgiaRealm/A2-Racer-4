
/* ==== FUN_00562e5d @ 00562e5d ==== 
 * signature: undefined __cdecl FUN_00562e5d(undefined4 * param_1)
 * body: 00562e5d-00562ea0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00562e5d(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_0074dc5c = _DAT_0074dc5c + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}


