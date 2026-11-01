
/* ==== FUN_00519f90 @ 00519f90 ==== 
 * signature: undefined __stdcall FUN_00519f90(void)
 * body: 00519f90-0051a043
 */

void FUN_00519f90(void)

{
  int iVar1;
  double *pdVar2;
  int *piVar3;
  undefined4 *puVar4;
  double local_8;
  
  piVar3 = DAT_0074c600;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_outcoplanar__move_outsideset_t_005bc5ec);
    piVar3 = DAT_0074c600;
  }
  for (; (piVar3 != (int *)0x0 && (piVar3[0xc] != 0)); piVar3 = (int *)piVar3[0xc]) {
    iVar1 = piVar3[0x10];
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)(iVar1 + 4);
      pdVar2 = *(double **)(iVar1 + 4);
      while (pdVar2 != (double *)0x0) {
        puVar4 = puVar4 + 1;
        DAT_0074c63c = DAT_0074c63c + -1;
        if ((DAT_0074be70 != 0) || (DAT_0074c038 != 0)) {
          FUN_005273a0(pdVar2,(int)piVar3,&local_8);
          DAT_0074cc48 = DAT_0074cc48 + 1;
          FUN_00526330(pdVar2,piVar3,(undefined4 *)&local_8);
        }
        pdVar2 = (double *)*puVar4;
      }
    }
    FUN_005145f0(piVar3 + 0x10);
  }
  return;
}


