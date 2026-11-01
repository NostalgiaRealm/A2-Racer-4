
/* ==== FUN_00538fb0 @ 00538fb0 ==== 
 * signature: bool __stdcall FUN_00538fb0(void)
 * body: 00538fb0-00539113
 */

bool FUN_00538fb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_4;
  
  iVar5 = 0;
  local_4 = 0;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_test_vneighbors__testing_vert_005c6f74);
  }
  iVar1 = DAT_0074c60c;
  if (DAT_0074c460 == 0) {
    FUN_0051a750();
    iVar1 = DAT_0074c60c;
  }
  for (; (iVar3 = DAT_0074c60c, iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0));
      iVar1 = *(int *)(iVar1 + 0x30)) {
    *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xffffdfff;
  }
  for (; (iVar3 != 0 && (*(int *)(iVar3 + 0x30) != 0)); iVar3 = *(int *)(iVar3 + 0x30)) {
    *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) | 0x2000;
    *(int *)(iVar3 + 0x48) = DAT_0074c6d0;
    DAT_0074c6d0 = DAT_0074c6d0 + 1;
    iVar1 = *(int *)(iVar3 + 0x3c);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      piVar4 = (int *)(iVar1 + 8);
      while (iVar2 != 0) {
        *(int *)(iVar3 + 0x48) = DAT_0074c6d0;
        iVar2 = *piVar4;
        piVar4 = piVar4 + 1;
      }
    }
    iVar1 = *(int *)(iVar3 + 0x34);
    if (iVar1 != 0) {
      piVar4 = (int *)(iVar1 + 4);
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        piVar4 = piVar4 + 1;
        iVar5 = *(int *)(iVar1 + 0xc);
        if (iVar5 != 0) {
          piVar6 = (int *)(iVar5 + 4);
          iVar5 = *(int *)(iVar5 + 4);
          while (iVar5 != 0) {
            piVar6 = piVar6 + 1;
            if ((((*(uint *)(iVar5 + 0x50) & 0x2000) == 0) &&
                (*(int *)(iVar5 + 0x48) != DAT_0074c6d0)) &&
               (iVar5 = FUN_00538c80(iVar3,iVar5), iVar5 != 0)) {
              local_4 = local_4 + 1;
            }
            iVar5 = *piVar6;
          }
        }
        iVar5 = local_4;
        iVar1 = *piVar4;
      }
    }
  }
  DAT_0074cd38 = DAT_0074cd38 + iVar5;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_test_vneighbors__found__d_non_005c6f38);
  }
  return 0 < iVar5;
}


