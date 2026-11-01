
/* ==== FUN_00444ec0 @ 00444ec0 ==== 
 * signature: undefined __cdecl FUN_00444ec0(int param_1)
 * body: 00444ec0-00444f23
 */

void __cdecl FUN_00444ec0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006ce140 + iVar1 * 0x1910) = 0;
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006cfa44 + iVar1 * 0x1910) = 0;
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006cfa4c + iVar1 * 0x1910) = 0;
  return;
}


