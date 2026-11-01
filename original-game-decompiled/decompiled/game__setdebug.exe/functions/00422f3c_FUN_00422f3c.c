
/* ==== FUN_00422f3c @ 00422f3c ==== 
 * signature: undefined1 __register FUN_00422f3c(void)
 * body: 00422f3c-00422fab
 */

undefined1 FUN_00422f3c(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_stack_00000004;
  
  uVar2 = *(int *)(DAT_00447750 + 4) != 0;
  if ((*(char *)(in_stack_00000004 + -1) != '\0') && (DAT_0044776c == '\x02')) {
    cVar1 = (**(code **)(*DAT_0044774c + 0x50))();
    if ((cVar1 == '\0') && (DAT_0044774c[0x24] != 0)) {
      if ((int *)DAT_0044774c[0x24] != (int *)0x0) {
        uVar2 = FUN_00402ef0((int *)DAT_0044774c[0x24],*(undefined4 *)(DAT_00447750 + 4),
                             DAT_0044774c);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


