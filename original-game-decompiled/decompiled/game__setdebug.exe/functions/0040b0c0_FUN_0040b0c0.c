
/* ==== FUN_0040b0c0 @ 0040b0c0 ==== 
 * signature: undefined __register FUN_0040b0c0(void)
 * body: 0040b0c0-0040b12a
 */

void FUN_0040b0c0(void)

{
  *(undefined1 *)(DAT_004475f8 + 3) = 1;
  (**(code **)(*DAT_004475f8 + -8))();
  DAT_004475f8 = (int *)0x0;
  *(undefined1 *)(DAT_004475fc + 3) = 1;
  FUN_00402d14(DAT_004475fc);
  DAT_004475fc = (int *)0x0;
  *(undefined4 *)PTR_DAT_00446a8c = 0;
  *(undefined4 *)PTR_DAT_00446b74 = 0;
  *(undefined4 *)PTR_DAT_00446af4 = 0;
  *(undefined4 *)PTR_DAT_00446b58 = 0;
  *(undefined4 *)PTR_DAT_00446b7c = 0;
  *(undefined4 *)PTR_DAT_00446c78 = 0;
  return;
}


