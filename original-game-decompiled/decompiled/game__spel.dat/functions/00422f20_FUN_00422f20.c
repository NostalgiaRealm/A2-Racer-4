
/* ==== FUN_00422f20 @ 00422f20 ==== 
 * signature: undefined4 __cdecl FUN_00422f20(undefined4 param_1, int param_2, int param_3)
 * body: 00422f20-00422f6e
 */

uint __cdecl FUN_00422f20(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_00715eb8;
  if ((*(byte *)(param_2 * 0x50 + DAT_00715eb8) & 4) != 0) {
LAB_00422f38:
    return uVar1 & 0xffffff00;
  }
  iVar2 = 0;
  if (0 < param_3) {
    do {
      uVar1 = *(uint *)(param_2 * 0x50 + 0x20 + DAT_00715eb8);
      if (uVar1 == 0xffffffff) break;
      uVar1 = FUN_00422ed0(uVar1);
      if ((char)uVar1 == '\0') goto LAB_00422f38;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


