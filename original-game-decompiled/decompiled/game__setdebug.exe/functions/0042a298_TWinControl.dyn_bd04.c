
/* ==== TWinControl.dyn_bd04 @ 0042a298 ==== 
 * signature: undefined TWinControl.dyn_bd04(void)
 * body: 0042a298-0042a2f1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_bd04(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_2 + 0xc) = 1;
  bVar1 = FUN_0042a08c(param_1,param_2,param_3);
  if (bVar1) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    iVar2 = FUN_00425780((int)param_1,0xb02e,(uint)*(ushort *)(param_2 + 4),param_1);
    if (iVar2 != 0) {
      return;
    }
    uVar4 = *(undefined4 *)(param_2 + 8);
    piVar3 = FUN_00439eb4(param_1);
    iVar2 = FUN_00425780((int)piVar3,0xb005,(uint)*(ushort *)(param_2 + 4),uVar4);
    if (iVar2 != 0) {
      return;
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}


