
/* ==== FUN_005273a0 @ 005273a0 ==== 
 * signature: undefined __cdecl FUN_005273a0(double * param_1, int param_2, double * param_3)
 * body: 005273a0-00527546
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_005273a0(double *param_1,int param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  
  pdVar3 = *(double **)(param_2 + 0x18);
  switch(DAT_0074c03c) {
  case 2:
    *param_3 = *pdVar3 * *param_1 + pdVar3[1] * param_1[1] + *(double *)(param_2 + 0x10);
    goto LAB_0052749e;
  case 3:
    dVar1 = pdVar3[2] * param_1[2];
    goto LAB_0052744f;
  case 4:
    dVar1 = pdVar3[3] * param_1[3];
    goto LAB_00527447;
  case 5:
    dVar1 = pdVar3[4] * param_1[4];
    goto LAB_0052743f;
  case 6:
    dVar1 = pdVar3[5] * param_1[5];
    goto LAB_00527437;
  case 7:
    dVar1 = pdVar3[6] * param_1[6];
    break;
  case 8:
    dVar1 = pdVar3[6] * param_1[6] + pdVar3[7] * param_1[7];
    break;
  default:
    *(undefined4 *)param_3 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(param_2 + 0x14);
    pdVar4 = param_1;
    for (iVar5 = DAT_0074c03c; iVar5 != 0; iVar5 = iVar5 + -1) {
      dVar1 = *pdVar4;
      dVar2 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      pdVar4 = pdVar4 + 1;
      *param_3 = dVar1 * dVar2 + *param_3;
    }
    goto LAB_0052749e;
  }
  dVar1 = pdVar3[5] * param_1[5] + dVar1;
LAB_00527437:
  dVar1 = pdVar3[4] * param_1[4] + dVar1;
LAB_0052743f:
  dVar1 = pdVar3[3] * param_1[3] + dVar1;
LAB_00527447:
  dVar1 = pdVar3[2] * param_1[2] + dVar1;
LAB_0052744f:
  *param_3 = *pdVar3 * *param_1 + pdVar3[1] * param_1[1] + dVar1 + *(double *)(param_2 + 0x10);
LAB_0052749e:
  DAT_0074c970 = DAT_0074c970 + 1;
  if (DAT_0074bf98 != 0) {
    iVar5 = FUN_0052bd10();
    *param_3 = ((double)iVar5 * 9.313225754828403e-10 - 1.0) * _DAT_0074c498 * _DAT_0074bfa0 +
               *param_3;
  }
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_distplane__005c1960);
    FUN_00558953(DAT_0074c5ec,(byte *)s__6_16g_005c1958);
    FUN_005164c0((uint)param_1);
    FUN_00558953(DAT_0074c5ec,(byte *)s_from_p_d_to_f_d_005c1944);
  }
  return;
}


