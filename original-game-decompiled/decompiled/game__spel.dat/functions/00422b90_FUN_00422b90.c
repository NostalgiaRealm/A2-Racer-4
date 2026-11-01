
/* ==== FUN_00422b90 @ 00422b90 ==== 
 * signature: int __cdecl FUN_00422b90(int param_1, int param_2)
 * body: 00422b90-00422bf1
 */

int __cdecl FUN_00422b90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  iVar1 = DAT_00715f00 + param_1 * 0x994;
  if (0 < *(int *)(iVar1 + 0xf4)) {
    piVar3 = (int *)(iVar1 + 0x134);
    do {
      if (param_2 == *piVar3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0xf4));
  }
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 0xf8)) {
    piVar3 = (int *)(iVar1 + 0x164);
    do {
      if (param_2 == *piVar3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0xf8));
  }
  return -1;
}


