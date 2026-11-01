
/* ==== FUN_00423675 @ 00423675 ==== 
 * signature: uint __cdecl FUN_00423675(int param_1)
 * body: 00423675-004236f3
 */

uint __cdecl FUN_00423675(int param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (in_EAX != 1) {
    iVar3 = *(int *)(DAT_00715f00 + 0xf8 + param_1 * 0x994);
  }
  else {
    iVar3 = *(int *)(DAT_00715f00 + 0xf4 + param_1 * 0x994);
  }
  uVar2 = param_1 * 0x99;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = FUN_004a6d70(param_1,iVar4,(uint)(in_EAX != 1));
      uVar2 = iVar1 * 0x50;
      if (*(int *)(uVar2 + 0x24 + DAT_00715eb8) != 0) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return uVar2 & 0xffffff00;
}


