
/* ==== TWinControl.vmt_0a4 @ 0042a8c8 ==== 
 * signature: undefined TWinControl.vmt_0a4(void)
 * body: 0042a8c8-0042a95a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_0a4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0040e5ac(0x7fffffff,0x7fffffff,0,param_2,0);
  iVar1 = FUN_0042781c(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_004277e0(param_1,iVar3);
      if ((*(char *)(iVar2 + 0x47) != '\0') ||
         (((*(byte *)(iVar2 + 0x20) & 0x10) != 0 && ((*(byte *)(iVar2 + 0x41) & 4) == 0)))) {
        if (*(int *)(iVar2 + 0x30) < *param_2) {
          *param_2 = *(int *)(iVar2 + 0x30);
        }
        if (*(int *)(iVar2 + 0x34) < param_2[1]) {
          param_2[1] = *(int *)(iVar2 + 0x34);
        }
        if (param_2[2] < *(int *)(iVar2 + 0x30) + *(int *)(iVar2 + 0x38)) {
          param_2[2] = *(int *)(iVar2 + 0x30) + *(int *)(iVar2 + 0x38);
        }
        if (param_2[3] < *(int *)(iVar2 + 0x34) + *(int *)(iVar2 + 0x3c)) {
          param_2[3] = *(int *)(iVar2 + 0x34) + *(int *)(iVar2 + 0x3c);
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


