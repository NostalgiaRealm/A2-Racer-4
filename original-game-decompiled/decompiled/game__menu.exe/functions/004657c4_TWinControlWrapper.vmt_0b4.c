
/* ==== TWinControlWrapper.vmt_0b4 @ 004657c4 ==== 
 * signature: undefined __register TWinControlWrapper.vmt_0b4(int param_1)
 * body: 004657c4-004657e6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_0b4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4(param_1);
    (**(code **)(*piVar2 + 0xb0))();
  }
  return;
}


