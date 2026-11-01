
/* ==== FUN_00415910 @ 00415910 ==== 
 * signature: undefined __cdecl FUN_00415910(int param_1)
 * body: 00415910-00415974
 */

void __cdecl FUN_00415910(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  if (*(int *)(&DAT_005d1bbc + param_1 * 0x38) == *(int *)(&DAT_00709f1c + iVar1 * 0x340)) {
    *(undefined4 *)((&DAT_005d1ba8)[param_1 * 0xe] * 0xf0 + 0x5c + DAT_00715e50) = 0;
    FUN_00414000((&DAT_005d1ba8)[param_1 * 0xe]);
  }
  return;
}


