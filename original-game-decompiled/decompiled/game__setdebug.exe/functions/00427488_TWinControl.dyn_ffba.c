
/* ==== TWinControl.dyn_ffba @ 00427488 ==== 
 * signature: undefined __register TWinControl.dyn_ffba(int * param_1)
 * body: 00427488-0042756e;004275c0-004275c6
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TWinControl_dyn_ffba(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  undefined4 extraout_EDX_02;
  undefined3 uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x42749f;
  iVar1 = FUN_0042781c((int)param_1);
  if (iVar1 != 0) {
    puStack_20 = (undefined1 *)0x4274b3;
    piVar2 = (int *)FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX);
    puStack_20 = (undefined1 *)0x4274be;
    FUN_00427384((int)param_1);
    pcStack_24 = thunk_FUN_00403434;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar1 = FUN_0042781c((int)param_1);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX;
    if (-1 < iVar1 + -1) {
      iVar8 = 0;
      do {
        iVar3 = FUN_004277e0((int)param_1,iVar8);
        uVar5 = extraout_ECX_01;
        uVar6 = extraout_EDX_00;
        if ((byte)(*(char *)(iVar3 + 0x4b) - 3U) < 2) {
          iVar3 = FUN_004277e0((int)param_1,iVar8);
          FUN_0040eec8(piVar2,iVar3);
          uVar5 = extraout_ECX_02;
          uVar6 = extraout_EDX_01;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00402ef0(param_1,uVar6,uVar5);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &DAT_00427576;
    while (0 < piVar2[2]) {
      pcStack_24 = (code *)0x42752f;
      piVar4 = (int *)FUN_0040f024(piVar2,piVar2[2] + -1);
      uVar7 = (undefined3)((uint)extraout_EDX_02 >> 8);
      if (*(char *)((int)piVar4 + 0x4b) == '\x03') {
        pcStack_24 = (code *)0x42753c;
        TLabel_set_Align(piVar4,CONCAT31(uVar7,4),extraout_ECX_03);
      }
      else {
        pcStack_24 = (code *)0x427545;
        TLabel_set_Align(piVar4,CONCAT31(uVar7,3),extraout_ECX_03);
      }
      pcStack_24 = (code *)0x427554;
      FUN_0040ef14(piVar2,piVar2[2] + -1);
    }
    pcStack_24 = (code *)0x427566;
    FUN_00402d14(piVar2);
    pcStack_24 = (code *)0x42756e;
    FUN_0042738c((int)param_1);
    return;
  }
  return;
}


