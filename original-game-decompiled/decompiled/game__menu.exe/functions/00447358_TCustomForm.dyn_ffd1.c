
/* ==== TCustomForm.dyn_ffd1 @ 00447358 ==== 
 * signature: undefined __register TCustomForm.dyn_ffd1(int * param_1, int * param_2, undefined4 * param_3)
 * body: 00447358-0044739e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_ffd1(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_1c [4];
  
  puVar3 = local_1c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = param_1[9];
  iVar1 = param_1[0x24];
  TControl_dyn_ffd1(param_1,param_2,local_1c);
  if (((param_1[9] != 0) && (iVar2 == param_1[9])) && (iVar1 != param_1[0x24])) {
    FUN_00431e04((int)param_1);
  }
  return;
}


