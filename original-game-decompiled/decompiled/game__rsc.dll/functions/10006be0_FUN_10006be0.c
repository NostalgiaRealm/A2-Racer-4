
/* ==== FUN_10006be0 @ 10006be0 ==== 
 * signature: int __cdecl FUN_10006be0(uint * param_1)
 * body: 10006be0-10006e79
 */

int __cdecl FUN_10006be0(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  char *pcVar6;
  DWORD local_20;
  int local_1c;
  uint local_14;
  char *local_8;
  
  if ((param_1 == (uint *)0x0) &&
     (iVar3 = FUN_10003050(2,0x1002cb5c,99,0,(byte *)"str != NULL"), iVar3 == 1)) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  uVar1 = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_20 = FUN_10006a20(uVar1,0,1);
  if ((int)local_20 < 0) {
    local_1c = -1;
  }
  else if ((param_1[3] & 0x108) == 0) {
    local_1c = local_20 - param_1[1];
  }
  else {
    local_1c = *param_1 - param_1[2];
    iVar3 = (int)uVar1 >> 5;
    if ((param_1[3] & 3) == 0) {
      if ((param_1[3] & 0x80) == 0) {
        puVar4 = (undefined4 *)FUN_10006f20();
        *puVar4 = 0x16;
        return -1;
      }
    }
    else if (((int)*(char *)((&DAT_10031ac0)[iVar3] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80U) != 0) {
      for (local_8 = (char *)param_1[2]; local_8 < (char *)*param_1; local_8 = local_8 + 1) {
        if (*local_8 == '\n') {
          local_1c = local_1c + 1;
        }
      }
    }
    if (local_20 != 0) {
      if ((param_1[3] & 1) != 0) {
        if (param_1[1] == 0) {
          local_1c = 0;
        }
        else {
          local_14 = param_1[1] + (*param_1 - param_1[2]);
          if (((int)*(char *)((&DAT_10031ac0)[iVar3] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80U) != 0) {
            DVar5 = FUN_10006a20(uVar1,0,2);
            if (DVar5 == local_20) {
              pcVar6 = (char *)(param_1[2] + local_14);
              for (local_8 = (char *)param_1[2]; local_8 < pcVar6; local_8 = local_8 + 1) {
                if (*local_8 == '\n') {
                  local_14 = local_14 + 1;
                }
              }
              if ((param_1[3] & 0x2000) != 0) {
                local_14 = local_14 + 1;
              }
            }
            else {
              FUN_10006a20(uVar1,local_20,0);
              if (((local_14 < 0x201) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
                local_14 = 0x200;
              }
              else {
                local_14 = param_1[6];
              }
              if ((*(byte *)((&DAT_10031ac0)[iVar3] + 4 + (uVar1 & 0x1f) * 0x24) & 4) != 0) {
                local_14 = local_14 + 1;
              }
            }
          }
          local_20 = local_20 - local_14;
        }
      }
      local_1c = local_20 + local_1c;
    }
  }
  return local_1c;
}


