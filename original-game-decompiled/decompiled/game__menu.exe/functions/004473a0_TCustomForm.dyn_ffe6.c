
/* ==== TCustomForm.dyn_ffe6 @ 004473a0 ==== 
 * signature: undefined __register TCustomForm.dyn_ffe6(int * param_1, int param_2, int * param_3)
 * body: 004473a0-004473f3
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_ffe6(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  
  if (param_2 != param_1[0x24]) {
    if (param_2 != 0) {
      cVar1 = (**(code **)(*param_1 + 0x50))();
      if (cVar1 == '\0') goto LAB_004473e5;
    }
    if (param_2 == 0) {
      *(char *)((int)param_1 + 0x211) = (char)param_1[0x9a];
    }
    else {
      *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)((int)param_1 + 0x211);
      *(undefined1 *)((int)param_1 + 0x211) = 0;
    }
  }
LAB_004473e5:
  TControl_dyn_ffe6(param_1,param_2,param_3);
  return;
}


