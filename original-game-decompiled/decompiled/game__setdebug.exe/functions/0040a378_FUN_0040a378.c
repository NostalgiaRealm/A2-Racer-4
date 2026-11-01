
/* ==== FUN_0040a378 @ 0040a378 ==== 
 * signature: undefined FUN_0040a378(void)
 * body: 0040a378-0040a3b1
 */

undefined4 FUN_0040a378(void)

{
  int iVar1;
  char *in_stack_00000004;
  
  iVar1 = 1;
  while( true ) {
    if (*(int *)(&DAT_004475b4 + iVar1 * 4) == 0) {
      FUN_00403b70((int *)(&DAT_004475b4 + iVar1 * 4),in_stack_00000004);
      return 1;
    }
    if (iVar1 == 7) break;
    iVar1 = iVar1 + 1;
  }
  return 0;
}


