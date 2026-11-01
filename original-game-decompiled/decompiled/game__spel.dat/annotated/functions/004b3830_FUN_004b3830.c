
/* ==== FUN_004b3830 @ 004b3830 ==== 
 * signature: undefined __fastcall FUN_004b3830(int param_1)
 * body: 004b3830-004b3845
 */

void __fastcall FUN_004b3830(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_0073b538;
  puVar3 = (undefined4 *)(param_1 + 0x1c);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


