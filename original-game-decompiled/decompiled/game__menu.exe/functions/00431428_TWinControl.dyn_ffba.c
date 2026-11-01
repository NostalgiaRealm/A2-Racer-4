
/* ==== TWinControl.dyn_ffba @ 00431428 ==== 
 * signature: undefined __register TWinControl.dyn_ffba(int * param_1)
 * body: 00431428-0043150e;00431560-00431566
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
  
  puStack_20 = (undefined1 *)0x43143f;
  iVar1 = FUN_004317bc((int)param_1);
  if (iVar1 != 0) {
    puStack_20 = (undefined1 *)0x431453;
    piVar2 = (int *)FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX);
    puStack_20 = (undefined1 *)0x43145e;
    FUN_00431324((int)param_1);
    pcStack_24 = thunk_FUN_004036bc;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar1 = FUN_004317bc((int)param_1);
    uVar5 = extraout_ECX_00;
    uVar6 = extraout_EDX;
    if (-1 < iVar1 + -1) {
      iVar8 = 0;
      do {
        iVar3 = FUN_00431780((int)param_1,iVar8);
        uVar5 = extraout_ECX_01;
        uVar6 = extraout_EDX_00;
        if ((byte)(*(char *)(iVar3 + 0x4b) - 3U) < 2) {
          iVar3 = FUN_00431780((int)param_1,iVar8);
          FUN_00410104(piVar2,iVar3);
          uVar5 = extraout_ECX_02;
          uVar6 = extraout_EDX_01;
        }
        iVar8 = iVar8 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00403178(param_1,uVar6,uVar5);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &DAT_00431516;
    while (0 < piVar2[2]) {
      pcStack_24 = (code *)0x4314cf;
      piVar4 = (int *)FUN_004102b0(piVar2,piVar2[2] + -1);
      uVar7 = (undefined3)((uint)extraout_EDX_02 >> 8);
      if (*(char *)((int)piVar4 + 0x4b) == '\x03') {
        pcStack_24 = (code *)0x4314dc;
        TGroupBox_set_Align(piVar4,CONCAT31(uVar7,4),extraout_ECX_03);
      }
      else {
        pcStack_24 = (code *)0x4314e5;
        TGroupBox_set_Align(piVar4,CONCAT31(uVar7,3),extraout_ECX_03);
      }
      pcStack_24 = (code *)0x4314f4;
      FUN_00410150(piVar2,piVar2[2] + -1);
    }
    pcStack_24 = (code *)0x431506;
    FUN_00402f9c(piVar2);
    pcStack_24 = (code *)0x43150e;
    FUN_0043132c((int)param_1);
    return;
  }
  return;
}


