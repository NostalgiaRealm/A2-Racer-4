
/* ==== FUN_0052a8f0 @ 0052a8f0 ==== 
 * signature: undefined __cdecl FUN_0052a8f0(int param_1)
 * body: 0052a8f0-0052aa67
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0052a8f0(int param_1)

{
  uint uVar1;
  float10 fVar2;
  char *pcVar3;
  double local_10;
  
  if (DAT_0074bfbc == 0) {
    if (DAT_0074be68 < 1) goto LAB_0052a92d;
    pcVar3 = s_qh_getarea__computing_volume_and_005c2428;
  }
  else {
    pcVar3 = s_computing_area_of_each_facet_and_005c2460;
  }
  FUN_00558953(DAT_0074c5ec,(byte *)pcVar3);
LAB_0052a92d:
  _DAT_0074c6c8 = 0.0;
  _DAT_0074c6c0 = 0.0;
  for (; (param_1 != 0 && (*(int *)(param_1 + 0x30) != 0)); param_1 = *(int *)(param_1 + 0x30)) {
    if ((*(int *)(param_1 + 0x18) != 0) &&
       (((*(uint *)(param_1 + 0x50) & 0x10000) == 0 || (DAT_0074be18 == 0)))) {
      fVar2 = FUN_0052a170(param_1);
      uVar1 = *(uint *)(param_1 + 0x50);
      *(double *)(param_1 + 0x20) = (double)fVar2;
      *(uint *)(param_1 + 0x50) = uVar1 | 0x80000;
      if (DAT_0074be40 == 0) {
        _DAT_0074c6c0 = (double)((float10)_DAT_0074c6c0 + fVar2);
        FUN_005273a0(DAT_0074c5f0,param_1,&local_10);
        fVar2 = (float10)(double)fVar2;
        _DAT_0074c6c8 =
             (double)((float10)_DAT_0074c6c8 - ((float10)local_10 * fVar2) / (float10)DAT_0074c03c);
      }
      else if ((uVar1 & 0x10000) >> 0x10 == DAT_0074c00c) {
        _DAT_0074c6c0 = (double)((float10)_DAT_0074c6c0 + fVar2);
      }
      if (DAT_0074bf80 != 0) {
        _DAT_0074c810 = (double)((float10)_DAT_0074c810 + fVar2);
        if ((float10)_DAT_0074c818 < fVar2) {
          _DAT_0074c818 = (double)fVar2;
        }
        if (fVar2 < (float10)_DAT_0074c820) {
          _DAT_0074c820 = (double)fVar2;
        }
      }
    }
  }
  return;
}


