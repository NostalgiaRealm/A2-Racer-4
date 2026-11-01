
/* ==== TGDIForm.dyn_ffb0 @ 0046b97c ==== 
 * signature: undefined TGDIForm.dyn_ffb0(void)
 * body: 0046b97c-0046ba3b
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TGDIForm_dyn_ffb0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  HDC pHVar4;
  int iVar5;
  int iVar6;
  int aiStack_38 [2];
  int aiStack_30 [2];
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined1 auStack_18 [16];
  uint uStack_8;
  
  (**(code **)(*param_1 + 0x40))(param_1,auStack_18);
  piVar1 = *(int **)(*(int *)PTR_DAT_004ab8ac + 0x38);
  if ((piVar1 != (int *)0x0) && (param_1 != piVar1)) {
    uStack_8 = (uint)(*(char *)((int)piVar1 + 0x211) != '\0');
    uVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,auStack_20);
    iVar5 = iStack_1c - uStack_8;
    if (SBORROW4(iStack_1c,uStack_8)) {
      thunk_FUN_00402808(uVar2);
    }
    uVar2 = (**(code **)(*param_1 + 0x3c))(param_1,auStack_28);
    iVar6 = iVar5 - iStack_24;
    if (SBORROW4(iVar5,iStack_24)) {
      thunk_FUN_00402808(uVar2);
    }
    uVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,aiStack_30);
    iVar5 = aiStack_30[0] - uStack_8;
    if (SBORROW4(aiStack_30[0],uStack_8)) {
      thunk_FUN_00402808(uVar2);
    }
    uVar2 = (**(code **)(*param_1 + 0x3c))(param_1,aiStack_38);
    if (SBORROW4(iVar5,aiStack_38[0])) {
      thunk_FUN_00402808(uVar2);
    }
    piVar3 = (int *)FUN_00447524((int)param_1);
    pHVar4 = (HDC)FUN_004194d8(piVar3);
    FUN_00432884(piVar1,pHVar4,iVar5 - aiStack_38[0],iVar6);
  }
  TCustomForm_dyn_ffb0((int)param_1);
  return;
}


