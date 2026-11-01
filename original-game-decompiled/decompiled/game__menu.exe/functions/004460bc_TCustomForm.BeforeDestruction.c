
/* ==== TCustomForm.BeforeDestruction @ 004460bc ==== 
 * signature: undefined TCustomForm.BeforeDestruction(void)
 * body: 004460bc-00446122
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TCustomForm_BeforeDestruction(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  
  FUN_0040c8f8(*(int *)PTR_DAT_004ab9ec);
  FUN_0041581c((int)param_1);
  FUN_00410448(*(int **)(DAT_004ac7d8 + 0x70),(int)param_1);
  FUN_0041316c((int)param_1,(char *)0x0);
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if (param_1[0x93] != 0) {
    (**(code **)(*(int *)param_1[0x93] + 0xc))();
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  if (*(char *)((int)param_1 + 0x217) != '\x01') {
    FUN_00449c70(param_1,uVar2,uVar1);
  }
  if ((char)param_1[0x87] == '\0') {
    (**(code **)(*param_1 + 0xc4))();
  }
  return;
}


