
/* ==== FUN_004316d0 @ 004316d0 ==== 
 * signature: int __cdecl FUN_004316d0(int param_1)
 * body: 004316d0-004316f3
 */

int __cdecl FUN_004316d0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != -1) {
    iVar1 = 0;
    piVar2 = &DAT_006c32f0;
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      piVar2 = piVar2 + 0xd;
      iVar1 = iVar1 + 1;
    } while ((int)piVar2 < 0x6c34f8);
  }
  return -1;
}


