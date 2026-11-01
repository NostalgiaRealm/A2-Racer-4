
/* ==== FUN_0054c9bb @ 0054c9bb ==== 
 * signature: undefined __fastcall FUN_0054c9bb(int param_1)
 * body: 0054c9bb-0054c9ef
 */

void __fastcall FUN_0054c9bb(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  while (uVar1 < 8) {
    if ((*(int *)(&DAT_0074dac0 + *(int *)(param_1 + 0x24) * 4) == 0) ||
       (*(int *)(&DAT_0074dac0 + *(int *)(param_1 + 0x24) * 4) == param_1)) break;
    uVar1 = *(int *)(param_1 + 0x24) + 1;
    *(uint *)(param_1 + 0x24) = uVar1;
  }
  *(int *)(&DAT_0074dac0 + *(int *)(param_1 + 0x24) * 4) = param_1;
  (&DAT_0074dae4)[*(int *)(param_1 + 0x24)] = (&DAT_0074dae4)[*(int *)(param_1 + 0x24)] + '\x01';
  return;
}


