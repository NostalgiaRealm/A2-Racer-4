
/* ==== FUN_00422860 @ 00422860 ==== 
 * signature: bool __register FUN_00422860(uint param_1)
 * body: 00422860-0042289a
 */

bool FUN_00422860(uint param_1)

{
  LRESULT LVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(DAT_00447750 + 4) != 0) {
    LVar1 = FUN_00422768(*(HWND *)(DAT_00447750 + 8),param_1,DAT_00447750,
                         (undefined4 *)(DAT_00447750 + 0xc),*(int *)(DAT_00447750 + 4));
    bVar2 = LVar1 != 0;
  }
  return bVar2;
}


