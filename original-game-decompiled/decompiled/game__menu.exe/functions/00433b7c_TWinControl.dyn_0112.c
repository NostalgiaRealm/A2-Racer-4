
/* ==== TWinControl.dyn_0112 @ 00433b7c ==== 
 * signature: undefined TWinControl.dyn_0112(void)
 * body: 00433b7c-00433c22
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0112(int *param_1,int param_2)

{
  char cVar1;
  BOOL BVar2;
  HWND pHVar3;
  int *piVar4;
  int iVar5;
  
  if ((((((*(uint *)(param_2 + 4) & 0xfff0) == 0xf100) && (*(short *)(param_2 + 8) != 0x20)) &&
       (*(short *)(param_2 + 8) != 0x2d)) &&
      ((BVar2 = IsIconic((HWND)param_1[0x53]), BVar2 == 0 &&
       (pHVar3 = GetCapture(), pHVar3 == (HWND)0x0)))) &&
     ((param_1 != *(int **)(*(int *)PTR_DAT_004ab8ac + 0x38) &&
      ((piVar4 = FUN_00444864(param_1), piVar4 != (int *)0x0 &&
       (iVar5 = FUN_0042f720((int)piVar4,0xb017,0,param_2), iVar5 != 0)))))) {
    return;
  }
  if (((*(uint *)(param_2 + 4) & 0xfff0) == 0xf100) &&
     (cVar1 = FUN_00433acc(param_1), cVar1 != '\0')) {
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


