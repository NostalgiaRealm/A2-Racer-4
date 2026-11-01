
/* ==== FUN_004fa040 @ 004fa040 ==== 
 * signature: undefined __fastcall FUN_004fa040(undefined4 * param_1)
 * body: 004fa040-004fa067
 */

void __fastcall FUN_004fa040(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0x3ff00000;
  param_1[10] = 0;
  param_1[0xb] = 0x3ff00000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3ff00000;
  return;
}


