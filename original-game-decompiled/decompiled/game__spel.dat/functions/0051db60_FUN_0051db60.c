
/* ==== FUN_0051db60 @ 0051db60 ==== 
 * signature: undefined __cdecl FUN_0051db60(byte * param_1)
 * body: 0051db60-0051df30
 */

void __cdecl FUN_0051db60(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *this;
  double *pdVar4;
  bool bVar5;
  float10 fVar6;
  byte *local_18;
  int local_14;
  double local_10;
  
  local_14 = DAT_0074c040;
  if ((DAT_0074be40 != 0) && ((DAT_0074bf8c != 0 || (DAT_0074bf90 != 0)))) {
    local_14 = DAT_0074c040 + 1;
  }
  bVar1 = *param_1;
  local_18 = param_1;
  do {
    if (bVar1 == 0) {
      if (DAT_0074c03c == 0) {
        return;
      }
      pdVar4 = (double *)(DAT_0074c468 + (DAT_0074c03c + -1) * 8);
      iVar3 = DAT_0074c03c + -1;
      do {
        if (*(double *)((DAT_0074c46c - DAT_0074c468) + (int)pdVar4) <= -8.988465674311579e+307) {
          if (*pdVar4 < 8.988465674311579e+307) {
            DAT_0074be58 = 1;
          }
        }
        else {
          DAT_0074be58 = 1;
          if (*pdVar4 < 8.988465674311579e+307) {
            DAT_0074be58 = 0;
            DAT_0074bfe0 = 1;
            return;
          }
        }
        pdVar4 = pdVar4 + -1;
        bVar5 = iVar3 != 0;
        iVar3 = iVar3 + -1;
      } while (bVar5);
      return;
    }
    if (*local_18 == 0x2d) {
      local_18 = local_18 + 1;
    }
    bVar1 = *local_18;
    if (bVar1 == 0x50) {
      bVar1 = local_18[1];
      this = local_18 + 1;
      while (local_18 = this, bVar1 != 0) {
        local_18 = this + 1;
        uVar2 = FUN_0055ac61(local_18,(int)(char)bVar1);
        this = extraout_ECX;
        if (uVar2 != 0) break;
        if ((bVar1 == 100) || (bVar1 == 0x44)) {
          uVar2 = FUN_0055ac39((void *)(int)(char)*local_18,(int)(char)*local_18);
          if (uVar2 == 0) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__no_dimension_give_005be3ac);
          }
          else {
            iVar3 = FUN_0051e060(&local_18,local_18,(uint *)&local_18);
            if (iVar3 < DAT_0074c03c) {
              if (*local_18 == 0x3a) {
                local_18 = local_18 + 1;
                fVar6 = (float10)FUN_0051e030(&local_18,local_18,(uint *)&local_18);
                local_10 = (double)fVar6;
                if ((float10)1.0 < ABS(fVar6)) {
                  FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__value__2_4g_for_P_005be318);
                  goto LAB_0051dcce;
                }
              }
              else {
                fVar6 = (float10)0.0;
              }
              if (bVar1 == 100) {
                *(double *)(DAT_0074c46c + iVar3 * 8) = (double)fVar6;
              }
              else {
                *(double *)(DAT_0074c468 + iVar3 * 8) = (double)fVar6;
              }
            }
            else {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__dimension__d_for_P_005be364);
            }
          }
        }
LAB_0051dcce:
        this = local_18;
        bVar1 = *local_18;
      }
    }
    else {
      this = local_18;
      if (bVar1 == 0x51) {
        bVar1 = local_18[1];
        this = local_18 + 1;
        while (local_18 = this, bVar1 != 0) {
          local_18 = this + 1;
          uVar2 = FUN_0055ac61(local_18,(int)(char)bVar1);
          this = extraout_ECX_00;
          if (uVar2 != 0) break;
          if (bVar1 == 0x62) {
            if (*local_18 == 0x42) {
              local_18 = local_18 + 1;
              iVar3 = local_14;
              while (iVar3 != 0) {
                iVar3 = iVar3 + -1;
                *(undefined4 *)(DAT_0074c474 + iVar3 * 8) = 0;
                *(undefined4 *)(DAT_0074c474 + 4 + iVar3 * 8) = 0xbfe00000;
                *(undefined4 *)(DAT_0074c470 + iVar3 * 8) = 0;
                *(undefined4 *)(DAT_0074c470 + 4 + iVar3 * 8) = 0x3fe00000;
              }
            }
            else {
              if (*local_18 != 0x62) goto LAB_0051dd8f;
              local_18 = local_18 + 1;
            }
          }
          else if (bVar1 == 0x42) {
LAB_0051dd8f:
            uVar2 = FUN_0055ac39(local_18,(int)(char)*local_18);
            if (uVar2 == 0) {
              FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__no_dimension_give_005be2d4);
            }
            else {
              iVar3 = FUN_0051e060(&local_18,local_18,(uint *)&local_18);
              if (iVar3 < local_14) {
                if (*local_18 == 0x3a) {
                  local_18 = local_18 + 1;
                  fVar6 = (float10)FUN_0051e030(&local_18,local_18,(uint *)&local_18);
                }
                else {
                  if (bVar1 == 0x62) {
                    *(undefined8 *)(DAT_0074c474 + iVar3 * 8) = 0xbfe0000000000000;
                    goto LAB_0051de3e;
                  }
                  fVar6 = (float10)0.5;
                }
                if (bVar1 == 0x62) {
                  *(double *)(DAT_0074c474 + iVar3 * 8) = (double)fVar6;
                }
                else {
                  *(double *)(DAT_0074c470 + iVar3 * 8) = (double)fVar6;
                }
              }
              else {
                FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_warning__dimension__d_for_Q_005be290);
              }
            }
          }
LAB_0051de3e:
          this = local_18;
          bVar1 = *local_18;
        }
      }
      else {
        while ((bVar1 != 0 &&
               (uVar2 = FUN_0055ac61((void *)(int)(char)bVar1,(int)(char)bVar1),
               this = extraout_ECX_01, uVar2 == 0))) {
          local_18 = local_18 + 1;
          bVar1 = *local_18;
          this = extraout_ECX_01;
        }
      }
    }
    uVar2 = FUN_0055ac61(this,(int)(char)*local_18);
    while (uVar2 != 0) {
      local_18 = local_18 + 1;
      uVar2 = FUN_0055ac61((void *)(int)(char)*local_18,(int)(char)*local_18);
    }
    bVar1 = *local_18;
  } while( true );
}


