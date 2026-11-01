
/* ==== FUN_0040bda8 @ 0040bda8 ==== 
 * signature: undefined __register FUN_0040bda8(void)
 * body: 0040bda8-0040be12
 */

void FUN_0040bda8(void)

{
  *(undefined1 *)(DAT_004ac600 + 3) = 1;
  (**(code **)(*DAT_004ac600 + -8))();
  DAT_004ac600 = (int *)0x0;
  *(undefined1 *)(DAT_004ac604 + 3) = 1;
  FUN_00402f9c(DAT_004ac604);
  DAT_004ac604 = (int *)0x0;
  *(undefined4 *)PTR_DAT_004ab620 = 0;
  *(undefined4 *)PTR_DAT_004ab75c = 0;
  *(undefined4 *)PTR_DAT_004ab6b8 = 0;
  *(undefined4 *)PTR_DAT_004ab738 = 0;
  *(undefined4 *)PTR_DAT_004ab764 = 0;
  *(undefined4 *)PTR_DAT_004ab8a4 = 0;
  return;
}


