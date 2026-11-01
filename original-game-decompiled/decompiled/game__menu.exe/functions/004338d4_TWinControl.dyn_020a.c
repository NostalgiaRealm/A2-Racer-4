
/* ==== TWinControl.dyn_020a @ 004338d4 ==== 
 * signature: undefined __register TWinControl.dyn_020a(int * param_1, int param_2)
 * body: 004338d4-00433929
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_020a(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar2 = DAT_004ac74c;
  if (*(char *)(DAT_004ac74c + 0x20) == '\0') {
    *(undefined1 *)(DAT_004ac74c + 0x20) = 1;
    iVar2 = FUN_00438be8(DAT_004ac74c,0x68);
  }
  bVar1 = FUN_00444718(CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(param_2 + 4)));
  *(byte *)(param_2 + 4) = bVar1;
  FUN_00403178(param_1,param_2,extraout_ECX);
  if (*(int *)(param_2 + 0xc) == 0) {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}


