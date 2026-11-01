
/* ==== TWinControl.dyn_bd06 @ 0042a2f4 ==== 
 * signature: undefined TWinControl.dyn_bd06(void)
 * body: 0042a2f4-0042a325
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_bd06(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && (*(short *)(param_2 + 4) != 0x20)) {
    uVar2 = *(undefined4 *)(param_2 + 8);
    piVar1 = FUN_00439eb4(param_1);
    uVar2 = FUN_00425780((int)piVar1,0xb006,(uint)*(ushort *)(param_2 + 4),uVar2);
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  return;
}


