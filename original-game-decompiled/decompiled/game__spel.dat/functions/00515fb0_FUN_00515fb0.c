
/* ==== FUN_00515fb0 @ 00515fb0 ==== 
 * signature: undefined __stdcall FUN_00515fb0(void)
 * body: 00515fb0-0051621e
 */

void FUN_00515fb0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  undefined4 local_4;
  
  iVar3 = DAT_0074c03c;
  local_10 = 0;
  local_14 = 0;
  local_4 = 0;
  piVar1 = DAT_0074c60c;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchnewfacets__match_neighbo_005ba964);
    piVar1 = DAT_0074c60c;
  }
  for (; (piVar1 != (int *)0x0 && (piVar1[0xc] != 0)); piVar1 = (int *)piVar1[0xc]) {
    piVar7 = (int *)piVar1[0xf];
    local_10 = local_10 + 1;
    piVar7[*piVar7 + 1] = iVar3 + 1;
    piVar7 = piVar7 + 2;
    for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
  }
  FUN_00519e00((DAT_0074c03c + -1) * local_10);
  uVar2 = FUN_00514af0(DAT_0074c6e8);
  local_c = uVar2;
  iVar3 = DAT_0074c03c;
  for (piVar1 = DAT_0074c60c; (piVar1 != (int *)0x0 && (piVar1[0xc] != 0));
      piVar1 = (int *)piVar1[0xc]) {
    uVar6 = 1;
    if (1 < iVar3) {
      do {
        FUN_00515c30((uint)piVar1,uVar6,uVar2,&local_14);
        uVar6 = uVar6 + 1;
        iVar3 = DAT_0074c03c;
      } while ((int)uVar6 < DAT_0074c03c);
    }
  }
  piVar1 = DAT_0074c60c;
  if (local_14 != 0) {
    for (; (piVar1 != (int *)0x0 && (piVar1[0xc] != 0)); piVar1 = (int *)piVar1[0xc]) {
      if (((piVar1[0x14] & 0x100000U) != 0) && (piVar7 = (int *)piVar1[0xf], piVar7 != (int *)0x0))
      {
        iVar3 = piVar7[1];
        uVar2 = 0;
        iVar4 = FUN_00514af0(piVar7);
        local_8 = iVar4;
        if (0 < iVar4) {
          iVar5 = 4;
          do {
            if (iVar3 == 1) {
              FUN_00519820(piVar1,uVar2,local_c,&local_14);
              iVar4 = local_8;
            }
            uVar2 = uVar2 + 1;
            iVar5 = iVar5 + 4;
            iVar3 = *(int *)(piVar1[0xf] + iVar5);
          } while ((int)uVar2 < iVar4);
        }
      }
    }
    if (local_14 != 0) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_matchne_005ba918);
      FUN_0051a300(DAT_0074c5ec);
      FUN_0051e8e0(5,(int *)0x0);
    }
  }
  if (1 < DAT_0074be68) {
    if ((DAT_0074c6e8 != (int *)0x0) && (iVar3 = FUN_00514af0(DAT_0074c6e8), 0 < iVar3)) {
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00514af0(DAT_0074c6e8);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchnewfacets___d_new_facets_005ba8cc);
  }
  FUN_005145f0(&DAT_0074c6e8);
  if ((DAT_0074bed8 == 0) && (DAT_0074be90 == 0)) {
    if (DAT_0074be4c != 0) {
      FUN_00517a20((uint)DAT_0074c60c);
      return;
    }
  }
  else {
    piVar1 = DAT_0074c60c;
    if (3 < DAT_0074be68) {
      FUN_0051ecb0(DAT_0074c60c,0,1);
      piVar1 = DAT_0074c60c;
    }
    for (; (piVar1 != (int *)0x0 && (piVar1[0xc] != 0)); piVar1 = (int *)piVar1[0xc]) {
      if (piVar1[6] != 0) {
        FUN_005151d0((int)piVar1,(double *)0x0,1);
      }
    }
  }
  return;
}


