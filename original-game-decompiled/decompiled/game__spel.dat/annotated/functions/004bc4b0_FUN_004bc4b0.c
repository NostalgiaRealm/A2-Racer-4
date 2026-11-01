
/* ==== FUN_004bc4b0 @ 004bc4b0 ==== 
 * signature: undefined __cdecl FUN_004bc4b0(undefined4 * param_1)
 * body: 004bc4b0-004bc4d8
 */

void __cdecl FUN_004bc4b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40 [16];
  
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


