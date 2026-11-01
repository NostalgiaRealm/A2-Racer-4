
/* ==== FUN_0052a170 @ 0052a170 ==== 
 * signature: float10 __cdecl FUN_0052a170(int param_1)
 * body: 0052a170-0052a2a7
 */

float10 __cdecl FUN_0052a170(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  float10 fVar4;
  double *local_14;
  double local_10;
  
  local_10 = 0.0;
  if ((*(uint *)(param_1 + 0x50) & 0x1000) == 0) {
    if (DAT_0074c65c == 2) {
      local_14 = *(double **)(param_1 + 0x28);
    }
    else {
      local_14 = (double *)FUN_00528400(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      puVar3 = (undefined4 *)(iVar1 + 8);
      if (piVar2 != (int *)0x0) {
        do {
          fVar4 = FUN_0052a2b0(DAT_0074c03c,local_14,*piVar2,0,(uint)(piVar2[1] == param_1),
                               *(undefined4 **)(param_1 + 0x18),(double *)(param_1 + 0x10));
          piVar2 = (int *)*puVar3;
          puVar3 = puVar3 + 1;
          local_10 = (double)(fVar4 + (float10)local_10);
        } while (piVar2 != (int *)0x0);
      }
    }
    if (DAT_0074c65c != 2) {
      FUN_0051e2b0((undefined4 *)local_14,DAT_0074c5f4);
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 4);
    fVar4 = FUN_0052a2b0(DAT_0074c03c,*(double **)(iVar1 + 8),*(int *)(param_1 + 0x34),iVar1,
                         *(uint *)(param_1 + 0x50) >> 0xb & 1,*(undefined4 **)(param_1 + 0x18),
                         (double *)(param_1 + 0x10));
    local_10 = (double)fVar4;
  }
  if (((*(uint *)(param_1 + 0x50) & 0x10000) != 0) && (DAT_0074be40 != 0)) {
    local_10 = -local_10;
  }
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_facetarea__f_d_area__2_2g_005c230c);
  }
  return (float10)local_10;
}


