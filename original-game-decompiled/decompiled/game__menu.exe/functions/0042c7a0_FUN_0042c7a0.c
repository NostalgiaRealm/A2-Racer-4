
/* ==== FUN_0042c7a0 @ 0042c7a0 ==== 
 * signature: bool __register FUN_0042c7a0(uint param_1)
 * body: 0042c7a0-0042c7da
 */

bool FUN_0042c7a0(uint param_1)

{
  LRESULT LVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(DAT_004ac760 + 4) != 0) {
    LVar1 = FUN_0042c6a8(*(HWND *)(DAT_004ac760 + 8),param_1,DAT_004ac760,
                         (undefined4 *)(DAT_004ac760 + 0xc),*(int *)(DAT_004ac760 + 4));
    bVar2 = LVar1 != 0;
  }
  return bVar2;
}


