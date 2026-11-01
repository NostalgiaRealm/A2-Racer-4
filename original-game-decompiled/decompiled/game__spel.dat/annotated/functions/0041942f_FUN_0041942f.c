
/* ==== FUN_0041942f @ 0041942f ==== 
 * signature: undefined __cdecl FUN_0041942f(undefined4 param_1)
 * body: 0041942f-00419445
 */

void __cdecl FUN_0041942f(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_005d2bd0;
  do {
    *puVar1 = param_1;
    puVar1 = puVar1 + 3;
  } while ((int)puVar1 < 0x5d2cb4);
  return;
}


