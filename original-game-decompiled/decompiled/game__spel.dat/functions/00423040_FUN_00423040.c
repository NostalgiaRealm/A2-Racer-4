
/* ==== FUN_00423040 @ 00423040 ==== 
 * signature: undefined4 __cdecl FUN_00423040(int param_1, int param_2)
 * body: 00423040-004230c2
 */

uint __cdecl FUN_00423040(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  uVar3 = param_1 * 0xf0;
  iVar6 = *(int *)(uVar3 + 0x3c + DAT_00715e50);
  uVar1 = DAT_00715eb8;
  if (0 < param_2) {
    do {
      uVar3 = uVar1;
      if (iVar6 == -1) break;
      iVar7 = 0;
      iVar6 = iVar6 * 0x50;
      if (0 < *(int *)(iVar6 + 0x24 + uVar3)) {
        do {
          iVar4 = FUN_004ab0d0((void *)(iVar6 + uVar3),iVar7);
          if (iVar4 == DAT_006fba58) {
            FUN_00469fa0();
            bVar2 = FUN_004237b0();
            if (bVar2) {
              return CONCAT31(extraout_var,1);
            }
          }
          iVar7 = iVar7 + 1;
          uVar3 = DAT_00715eb8;
        } while (iVar7 < *(int *)(iVar6 + 0x24 + DAT_00715eb8));
      }
      iVar6 = *(int *)(iVar6 + 0x20 + uVar3);
      iVar5 = iVar5 + 1;
      uVar1 = uVar3;
    } while (iVar5 < param_2);
  }
  return uVar3 & 0xffffff00;
}


