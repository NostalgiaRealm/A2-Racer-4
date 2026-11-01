
/* ==== FUN_00421550 @ 00421550 ==== 
 * signature: undefined4 __cdecl FUN_00421550(int param_1)
 * body: 00421550-004215c3
 */

undefined4 __cdecl FUN_00421550(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x294;
  FUN_00405b60((&DAT_005ce9e8)[param_1 * 0xa5],
               (&DAT_005ce9e8 + param_1 * 0xa5)
               [*(int *)(&DAT_005cebe4 + param_1 * 0x294) * 4 + 0x3f]);
  if (*(int *)(&DAT_005cec0c + iVar1) == 0) {
    if ((*(int *)(&DAT_005cea48 + iVar1) == *(int *)(&DAT_005cec50 + iVar1) + -1) ||
       (*(int *)(&DAT_005cea48 + iVar1) == *(int *)(&DAT_005cec50 + iVar1) + 1)) {
      return 1;
    }
  }
  return 0;
}


