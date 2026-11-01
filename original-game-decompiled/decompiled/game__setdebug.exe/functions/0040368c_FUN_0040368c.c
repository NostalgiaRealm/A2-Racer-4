
/* ==== FUN_0040368c @ 0040368c ==== 
 * signature: undefined __register FUN_0040368c(void)
 * body: 0040368c-004036b0
 */

void FUN_0040368c(void)

{
  int *piVar1;
  int *in_FS_OFFSET;
  
  piVar1 = (int *)*in_FS_OFFSET;
  if (DAT_004474a0 == piVar1) {
    *in_FS_OFFSET = *DAT_004474a0;
    return;
  }
  while( true ) {
    if (piVar1 == (int *)0xffffffff) {
      return;
    }
    if ((int *)*piVar1 == DAT_004474a0) break;
    piVar1 = (int *)*piVar1;
  }
  *piVar1 = *DAT_004474a0;
  return;
}


