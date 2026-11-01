
/* ==== FUN_00423510 @ 00423510 ==== 
 * signature: undefined4 __cdecl FUN_00423510(int param_1)
 * body: 00423510-00423552
 */

uint __cdecl FUN_00423510(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(param_1 * 0x50 + 0x24 + DAT_00715eb8);
  uVar2 = DAT_00715eb8;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_004ab0d0((void *)(DAT_00715eb8 + param_1 * 0x50),iVar3);
      if (DAT_006fba58 == uVar2) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return uVar2 & 0xffffff00;
}


