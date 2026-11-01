
/* ==== FUN_004ce360 @ 004ce360 ==== 
 * signature: undefined __stdcall FUN_004ce360(void)
 * body: 004ce360-004ce382
 */

void FUN_004ce360(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00741430;
  for (iVar1 = 10000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  DAT_0074b070 = 0;
  DAT_0074b074 = 1;
  return;
}


