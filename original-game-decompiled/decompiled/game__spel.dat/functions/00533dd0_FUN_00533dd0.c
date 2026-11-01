
/* ==== FUN_00533dd0 @ 00533dd0 ==== 
 * signature: uint __cdecl FUN_00533dd0(int param_1)
 * body: 00533dd0-00533e5a
 */

uint __cdecl FUN_00533dd0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_0074bef4 == 0) {
    if (DAT_0074beec != 0) {
      return ~*(uint *)(param_1 + 0x50) >> 0x12 & 1;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar1 = FUN_0052ab60(*(int *)(param_1 + 0x18),(double *)0x0);
      return (uint)(iVar1 == 0);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x50) & 0x40000) != 0) {
      return (uint)(DAT_0074beec == 0);
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar1 + 4);
      iVar1 = *(int *)(iVar1 + 4);
      if (iVar1 != 0) {
        do {
          piVar2 = piVar2 + 1;
          if ((*(uint *)(iVar1 + 0x50) & 0x40000) != 0) {
            return 0;
          }
          iVar1 = *piVar2;
        } while (iVar1 != 0);
        return 1;
      }
    }
  }
  return 1;
}


