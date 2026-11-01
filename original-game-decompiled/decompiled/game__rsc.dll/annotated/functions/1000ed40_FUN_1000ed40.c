
/* ==== FUN_1000ed40 @ 1000ed40 ==== 
 * signature: uint * __cdecl FUN_1000ed40(int param_1, uint * param_2)
 * body: 1000ed40-1000f12e
 */

uint * __cdecl FUN_1000ed40(int param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint *local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *local_a0;
  uint local_9c [33];
  int local_18;
  int local_14;
  int local_10;
  uint *local_c;
  int local_8;
  
  if ((param_1 < 0) || (5 < param_1)) {
    local_c = (uint *)0x0;
  }
  else {
    FUN_100073f0(0x13);
    local_8 = 1;
    DAT_100317b4 = DAT_100317b4 + 1;
    while (DAT_100317c4 != 0) {
      Sleep(1);
    }
    if (param_1 == 0) {
      local_18 = 1;
      local_10 = 0;
      if (param_2 == (uint *)0x0) {
        local_c = FUN_1000f2d0();
      }
      else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
              (*(char *)((int)param_2 + 2) == '_')) {
        local_a0 = param_2;
        do {
          pbVar1 = FUN_10010d60((byte *)local_a0,&DAT_1002d05c);
          if (((pbVar1 == (byte *)0x0) || (sVar4 = (int)pbVar1 - (int)local_a0, sVar4 == 0)) ||
             (*pbVar1 == 0x3b)) {
            if (local_8 != 0) {
              FUN_10007490(0x13);
              DAT_100317b4 = DAT_100317b4 + -1;
            }
            return (uint *)0x0;
          }
          local_14 = 1;
          while ((local_14 < 6 &&
                 ((iVar2 = _strncmp(*(char **)(local_14 * 0xc + 0x100304e8),(char *)local_a0,sVar4),
                  iVar2 != 0 ||
                  (sVar3 = _strlen(*(char **)(local_14 * 0xc + 0x100304e8)), sVar4 != sVar3))))) {
            local_14 = local_14 + 1;
          }
          pbVar1 = pbVar1 + 1;
          sVar4 = FUN_10010ce0(pbVar1,&DAT_1002d058);
          if ((sVar4 == 0) && (*pbVar1 != 0x3b)) {
            if (local_8 != 0) {
              FUN_10007490(0x13);
              DAT_100317b4 = DAT_100317b4 + -1;
            }
            return (uint *)0x0;
          }
          if (local_14 < 6) {
            _strncpy((char *)local_9c,(char *)pbVar1,sVar4);
            *(undefined1 *)((int)local_9c + sVar4) = 0;
            iVar2 = FUN_1000f130(local_14,local_9c);
            if (iVar2 != 0) {
              local_10 = local_10 + 1;
            }
          }
          local_a0 = (uint *)(pbVar1 + sVar4);
          if ((byte)*local_a0 != 0) {
            local_a0 = (uint *)((int)local_a0 + 1);
          }
        } while ((byte)*local_a0 != 0);
        if (local_10 == 0) {
          local_b0 = (uint *)0x0;
        }
        else {
          local_b0 = FUN_1000f2d0();
        }
        local_c = local_b0;
      }
      else {
        local_c = FUN_1000f3d0(param_2,local_9c,(undefined4 *)0x0,(undefined4 *)0x0);
        if (local_c != (uint *)0x0) {
          for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
            if (local_14 != 0) {
              iVar2 = _strcmp((char *)local_9c,(&DAT_100304ec)[local_14 * 3]);
              if (iVar2 == 0) {
                local_10 = local_10 + 1;
              }
              else {
                iVar2 = FUN_1000f130(local_14,local_9c);
                if (iVar2 == 0) {
                  local_18 = 0;
                }
                else {
                  local_10 = local_10 + 1;
                }
              }
            }
          }
          if (local_18 == 0) {
            if (local_10 == 0) {
              local_b4 = (uint *)0x0;
            }
            else {
              local_b4 = FUN_1000f2d0();
            }
            local_c = local_b4;
          }
          else {
            local_c = FUN_1000f2d0();
            FUN_100041a0(DAT_100304ec,2);
            DAT_100304ec = (void *)0x0;
          }
        }
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        local_ac = (&DAT_100304ec)[param_1 * 3];
      }
      else {
        local_ac = (uint *)FUN_1000f130(param_1,param_2);
      }
      local_c = local_ac;
    }
    if (local_8 != 0) {
      FUN_10007490(0x13);
      DAT_100317b4 = DAT_100317b4 + -1;
    }
  }
  return local_c;
}


