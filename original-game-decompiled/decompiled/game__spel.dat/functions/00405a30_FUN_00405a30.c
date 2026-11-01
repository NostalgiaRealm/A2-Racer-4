
/* ==== FUN_00405a30 @ 00405a30 ==== 
 * signature: undefined4 __cdecl FUN_00405a30(int param_1)
 * body: 00405a30-00405ab7
 */

undefined4 __cdecl FUN_00405a30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = param_1 * 0xf0 + DAT_00715e50;
  iVar1 = *(int *)(iVar2 + 0x3c);
  iVar2 = DAT_00715f00 + *(int *)(iVar2 + 0x34) * 0x994;
  if (0 < *(int *)(iVar2 + 0xf4)) {
    piVar3 = (int *)(iVar2 + 0x134);
    do {
      if (iVar1 == *piVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0xf4));
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0xf8)) {
    piVar3 = (int *)(iVar2 + 0x164);
    do {
      if (iVar1 == *piVar3) {
        return 2;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0xf8));
    return 0;
  }
  return 0;
}


