
/* ==== FUN_00464de0 @ 00464de0 ==== 
 * signature: undefined __cdecl FUN_00464de0(int param_1)
 * body: 00464de0-00464e86
 */

void __cdecl FUN_00464de0(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(&DAT_00709f1c + param_1 * 0x340) + -1;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lVar2 = __ftol();
  *(int *)(&DAT_00709f18 + param_1 * 0x340) = (int)lVar2;
  return;
}


