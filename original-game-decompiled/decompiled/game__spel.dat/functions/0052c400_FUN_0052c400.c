
/* ==== FUN_0052c400 @ 0052c400 ==== 
 * signature: undefined __cdecl FUN_0052c400(int param_1, int param_2, double * param_3)
 * body: 0052c400-0052c4af
 */

void __cdecl FUN_0052c400(int param_1,int param_2,double *param_3)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_0074be68 != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_setdelaunay__project__d_point_005c2c0c);
  }
  if (0 < param_2) {
    pdVar2 = param_3;
    iVar4 = param_2;
    do {
      dVar1 = *pdVar2 * *pdVar2;
      for (iVar3 = param_1 + -2; pdVar2 = pdVar2 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
        dVar1 = *pdVar2 * *pdVar2 + dVar1;
      }
      *pdVar2 = dVar1;
      pdVar2 = pdVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((double)CONCAT44(DAT_0074c71c,DAT_0074c718) < 8.988465674311579e+307) {
    FUN_0052bfa0((int)param_3,param_2,param_1,DAT_0074c718,DAT_0074c71c,DAT_0074c720,DAT_0074c724,
                 DAT_0074c728,DAT_0074c72c);
  }
  return;
}


