
/* ==== FUN_00403914 @ 00403914 ==== 
 * signature: undefined __register FUN_00403914(void)
 * body: 00403914-00403938
 */

void FUN_00403914(void)

{
  int *piVar1;
  int *in_FS_OFFSET;
  
  piVar1 = (int *)*in_FS_OFFSET;
  if (DAT_004ac4a8 == piVar1) {
    *in_FS_OFFSET = *DAT_004ac4a8;
    return;
  }
  while( true ) {
    if (piVar1 == (int *)0xffffffff) {
      return;
    }
    if ((int *)*piVar1 == DAT_004ac4a8) break;
    piVar1 = (int *)*piVar1;
  }
  *piVar1 = *DAT_004ac4a8;
  return;
}


