
/* ==== FUN_00422d90 @ 00422d90 ==== 
 * signature: uint __cdecl FUN_00422d90(int param_1, int param_2)
 * body: 00422d90-00422eca
 */

uint __cdecl FUN_00422d90(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char local_1;
  
  local_1 = '\0';
  iVar5 = param_2 * 0x50;
  if ((*(byte *)(iVar5 + DAT_00715eb8) & 4) != 0) {
    return DAT_00715eb8 & 0xffffff00;
  }
  uVar4 = DAT_00715eb8;
  if (0 < *(int *)(iVar5 + 0x24 + DAT_00715eb8)) {
    param_2 = 0;
    do {
      uVar4 = DAT_00715eb8;
      if (local_1 != '\0') goto LAB_00422ebb;
      iVar2 = FUN_004ab0d0((void *)(iVar5 + DAT_00715eb8),param_2);
      iVar3 = FUN_00414070(iVar2);
      bVar1 = false;
      if ((iVar3 != -1) && ((&DAT_005d1bac)[iVar3 * 0xe] == 1)) {
        bVar1 = true;
      }
      iVar2 = iVar2 * 0xf0;
      if (*(int *)(iVar2 + 0x5c + DAT_00715e50) == 1) {
        iVar3 = DAT_0073b0d0 + *(int *)(iVar2 + 0x24 + DAT_00715e50) * 0xa9;
        lVar6 = FUN_00403ea0(param_1,*(float *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54),
                             *(float *)(iVar3 + 0x58));
        if ((((0x200 < (int)lVar6) && ((int)lVar6 < 0xc00)) &&
            (*(float *)(iVar2 + 0xc4 + DAT_00715e50) <
             *(float *)(param_1 * 0xf0 + 0xc4 + DAT_00715e50))) && (!bVar1)) {
          local_1 = '\x01';
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(iVar5 + 0x24 + DAT_00715eb8));
    uVar4 = CONCAT31((int3)(DAT_00715eb8 >> 8),local_1);
    if (local_1 != '\0') {
LAB_00422ebb:
      return uVar4 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


