
/* ==== FUN_0052ab60 @ 0052ab60 ==== 
 * signature: undefined4 __cdecl FUN_0052ab60(int param_1, double * param_2)
 * body: 0052ab60-0052ac29
 */

undefined4 __cdecl FUN_0052ab60(int param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (param_2 != (double *)0x0) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
  }
  iVar2 = 0;
  if (0 < DAT_0074c03c) {
    do {
      dVar1 = *(double *)(DAT_0074c46c + iVar2 * 8);
      if (-8.988465674311579e+307 < dVar1) {
        if (*(double *)(param_1 + iVar2 * 8) < dVar1) {
          uVar3 = 0;
        }
        if (param_2 != (double *)0x0) {
          dVar1 = dVar1 - *(double *)(param_1 + iVar2 * 8);
          if (dVar1 < 0.0) {
            dVar1 = -dVar1;
          }
          *param_2 = dVar1 + *param_2;
        }
      }
      if (*(double *)(DAT_0074c468 + iVar2 * 8) < 8.988465674311579e+307) {
        dVar1 = *(double *)(DAT_0074c468 + iVar2 * 8);
        if (dVar1 < *(double *)(param_1 + iVar2 * 8)) {
          uVar3 = 0;
        }
        if (param_2 != (double *)0x0) {
          dVar1 = dVar1 - *(double *)(param_1 + iVar2 * 8);
          if (dVar1 < 0.0) {
            dVar1 = -dVar1;
          }
          *param_2 = dVar1 + *param_2;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0074c03c);
    return uVar3;
  }
  return 1;
}


