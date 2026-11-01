
/* ==== FUN_004afd20 @ 004afd20 ==== 
 * signature: undefined __cdecl FUN_004afd20(int param_1)
 * body: 004afd20-004afe22
 */

void __cdecl FUN_004afd20(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_8;
  
  iVar4 = param_1 * 0xf0;
  iVar3 = *(int *)(DAT_00715e50 + 0x34 + iVar4);
  if (*(int *)(DAT_00715e50 + 0x60 + iVar4) == 0) {
    local_8 = -1;
    do {
      uVar1 = FUN_004a71e0(local_8 + iVar3);
      iVar6 = 0;
      iVar2 = *(int *)(DAT_00715f00 + 0xf0 + uVar1 * 0x994);
      if (0 < iVar2) {
        do {
          FUN_004afa40(uVar1,iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
      local_8 = local_8 + 1;
    } while (local_8 < 2);
  }
  piVar5 = &DAT_007128cc;
  iVar3 = DAT_00715e50;
  do {
    if ((((piVar5[-1] != 0) && (*piVar5 != param_1)) &&
        (iVar2 = FUN_004a7200(*(int *)(iVar3 + 0x34 + iVar4),*(int *)(*piVar5 * 0xf0 + 0x34 + iVar3)
                             ), iVar3 = DAT_00715e50, iVar2 < 10)) &&
       (((iVar2 = *piVar5, iVar2 != *(int *)(DAT_00715e50 + 0x44 + iVar4) &&
         (iVar2 != *(int *)(DAT_00715e50 + 0x48 + iVar4))) &&
        ((*(byte *)(iVar2 * 0xf0 + 0x1c + DAT_00715e50) & 8) == 0)))) {
      FUN_004af880(iVar2);
      iVar3 = DAT_00715e50;
    }
    piVar5 = piVar5 + 2;
  } while ((int)piVar5 < 0x714e4c);
  return;
}


