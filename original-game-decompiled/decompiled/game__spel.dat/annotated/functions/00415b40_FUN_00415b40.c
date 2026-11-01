
/* ==== FUN_00415b40 @ 00415b40 ==== 
 * signature: undefined __cdecl FUN_00415b40(int param_1)
 * body: 00415b40-00415b9e
 */

void __cdecl FUN_00415b40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((&DAT_005d1ba8)[param_1 * 0xe] * 0xf0 + 0x3c + DAT_00715e50);
  iVar2 = 0;
  do {
    if (iVar1 == *(int *)(&DAT_005d1bbc + param_1 * 0x38)) {
      return;
    }
    iVar2 = iVar2 + 1;
    iVar1 = *(int *)(iVar1 * 0x50 + 0x20 + DAT_00715eb8);
  } while ((iVar1 != -1) && (iVar2 < 5));
  (&DAT_005d1bac)[param_1 * 0xe] = 0;
  return;
}


