
/* ==== TfrmIntro.FormMouseDown @ 004a4ad8 ==== 
 * signature: undefined TfrmIntro.FormMouseDown(void)
 * body: 004a4ad8-004a4b2e
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmIntro_FormMouseDown(int *param_1)

{
  char cVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 uVar3;
  
  cVar1 = FUN_004a3b58(param_1[0xb4]);
  if (cVar1 == '\x02') {
    FUN_004a2e80((int *)param_1[0xb4],extraout_EDX,extraout_ECX);
    iVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  else {
    cVar1 = FUN_004a3b58(param_1[0xb4]);
    iVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_01;
    if (cVar1 != '\x06') {
      cVar1 = FUN_004a3b58(param_1[0xb4]);
      iVar2 = extraout_ECX_02;
      uVar3 = extraout_EDX_02;
      if (cVar1 != '\x01') goto LAB_004a4b23;
    }
    FUN_004a2bd0((int *)param_1[0xb4],uVar3,iVar2);
    iVar2 = extraout_ECX_03;
    uVar3 = extraout_EDX_03;
  }
LAB_004a4b23:
  FUN_00449ac0(param_1,uVar3,iVar2);
  return;
}


