
/* ==== TWinControl.dyn_0083 @ 0042b588 ==== 
 * signature: undefined TWinControl.dyn_0083(void)
 * body: 0042b588-0042b614
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0083(int *param_1,int param_2)

{
  LPRECT lprc;
  int iVar1;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  lprc = *(LPRECT *)(param_2 + 8);
  InflateRect(lprc,-param_1[0x4b],-param_1[0x4b]);
  if (*(char *)((int)param_1 + 0x125) != '\0') {
    iVar1 = 0;
    if (*(char *)((int)param_1 + 0x123) != '\0') {
      iVar1 = param_1[0x4a];
    }
    if ((char)param_1[0x49] != '\0') {
      iVar1 = iVar1 + param_1[0x4a];
    }
    if ((*(byte *)((int)param_1 + 0x122) & 1) != 0) {
      lprc->left = lprc->left + iVar1;
    }
    if ((*(byte *)((int)param_1 + 0x122) & 2) != 0) {
      lprc->top = lprc->top + iVar1;
    }
    if ((*(byte *)((int)param_1 + 0x122) & 4) != 0) {
      lprc->right = lprc->right - iVar1;
    }
    if ((*(byte *)((int)param_1 + 0x122) & 8) != 0) {
      lprc->bottom = lprc->bottom - iVar1;
    }
  }
  return;
}


