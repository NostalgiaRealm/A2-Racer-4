
/* ==== TCustomForm.dyn_0112 @ 00448f68 ==== 
 * signature: undefined TCustomForm.dyn_0112(void)
 * body: 00448f68-00448ff1
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0112(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar2;
  
  if (((*(uint *)(param_2 + 4) & 0xfff0) == 0xf020) && (param_1 == *(int **)(DAT_004ac7d4 + 0x38)))
  {
    FUN_0044c5dc(DAT_004ac7d4,param_2);
    param_3 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  else if (((*(uint *)(param_2 + 4) & 0xfff0) != 0xf010) ||
          ((((*(byte *)(param_1 + 8) & 0x10) != 0 || (*(char *)((int)param_1 + 0x4b) == '\0')) ||
           (iVar2 = param_2, *(char *)((int)param_1 + 0x213) == '\x01')))) {
    TWinControl_dyn_0112(param_1,param_2);
    param_3 = extraout_ECX_00;
    iVar2 = extraout_EDX_00;
  }
  uVar1 = *(uint *)(param_2 + 4) & 0xfff0;
  if (((uVar1 == 0xf020) || (uVar1 == 0xf120)) &&
     (((*(byte *)(param_1 + 8) & 0x10) == 0 && (*(char *)((int)param_1 + 0x4b) != '\0')))) {
    FUN_00403178(param_1,iVar2,param_3);
  }
  return;
}


