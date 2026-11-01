
/* ==== FUN_00422ed0 @ 00422ed0 ==== 
 * signature: undefined4 __cdecl FUN_00422ed0(int param_1)
 * body: 00422ed0-00422f1f
 */

undefined4 __cdecl FUN_00422ed0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1 * 0x50;
  if (0 < *(int *)(iVar2 + 0x24 + DAT_00715eb8)) {
    do {
      iVar1 = FUN_004ab0d0((void *)(iVar2 + DAT_00715eb8),iVar3);
      if (*(int *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) == 1) {
        return ((iVar1 * 0xf & 0xfffffffU) >> 4) << 8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x24 + DAT_00715eb8));
  }
  return CONCAT31((int3)((uint)DAT_00715eb8 >> 8),1);
}


