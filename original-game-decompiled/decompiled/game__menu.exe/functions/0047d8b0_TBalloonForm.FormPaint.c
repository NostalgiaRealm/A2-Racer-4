
/* ==== TBalloonForm.FormPaint @ 0047d8b0 ==== 
 * signature: undefined __register TBalloonForm.FormPaint(int * param_1)
 * body: 0047d8b0-0047d9ad
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TBalloonForm_FormPaint(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  RECT local_14;
  
  if (*(char *)((int)param_1 + 0x2d9) == '\0') {
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_00419154(piVar2,0,0);
    iVar1 = TForm_get_ClientWidth(param_1);
    uVar3 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_004190f4(piVar2,uVar3,0);
    iVar1 = TForm_get_ClientHeight(param_1);
    uVar3 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    iVar1 = TForm_get_ClientWidth(param_1);
    uVar4 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar4 = thunk_FUN_00402808(uVar4);
    }
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_004190f4(piVar2,uVar4,uVar3);
    iVar1 = TForm_get_ClientHeight(param_1);
    uVar3 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_004190f4(piVar2,0,uVar3);
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_004190f4(piVar2,0,0);
  }
  else {
    iVar1 = FUN_00447524((int)param_1);
    TBrush_set_Color(*(int **)(iVar1 + 0x14),param_1[0x18]);
    iVar1 = FUN_00447524((int)param_1);
    TBrush_set_Style(*(int **)(iVar1 + 0x14),'\0');
    (**(code **)(*param_1 + 0x40))(param_1,&local_14);
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_0041907c(piVar2,&local_14);
    piVar2 = (int *)FUN_00447524((int)param_1);
    FUN_00477d64(param_1,piVar2);
  }
  return;
}


