
/* ==== FUN_0042ce7c @ 0042ce7c ==== 
 * signature: undefined1 __register FUN_0042ce7c(void)
 * body: 0042ce7c-0042ceeb
 */

undefined1 FUN_0042ce7c(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_stack_00000004;
  
  uVar2 = *(int *)(DAT_004ac760 + 4) != 0;
  if ((*(char *)(in_stack_00000004 + -1) != '\0') && (DAT_004ac77c == '\x02')) {
    cVar1 = (**(code **)(*DAT_004ac75c + 0x50))();
    if ((cVar1 == '\0') && (DAT_004ac75c[0x24] != 0)) {
      if ((int *)DAT_004ac75c[0x24] != (int *)0x0) {
        uVar2 = FUN_00403178((int *)DAT_004ac75c[0x24],*(undefined4 *)(DAT_004ac760 + 4),
                             DAT_004ac75c);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


