
/* ==== TfrmIntro.FormKeyDown @ 004a4a78 ==== 
 * signature: undefined TfrmIntro.FormKeyDown(void)
 * body: 004a4a78-004a4ad4
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmIntro_FormKeyDown(int *param_1,undefined4 param_2,short *param_3)

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
  
  if (*param_3 != 0x20) {
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
      if ((cVar1 == '\x06') ||
         (cVar1 = FUN_004a3b58(param_1[0xb4]), iVar2 = extraout_ECX_02, uVar3 = extraout_EDX_02,
         cVar1 == '\x01')) {
        FUN_004a2bd0((int *)param_1[0xb4],uVar3,iVar2);
        iVar2 = extraout_ECX_03;
        uVar3 = extraout_EDX_03;
      }
    }
    FUN_00449ac0(param_1,uVar3,iVar2);
    return;
  }
  return;
}


