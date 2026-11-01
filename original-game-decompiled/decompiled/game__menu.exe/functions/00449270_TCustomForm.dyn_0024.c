
/* ==== TCustomForm.dyn_0024 @ 00449270 ==== 
 * signature: undefined TCustomForm.dyn_0024(void)
 * body: 00449270-004492e0
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0024(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((*(byte *)(param_1 + 8) & 2) == 0) && (*(char *)((int)param_1 + 0x212) != '\0')) {
    iVar1 = *(int *)(param_2 + 8);
    iVar2 = param_1[0x19];
    if (*(int *)(iVar2 + 0x14) != 0) {
      *(int *)(iVar1 + 0x18) = *(int *)(iVar2 + 0x14);
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar2 + 0x10);
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar2 + 0xc);
    }
    if (*(int *)(iVar2 + 8) != 0) {
      *(int *)(iVar1 + 0x24) = *(int *)(iVar2 + 8);
    }
    (**(code **)(*param_1 + 0x38))(param_1,iVar1 + 0x18,iVar1 + 0x1c,iVar1 + 0x24,iVar1 + 0x20);
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


