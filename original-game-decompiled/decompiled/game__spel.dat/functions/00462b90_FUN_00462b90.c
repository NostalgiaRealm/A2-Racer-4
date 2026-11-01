
/* ==== FUN_00462b90 @ 00462b90 ==== 
 * signature: undefined __cdecl FUN_00462b90(int param_1, undefined4 * param_2)
 * body: 00462b90-00462bad
 */

void __cdecl FUN_00462b90(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0xd4);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}


