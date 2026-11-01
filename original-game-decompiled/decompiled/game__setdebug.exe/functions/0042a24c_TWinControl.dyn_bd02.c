
/* ==== TWinControl.dyn_bd02 @ 0042a24c ==== 
 * signature: undefined TWinControl.dyn_bd02(void)
 * body: 0042a24c-0042a297
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_bd02(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    *(undefined4 *)(param_2 + 0xc) = 1;
    uVar1 = FUN_00425780((int)param_1,0x87,0,0);
    if ((uVar1 & 0x80) == 0) {
      uVar4 = *(undefined4 *)(param_2 + 8);
      piVar2 = FUN_00439eb4(param_1);
      iVar3 = FUN_00425780((int)piVar2,0xb006,(uint)*(ushort *)(param_2 + 4),uVar4);
      if (iVar3 != 0) {
        return;
      }
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}


