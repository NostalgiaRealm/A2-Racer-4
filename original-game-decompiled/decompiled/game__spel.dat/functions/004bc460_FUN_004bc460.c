
/* ==== FUN_004bc460 @ 004bc460 ==== 
 * signature: undefined __cdecl FUN_004bc460(undefined4 * param_1)
 * body: 004bc460-004bc4a7
 */

void __cdecl FUN_004bc460(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_40 [16];
  
  iVar3 = 4;
  puVar1 = local_40;
  puVar2 = local_40;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar2 = 0x3f800000;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 5;
  } while (iVar3 != 0);
  puVar1 = local_40;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


