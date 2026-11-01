
/* ==== TWinControl.dyn_0046 @ 00432da8 ==== 
 * signature: undefined TWinControl.dyn_0046(void)
 * body: 00432da8-00432def
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_0046(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  if (((*(ushort *)(param_1 + 8) & 10) == 0) &&
     (iVar1 = *(int *)(param_2 + 8), (*(byte *)(iVar1 + 0x18) & 1) == 0)) {
    cVar2 = FUN_0042fbf4(param_1,(int *)(iVar1 + 0x10),(int *)(iVar1 + 0x14));
    if (cVar2 == '\0') {
      *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 1;
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}


