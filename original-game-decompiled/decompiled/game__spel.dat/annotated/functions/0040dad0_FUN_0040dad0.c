
/* ==== FUN_0040dad0 @ 0040dad0 ==== 
 * signature: int __cdecl FUN_0040dad0(int param_1)
 * body: 0040dad0-0040daf5
 */

int __cdecl FUN_0040dad0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < param_1) {
    iVar1 = 0;
    piVar2 = &DAT_005ce9e8;
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      piVar2 = piVar2 + 0xa5;
      iVar1 = iVar1 + 1;
    } while ((int)piVar2 < 0x5d1ae4);
  }
  return -1;
}


