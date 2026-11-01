
/* ==== FUN_00463d20 @ 00463d20 ==== 
 * signature: undefined __cdecl FUN_00463d20(int param_1)
 * body: 00463d20-00463d6c
 */

void __cdecl FUN_00463d20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != -1) {
    iVar1 = FUN_0049eb50(&DAT_006fbb5c,
                         *(int *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x30 + DAT_00715e50));
    FUN_0049e570(iVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x10) * 0xf0 + 0x5c + DAT_00715e50) = 0;
  }
  return;
}


