
/* ==== FUN_00417ea0 @ 00417ea0 ==== 
 * signature: undefined __cdecl FUN_00417ea0(int param_1)
 * body: 00417ea0-00417f85
 */

void __cdecl FUN_00417ea0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00715e50;
  iVar2 = param_1 * 0x294;
  if (*(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50) !=
      *(int *)(&DAT_005cea6c + iVar2)) {
    *(int *)(&DAT_005cea70 + iVar2) = *(int *)(&DAT_005cea6c + iVar2);
    *(undefined4 *)(&DAT_005cea6c + iVar2) =
         *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + iVar1);
    if (0.0 <= *(float *)(&DAT_005cea54 + iVar2)) {
      *(undefined4 *)(&DAT_005cea54 + iVar2) = 0;
    }
    if ((-1 < param_1) && (param_1 < 6)) {
      iVar1 = FUN_0040e2f0(*(int *)(&DAT_005cea6c + iVar2),*(int *)(&DAT_005cea70 + iVar2));
      if (iVar1 == 1) {
        iVar1 = FUN_004a7200(*(int *)(&DAT_005cea70 + iVar2),*(int *)(&DAT_005cea6c + iVar2));
        (&DAT_005cea38)[param_1 * 0xa5] = (&DAT_005cea38)[param_1 * 0xa5] + iVar1;
        return;
      }
      iVar1 = FUN_004a7200(*(int *)(&DAT_005cea70 + iVar2),*(int *)(&DAT_005cea6c + iVar2));
      (&DAT_005cea38)[param_1 * 0xa5] = (&DAT_005cea38)[param_1 * 0xa5] - iVar1;
    }
  }
  return;
}


