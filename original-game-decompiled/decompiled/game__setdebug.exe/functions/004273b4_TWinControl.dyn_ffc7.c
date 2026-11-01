
/* ==== TWinControl.dyn_ffc7 @ 004273b4 ==== 
 * signature: undefined __register TWinControl.dyn_ffc7(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004273b4-00427478
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffc7(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  
  pcStack_20 = (code *)0x4273cc;
  piVar1 = (int *)FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcStack_20 = (code *)&stack0xfffffffc;
  iVar2 = TForm_get_ClientWidth(param_1);
  iVar3 = FUN_0042781c((int)param_1);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      piVar4 = (int *)FUN_004277e0((int)param_1,iVar6);
      if (piVar4[1] == param_1[1]) {
        iVar5 = FUN_004277e0((int)param_1,iVar6);
        FUN_0040eec8(piVar1,iVar5);
        TControl_set_Left(piVar4,(iVar2 - piVar4[0xe]) - piVar4[0xc]);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar2 = piVar1[2];
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      uVar7 = 0;
      iVar6 = FUN_0040f024(piVar1,iVar3);
      FUN_00425780(iVar6,0xb03e,0,uVar7);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_00427480;
  pcStack_24 = (code *)0x427478;
  FUN_00402d14(piVar1);
  return;
}


