
/* ==== TControl.dyn_0202 @ 00425e70 ==== 
 * signature: undefined TControl.dyn_0202(void)
 * body: 00425e70-00425ee4
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_0202(int *param_1,int param_2)

{
  POINT pt;
  BOOL BVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  LONG LStack_24;
  LONG LStack_20;
  RECT RStack_1c;
  
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    FUN_00424a00(param_1,'\0');
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffd;
    FUN_004069d4(*(undefined4 *)(param_2 + 8),&LStack_24);
    (**(code **)(*param_1 + 0x40))(param_1,&RStack_1c);
    pt.y = LStack_20;
    pt.x = LStack_24;
    BVar1 = PtInRect(&RStack_1c,pt);
    if (BVar1 != 0) {
      FUN_00402ef0(param_1,extraout_EDX,extraout_ECX);
    }
  }
  FUN_00425e34(param_1,param_2,0);
  return;
}


