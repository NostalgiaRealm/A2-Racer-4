
/* ==== FUN_00562ea1 @ 00562ea1 ==== 
 * signature: ulonglong __cdecl FUN_00562ea1(char * param_1)
 * body: 00562ea1-00563027
 */

ulonglong __cdecl FUN_00562ea1(char *param_1)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 local_14;
  uint local_8;
  
  pcVar7 = param_1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(int *)(param_1 + 4) < 0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  local_14 = FUN_005677d3(uVar1,0,0,1);
  iVar9 = (int)((ulonglong)local_14 >> 0x20);
  pcVar4 = (char *)local_14;
  if ((iVar9 != 0 && -1 < local_14) || (-1 < local_14)) {
    if ((*(ushort *)(param_1 + 0xc) & 0x108) == 0) {
      return local_14 - *(int *)(param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar6 = *(char **)(param_1 + 8);
    local_8 = (int)pcVar5 - (int)pcVar6;
    if ((*(uint *)(param_1 + 0xc) & 3) == 0) {
      if ((*(uint *)(param_1 + 0xc) & 0x80) == 0) {
        DAT_0074dc60 = 0x16;
        goto LAB_00562f43;
      }
    }
    else {
      pcVar8 = pcVar6;
      if ((*(byte *)((&DAT_007500a0)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 8) & 0x80) != 0) {
        for (; pcVar8 < pcVar5; pcVar8 = pcVar8 + 1) {
          if (*pcVar8 == '\n') {
            local_8 = local_8 + 1;
          }
        }
      }
    }
    if (local_14 == 0) {
      uVar3 = (ulonglong)local_8;
    }
    else {
      if ((param_1[0xc] & 1U) != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_8 = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)(param_1 + 4) - (int)pcVar6);
          iVar10 = (uVar1 & 0x1f) * 8;
          if ((*(byte *)(iVar10 + 4 + (&DAT_007500a0)[(int)uVar1 >> 5]) & 0x80) != 0) {
            lVar11 = FUN_005677d3(uVar1,0,0,2);
            if (lVar11 == local_14) {
              pcVar6 = *(char **)(param_1 + 8);
              pcVar8 = pcVar5 + (int)pcVar6;
              param_1 = pcVar5;
              for (; pcVar6 < pcVar8; pcVar6 = pcVar6 + 1) {
                if (*pcVar6 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar2 = pcVar7[0xd] & 0x20;
            }
            else {
              FUN_005677d3(uVar1,(LONG)pcVar4,iVar9,0);
              pcVar7 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar7 = *(char **)(param_1 + 0x18);
              }
              bVar2 = *(byte *)(iVar10 + 4 + (&DAT_007500a0)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar7;
            }
            pcVar5 = param_1;
            if (bVar2 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_14 = CONCAT44(iVar9 - (uint)(pcVar4 < param_1),(int)pcVar4 - (int)param_1);
        }
      }
      uVar3 = CONCAT44(local_14._4_4_ + (uint)CARRY4(local_8,(uint)local_14),
                       local_8 + (uint)local_14);
    }
  }
  else {
LAB_00562f43:
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}


