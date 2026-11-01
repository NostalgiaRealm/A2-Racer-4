
/* ==== TCustomComboBox.dyn_0201 @ 004286c0 ==== 
 * signature: undefined TCustomComboBox.dyn_0201(void)
 * body: 004286c0-00428734
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomComboBox_dyn_0201(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(char *)((int)param_1 + 0x4d) == '\x01') && (*(char *)((int)param_1 + 0x1fa) == '\x02')) {
    iVar2 = GetSystemMetrics(0x15);
    if ((int)*(short *)(param_2 + 8) < param_1[0xe] - iVar2) {
      (**(code **)(*param_1 + 0xb0))();
      FUN_0042edc0(param_1,'\0',-1);
      return;
    }
  }
  TControl_dyn_0201(param_1,param_2);
  bVar1 = FUN_0042e940(param_1);
  if (bVar1) {
    piVar3 = FUN_00444864(param_1);
    if ((piVar3 != (int *)0x0) && (param_1 != (int *)piVar3[0x82])) {
      FUN_0042e950(param_1,'\0');
    }
  }
  return;
}


