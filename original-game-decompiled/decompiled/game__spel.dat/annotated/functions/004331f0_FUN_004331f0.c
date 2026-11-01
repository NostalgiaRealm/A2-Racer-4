
/* ==== FUN_004331f0 @ 004331f0 ==== 
 * signature: undefined __cdecl FUN_004331f0(int param_1, int param_2)
 * body: 004331f0-00433223
 */

void __cdecl FUN_004331f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_006b2bc0 + param_1 * 0x9a;
  puVar3 = &DAT_006b2bc0 + param_2 * 0x9a;
  for (iVar1 = 0x9a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


