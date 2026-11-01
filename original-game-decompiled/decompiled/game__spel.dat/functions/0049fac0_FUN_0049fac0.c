
/* ==== FUN_0049fac0 @ 0049fac0 ==== 
 * signature: undefined __fastcall FUN_0049fac0(int param_1)
 * body: 0049fac0-0049fc31
 */

void __fastcall FUN_0049fac0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  CHAR *pCVar7;
  char *pcVar8;
  CHAR *pCVar9;
  int local_118;
  CHAR local_10c [12];
  CHAR local_100 [256];
  
  *(undefined4 *)(param_1 + 0x220) = 0;
  iVar2 = FUN_004c3cd0(s_SndGroups_005aeee0,s_count_005aeeec);
  FUN_004a00b0(iVar2,0,0x1f);
  local_118 = 0;
  if (0 < iVar2) {
    piVar6 = (int *)(param_1 + 0x24);
    do {
      wsprintfA(local_10c,&DAT_005aeedc,local_118);
      FUN_004c3d10(s_SndGroups_005aeee0,local_10c,local_100,0xff);
      iVar3 = -1;
      pcVar8 = local_100;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004a0100((uint)(iVar3 != -2),(byte *)s__s__d__Can_t_find_sound_type__d_005aeebc);
      uVar4 = 0xffffffff;
      pcVar8 = local_100;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      if (0xfffffffd < uVar4) {
        FUN_0054b1b4();
      }
      iVar3 = *piVar6;
      if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
        if (uVar4 != 0) {
          if ((0x1f < (uint)piVar6[2]) || ((uint)piVar6[2] < uVar4)) {
            FUN_004028f0(piVar6 + -1,'\x01');
            goto LAB_0049fbda;
          }
          goto LAB_0049fbdf;
        }
        FUN_004028f0(piVar6 + -1,'\x01');
      }
      else if (uVar4 == 0) {
        *(char *)(iVar3 + -1) = cVar1 + -1;
        *piVar6 = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
      }
      else {
LAB_0049fbda:
        FUN_00402b20(uVar4);
LAB_0049fbdf:
        pCVar7 = local_100;
        pCVar9 = (CHAR *)*piVar6;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pCVar9 = *(undefined4 *)pCVar7;
          pCVar7 = pCVar7 + 4;
          pCVar9 = pCVar9 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pCVar9 = *pCVar7;
          pCVar7 = pCVar7 + 1;
          pCVar9 = pCVar9 + 1;
        }
        piVar6[1] = uVar4;
        *(undefined1 *)(*piVar6 + uVar4) = 0;
      }
      piVar6 = piVar6 + 4;
      local_118 = local_118 + 1;
      *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
    } while (local_118 < iVar2);
  }
  return;
}


