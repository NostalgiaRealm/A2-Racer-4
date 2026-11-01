
/* ==== TCustomPanel.vmt_084 @ 00450ac4 ==== 
 * signature: undefined TCustomPanel.vmt_084(void)
 * body: 00450ac4-00450b1b
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomPanel_vmt_084(int param_1,LPRECT param_2)

{
  int iVar1;
  
  TWinControl_vmt_084();
  InflateRect(param_2,-*(int *)(param_1 + 0x200),-*(int *)(param_1 + 0x200));
  iVar1 = 0;
  if (*(char *)(param_1 + 0x1fa) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1fc);
  }
  if (*(char *)(param_1 + 0x1f9) != '\0') {
    iVar1 = iVar1 + *(int *)(param_1 + 0x1fc);
  }
  InflateRect(param_2,-iVar1,-iVar1);
  return;
}


