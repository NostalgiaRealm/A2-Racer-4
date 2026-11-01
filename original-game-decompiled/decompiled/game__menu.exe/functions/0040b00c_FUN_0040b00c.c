
/* ==== FUN_0040b00c @ 0040b00c ==== 
 * signature: undefined FUN_0040b00c(void)
 * body: 0040b00c-0040b045
 */

undefined4 FUN_0040b00c(void)

{
  int iVar1;
  char *in_stack_00000004;
  
  iVar1 = 1;
  while( true ) {
    if (*(int *)(&DAT_004ac5bc + iVar1 * 4) == 0) {
      FUN_00403e14((int *)(&DAT_004ac5bc + iVar1 * 4),in_stack_00000004);
      return 1;
    }
    if (iVar1 == 7) break;
    iVar1 = iVar1 + 1;
  }
  return 0;
}


