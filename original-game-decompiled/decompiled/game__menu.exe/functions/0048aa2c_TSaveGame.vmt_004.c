
/* ==== TSaveGame.vmt_004 @ 0048aa2c ==== 
 * signature: undefined __register TSaveGame.vmt_004(int * param_1, char param_2)
 * body: 0048aa2c-0048ab12
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSaveGame_vmt_004(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_130;
  code *pcStackY_12c;
  undefined1 *puStackY_128;
  undefined4 in_stack_fffffedc;
  undefined4 in_stack_fffffee0;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  if (param_2 != '\0') {
    puStackY_128 = (undefined1 *)0x48aa4b;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,0,in_stack_fffffedc,in_stack_fffffee0);
  }
  pcStackY_12c = thunk_FUN_004036bc;
  uStackY_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_130;
  puStackY_128 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar1 = local_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TDataObject_vmt_004(param_1,'\0',extraout_ECX);
  piVar3 = FUN_0048c76c((int *)&PTR_TSaveGameHeader_vmt_000_0048c744,'\x01',(int)param_1);
  param_1[2] = (int)piVar3;
  iVar4 = TTourState_vmt_004((int *)&PTR_TTourState_vmt_000_0048cd54,'\x01');
  param_1[4] = iVar4;
  piVar3 = TDataObject_vmt_004((int *)&PTR_TQRState_vmt_000_0048cce4,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar3;
  iVar4 = TSettings_vmt_004((int *)&PTR_TSettings_vmt_000_004a6010,'\x01');
  param_1[6] = iVar4;
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "Create";
  FUN_00403c80(&local_c,2);
  return;
}


