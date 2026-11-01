
/* ==== FUN_00532dc0 @ 00532dc0 ==== 
 * signature: undefined __cdecl FUN_00532dc0(int * param_1, undefined4 * param_2, int param_3, int param_4, double param_5)
 * body: 00532dc0-00532eb2
 */

void __cdecl FUN_00532dc0(int *param_1,undefined4 *param_2,int param_3,int param_4,double param_5)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  int local_50;
  double local_48 [4];
  double local_28 [4];
  
  if (DAT_0074c03c != 0) {
    pdVar2 = local_48 + DAT_0074c03c + -1;
    local_50 = DAT_0074c03c;
    do {
      if (param_4 == 0) {
        if (param_3 == 0) {
          *(undefined4 *)pdVar2 = 0;
          *(undefined4 *)((int)pdVar2 + 4) = 0;
        }
        else {
          iVar3 = (param_3 - param_4) + (param_4 - (int)local_48);
          *(undefined4 *)pdVar2 = *(undefined4 *)(iVar3 + (int)pdVar2);
          *(undefined4 *)((int)pdVar2 + 4) = *(undefined4 *)(iVar3 + 4 + (int)pdVar2);
        }
      }
      else {
        pdVar1 = (double *)((param_4 - (int)local_48) + (int)pdVar2);
        *pdVar2 = *(double *)((int)pdVar1 + ((int)param_2 - param_4)) - *pdVar1;
      }
      pdVar2 = pdVar2 + -1;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  if (param_4 != 0) {
    FUN_005285e0(local_48,DAT_0074c03c,1,(double *)0x0,(undefined4 *)0x0);
  }
  if (DAT_0074c03c != 0) {
    pdVar2 = (double *)(param_2 + (DAT_0074c03c + -1) * 2);
    iVar3 = DAT_0074c03c;
    do {
      iVar3 = iVar3 + -1;
      *(double *)((int)local_28 + (8 - (int)param_2) + (int)(pdVar2 + -1)) =
           param_5 * *(double *)(((int)local_48 - (int)param_2) + (int)pdVar2) + *pdVar2;
      pdVar2 = pdVar2 + -1;
    } while (iVar3 != 0);
  }
  FUN_005327b0(param_1,param_2,(undefined4 *)local_28);
  return;
}


