
/* ==== FUN_00438fc0 @ 00438fc0 ==== 
 * signature: undefined __register FUN_00438fc0(void)
 * body: 00438fc0-00439031
 */

void FUN_00438fc0(void)

{
  FUN_00402f9c(*(int **)PTR_DAT_004ab8ac);
  *(undefined4 *)PTR_DAT_004ab8ac = 0;
  FUN_00402f9c(*(int **)PTR_DAT_004ab9f8);
  *(undefined4 *)PTR_DAT_004ab9f8 = 0;
  FUN_00402f9c(DAT_004ac74c);
  DAT_004ac74c = (int *)0x0;
  FUN_00402f9c(DAT_004ac78c);
  GlobalDeleteAtom(DAT_004ac75a);
  GlobalDeleteAtom(DAT_004ac758);
  if (DAT_004aa818 != (HMODULE)0x0) {
    FreeLibrary(DAT_004aa818);
  }
  return;
}


