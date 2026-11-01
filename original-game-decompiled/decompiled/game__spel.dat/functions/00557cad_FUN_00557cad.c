
/* ==== FUN_00557cad @ 00557cad ==== 
 * signature: float10 __thiscall FUN_00557cad(undefined * param_1, byte * param_2, int * param_3, int param_4)
 * body: 00557cad-00557ce8
 */

float10 __thiscall FUN_00557cad(undefined *param_1,byte *param_2,int *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  
  fVar3 = FUN_0055adb3(param_1,param_2,param_3);
  bVar2 = param_4 < 0;
  iVar1 = param_4;
  if (0 < param_4) {
    iVar1 = 0;
    do {
      fVar3 = fVar3 * (float10)10.0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    bVar2 = false;
  }
  if (bVar2) {
    iVar1 = -iVar1;
    do {
      fVar3 = fVar3 * (float10)0.1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return fVar3;
}


