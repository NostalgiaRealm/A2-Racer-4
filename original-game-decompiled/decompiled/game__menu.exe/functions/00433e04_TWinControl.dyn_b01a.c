
/* ==== TWinControl.dyn_b01a @ 00433e04 ==== 
 * signature: undefined __register TWinControl.dyn_b01a(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00433e04-00433e73
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_b01a(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  UINT UVar3;
  
  if (PTR_DAT_004aba14[9] != '\0') {
    uVar1 = FUN_0042ed5c((int)param_1);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
    if ((char)uVar1 == '\0') {
      if (*(int *)(*(int *)PTR_DAT_004ab8ac + 0x30) != 0) {
        UVar3 = 1;
        pCVar2 = FUN_004040a0(*(undefined **)(*(int *)PTR_DAT_004ab8ac + 0x30));
        LoadKeyboardLayoutA(pCVar2,UVar3);
        param_3 = extraout_ECX_01;
        param_2 = extraout_EDX_01;
      }
    }
    else if (*(int *)(*(int *)PTR_DAT_004ab8ac + 0x2c) != 0) {
      UVar3 = 1;
      pCVar2 = FUN_004040a0(*(undefined **)(*(int *)PTR_DAT_004ab8ac + 0x2c));
      LoadKeyboardLayoutA(pCVar2,UVar3);
      param_3 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
  }
  FUN_00403178(param_1,param_2,param_3);
  return;
}


