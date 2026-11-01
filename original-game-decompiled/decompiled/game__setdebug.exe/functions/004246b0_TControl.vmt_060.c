
/* ==== TControl.vmt_060 @ 004246b0 ==== 
 * signature: undefined __register TControl.vmt_060(int * param_1, int * param_2, undefined4 param_3)
 * body: 004246b0-004246fa
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
      piVar1 = FUN_0040a9f4((int *)&DAT_0040d94c,'\x01',(undefined4 *)PTR_PTR_00446cac);
      FUN_0040346c(piVar1);
      param_3 = extraout_ECX;
    }
    if ((int *)param_1[9] != (int *)0x0) {
      FUN_00427764((int *)param_1[9],param_1);
      param_3 = extraout_ECX_00;
    }
    if (param_2 != (int *)0x0) {
      FUN_00427690(param_2,param_1,param_3);
      FUN_00423f38((int)param_1);
    }
  }
  return;
}


