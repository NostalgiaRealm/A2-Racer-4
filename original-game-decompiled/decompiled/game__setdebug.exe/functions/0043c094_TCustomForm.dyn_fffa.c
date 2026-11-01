
/* ==== TCustomForm.dyn_fffa @ 0043c094 ==== 
 * signature: undefined __register TCustomForm.dyn_fffa(int param_1, int * param_2, int param_3)
 * body: 0043c094-0043c125
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_fffa(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar6;
  int local_14;
  
  uVar2 = FUN_00402e8c(param_2,(int)&PTR_TControl_vmt_000_00420b14);
  if ((char)uVar2 == '\0') {
    iVar3 = FUN_0042781c(param_1);
    local_14 = -1;
    iVar4 = FUN_00413fe8(param_1);
    if (-1 < iVar4 + -1) {
      iVar6 = 0;
      do {
        piVar5 = (int *)FUN_00413fbc(param_1,iVar6);
        cVar1 = FUN_00402ef0(piVar5,extraout_EDX,extraout_ECX);
        if ((cVar1 == '\0') && (local_14 = local_14 + 1, local_14 == param_3 - iVar3)) {
          FUN_00413ff8((int)param_2,iVar6);
          return;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    TWinControl_dyn_fffa(param_1,param_2,param_3);
  }
  return;
}


