
/* ==== FUN_00529720 @ 00529720 ==== 
 * signature: float10 __cdecl FUN_00529720(uint param_1, int param_2, int param_3)
 * body: 00529720-005298e5
 */

float10 __cdecl FUN_00529720(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  undefined8 local_28;
  double local_20;
  undefined8 local_18;
  
  dVar3 = 0.0;
  local_18 = 0.0;
  iVar5 = 0;
  local_28 = -1.79769313486232e+308;
  local_20 = 0.0;
  if (0 < param_3) {
    do {
      if ((DAT_0074bfd0 == 0) || (dVar2 = local_20, iVar5 != param_3 + -1)) {
        if ((DAT_0074be40 == 0) || (iVar5 != param_3 + -1)) {
          local_18 = 1.79769313486232e+308;
          dVar2 = -1.79769313486232e+308;
          uVar1 = param_1 + DAT_0074c03c * param_2 * 8;
          if (param_1 < uVar1) {
            uVar4 = param_1;
            do {
              if (dVar2 < *(double *)(uVar4 + iVar5 * 8)) {
                dVar2 = *(double *)(uVar4 + iVar5 * 8);
              }
              if (*(double *)(uVar4 + iVar5 * 8) < local_18) {
                local_18 = *(double *)(uVar4 + iVar5 * 8);
              }
              uVar4 = uVar4 + DAT_0074c03c * 8;
            } while (uVar4 < uVar1);
          }
          if (local_20 < dVar2 - local_18) {
            local_20 = dVar2 - local_18;
          }
          if (dVar2 < -local_18) {
            dVar2 = -local_18;
          }
        }
        else {
          dVar2 = local_28 * local_28 + local_28 * local_28;
        }
      }
      dVar3 = dVar2 + dVar3;
      if (local_28 < dVar2) {
        local_28 = dVar2;
      }
      iVar5 = iVar5 + 1;
      local_18 = dVar3;
    } while (iVar5 < param_3);
  }
  fVar6 = FUN_0052a020(DAT_0074c03c,(undefined4)local_28,local_28._4_4_,(undefined4)local_18,
                       local_18._4_4_);
  fVar6 = fVar6 * (float10)30000.0;
  if (fVar6 < (float10)6.661338147750939e-12) {
    fVar6 = (float10)6.661338147750939e-12;
  }
  local_18 = (double)fVar6;
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_detjoggle__joggle__2_2g_maxwi_005c2054);
    fVar6 = (float10)local_18;
  }
  return fVar6;
}


