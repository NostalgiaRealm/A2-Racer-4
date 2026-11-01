
/* ==== TWinControlWrapper.vmt_0ac @ 0046530c ==== 
 * signature: undefined TWinControlWrapper.vmt_0ac(void)
 * body: 0046530c-00465337
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TWinControlWrapper_vmt_0ac(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4(param_1);
    uVar3 = FUN_00403178(piVar2,extraout_EDX,extraout_ECX);
  }
  return uVar3;
}


