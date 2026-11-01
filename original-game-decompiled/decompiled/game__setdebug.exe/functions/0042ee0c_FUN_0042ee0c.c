
/* ==== FUN_0042ee0c @ 0042ee0c ==== 
 * signature: undefined __register FUN_0042ee0c(void)
 * body: 0042ee0c-0042ee7d
 */

void FUN_0042ee0c(void)

{
  FUN_00402d14(*(int **)PTR_DAT_00446c80);
  *(undefined4 *)PTR_DAT_00446c80 = 0;
  FUN_00402d14(*(int **)PTR_DAT_00446d84);
  *(undefined4 *)PTR_DAT_00446d84 = 0;
  FUN_00402d14(DAT_0044773c);
  DAT_0044773c = (int *)0x0;
  FUN_00402d14(DAT_0044777c);
  GlobalDeleteAtom(DAT_0044774a);
  GlobalDeleteAtom(DAT_00447748);
  if (DAT_00446744 != (HMODULE)0x0) {
    FreeLibrary(DAT_00446744);
  }
  return;
}


