
/* ==== TfrmIntro.MenuIntroNotify @ 004a49f4 ==== 
 * signature: undefined TfrmIntro.MenuIntroNotify(void)
 * body: 004a49f4-004a4a68
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmIntro_MenuIntroNotify(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  
  cVar1 = FUN_004a3b58(param_1[0xb4]);
  if (cVar1 == '\x02') {
    iVar2 = FUN_004a3b9c(param_1[0xb4]);
    iVar3 = FUN_004a3ac8(param_1[0xb4]);
    uVar4 = iVar3 - 1;
    iVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (SBORROW4(iVar3,1)) {
      uVar4 = thunk_FUN_00402808(uVar4);
      iVar5 = extraout_ECX_00;
      uVar6 = extraout_EDX_00;
    }
    if ((int)uVar4 <= iVar2) {
      FUN_004a2e80((int *)param_1[0xb4],uVar6,iVar5);
      FUN_004a3640(param_1[0xb4]);
      FUN_00449ac0(param_1,extraout_EDX_01,extraout_ECX_01);
    }
  }
  else {
    cVar1 = FUN_004a3b58(param_1[0xb4]);
    if (cVar1 == '\x01') {
      FUN_00449ac0(param_1,extraout_EDX_02,extraout_ECX_02);
    }
  }
  return;
}


