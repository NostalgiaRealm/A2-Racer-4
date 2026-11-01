
/* ==== TControl.vmt_060 @ 0042e600 ==== 
 * signature: undefined __register TControl.vmt_060(int * param_1, int * param_2, undefined4 param_3)
 * body: 0042e600-0042e64a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_060(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 != (int *)param_1[9]) {
    if (param_1 == param_2) {
      piVar1 = FUN_0040b694((int *)&DAT_0040ea0c,'\x01',(undefined4 *)PTR_PTR_004ab8f4);
      FUN_004036f4(piVar1);
      param_3 = extraout_ECX;
    }
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_00431704((int *)param_1[9],param_1);
      param_3 = extraout_ECX_00;
    }
    if (param_2 != (int *)0x0) {
      FUN_00431630(param_2,param_1,param_3);
      FUN_0042de78((int)param_1);
    }
  }
  return;
}


