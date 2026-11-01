
/* ==== TWinControl.dyn_030f @ 00429c7c ==== 
 * signature: undefined TWinControl.dyn_030f(void)
 * body: 00429c7c-00429c9e
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_030f(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 4;
  uVar1 = FUN_00402ef0(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  *(uint *)(param_2 + 0xc) = uVar1 & 0x7f;
  return;
}


