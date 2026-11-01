
/* ==== TTourState.vmt_004 @ 0048d31c ==== 
 * signature: undefined __register TTourState.vmt_004(int * param_1, char param_2)
 * body: 0048d31c-0048d40f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TTourState_vmt_004(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined4 extraout_ECX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_134;
  code *pcStackY_130;
  undefined1 *puStackY_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  if (param_2 != '\0') {
    puStackY_12c = (undefined1 *)0x48d33c;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_fffffed8,in_stack_fffffedc);
  }
  pcStackY_130 = thunk_FUN_004036bc;
  uStackY_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_134;
  puStackY_12c = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  TDataObject_vmt_004(param_1,'\0',extraout_ECX);
  piVar3 = TDataList_vmt_018((int *)&PTR_TDataList_vmt_000_0045e240,'\x01',
                             (int)&PTR_TCharResult_vmt_000_0048d848);
  param_1[4] = (int)piVar3;
  uVar2 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  uVar4 = extraout_ECX_00;
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
    uVar4 = extraout_ECX_01;
  }
  if (-1 < (int)(uVar2 - 1)) {
    do {
      piVar3 = TDataObject_vmt_004((int *)&PTR_TCharResult_vmt_000_0048d848,'\x01',uVar4);
      FUN_0045e7e4(param_1[4],piVar3);
      uVar2 = uVar2 - 1;
      uVar4 = extraout_ECX_02;
    } while (uVar2 != 0);
  }
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&local_c,2);
  return;
}


