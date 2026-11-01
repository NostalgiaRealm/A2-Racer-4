
/* ==== TWinControl.dyn_bd01 @ 0042a1f8 ==== 
 * signature: undefined TWinControl.dyn_bd01(void)
 * body: 0042a1f8-0042a248
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_bd01(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
    uVar1 = (uint)*(ushort *)(param_2 + 4);
    if (uVar1 < 0x1c) {
      if ((((uVar1 != 0x1b) && (uVar1 != 3)) && (uVar1 != 9)) && (uVar1 != 0xd)) {
        return;
      }
    }
    else if ((3 < uVar1 - 0x25) && (uVar1 - 0x25 != 6)) {
      return;
    }
    uVar2 = FUN_00425780(param_1,0xb01e,(uint)*(ushort *)(param_2 + 4),0);
    *(undefined4 *)(param_2 + 0xc) = uVar2;
  }
  return;
}


