
/* ==== FUN_0053c860 @ 0053c860 ==== 
 * signature: undefined __cdecl FUN_0053c860(int * param_1)
 * body: 0053c860-0053c880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0053c860(int *param_1)

{
  _DAT_00000000 = 0;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) ^ 0x100;
  FUN_0053c730(param_1);
  return;
}


