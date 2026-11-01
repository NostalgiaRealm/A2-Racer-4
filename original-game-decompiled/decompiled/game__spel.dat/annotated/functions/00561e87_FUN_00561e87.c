
/* ==== FUN_00561e87 @ 00561e87 ==== 
 * signature: undefined4 __cdecl FUN_00561e87(int param_1, int param_2, double param_3, double * param_4)
 * body: 00561e87-00561fb6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00561e87(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_005c8788;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_00561f12:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_00561fad;
        if (param_3 < 0.0) goto LAB_00561f44;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_00561fb7(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_005c8788;
          if (iVar3 == 1) {
            dVar2 = -_DAT_005c8788;
          }
          goto LAB_00561fad;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_005c87a8;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_00561fad;
        }
      }
      dVar2 = 1.0;
      goto LAB_00561fad;
    }
    if (1.0 < dVar1) goto LAB_00561fad;
    if (1.0 <= dVar1) {
LAB_00561ed7:
      *param_4 = _DAT_005c8790;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_00561f12;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_00561ed7;
      goto LAB_00561fad;
    }
  }
LAB_00561f44:
  dVar2 = 0.0;
LAB_00561fad:
  *param_4 = dVar2;
  return 0;
}


