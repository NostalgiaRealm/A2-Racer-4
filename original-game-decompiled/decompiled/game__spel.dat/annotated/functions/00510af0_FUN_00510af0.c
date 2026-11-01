
/* ==== FUN_00510af0 @ 00510af0 ==== 
 * signature: int __cdecl FUN_00510af0(int param_1, int param_2, double * param_3)
 * body: 00510af0-00510b3d
 */

int __cdecl FUN_00510af0(int param_1,int param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    pdVar1 = (double *)(param_1 + 0x10);
    do {
      if (pdVar1[-2] == *param_3) {
        if (pdVar1[-1] == param_3[1]) {
          if (*pdVar1 == param_3[2]) {
            return iVar2;
          }
        }
      }
      iVar2 = iVar2 + 1;
      pdVar1 = pdVar1 + 4;
    } while (iVar2 < param_2);
  }
  return 0;
}


