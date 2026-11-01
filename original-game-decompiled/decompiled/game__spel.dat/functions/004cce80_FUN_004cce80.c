
/* ==== FUN_004cce80 @ 004cce80 ==== 
 * signature: int __stdcall FUN_004cce80(void)
 * body: 004cce80-004cce9c
 */

int FUN_004cce80(void)

{
  int iVar1;
  
  if (DAT_00740ddc < DAT_00740dd8) {
    iVar1 = DAT_00740ddc;
    DAT_00740ddc = DAT_00740ddc + 1;
    return iVar1;
  }
  return -1;
}


