
/* ==== FUN_00412860 @ 00412860 ==== 
 * signature: int __cdecl FUN_00412860(int param_1)
 * body: 00412860-00412897
 */

int __cdecl FUN_00412860(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_005d2ab0) {
    piVar1 = &DAT_005973c8;
    iVar2 = DAT_005d2ab0;
    do {
      if (param_1 == *piVar1) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = piVar1 + 0x16;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_1 == DAT_006fbaa4) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < 2) {
    return 0;
  }
  return iVar3 + -1;
}


