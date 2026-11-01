
/* ==== TReader.vmt_008 @ 004117c4 ==== 
 * signature: undefined __register TReader.vmt_008(int param_1, char * param_2)
 * body: 004117c4-00411883;00411896-0041189c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TReader_vmt_008(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  uint local_10;
  int *local_c;
  int local_8;
  
  puStack_18 = (undefined1 *)0x4117dd;
  local_8 = param_1;
  uVar1 = FUN_00407ad0(param_2,*(char **)(param_1 + 0x70));
  if (((char)uVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    puStack_18 = (undefined1 *)0x4117f8;
    uVar2 = FUN_00413310(local_8,extraout_EDX,extraout_ECX);
    uVar3 = extraout_ECX_00;
    if ((char)uVar2 != '\n') {
      *(int *)(local_8 + 0x10) = *(int *)(local_8 + 0x10) + -1;
      puStack_18 = (undefined1 *)0x41180a;
      FUN_00413470(local_8,extraout_EDX_00,extraout_ECX_00);
      *(undefined1 *)(local_8 + 0x74) = 1;
      puStack_18 = (undefined1 *)0x411816;
      FUN_00411700();
      uVar3 = extraout_ECX_01;
    }
    puStack_18 = (undefined1 *)0x411822;
    local_c = (int *)FUN_00402ce4((int *)&PTR_TMemoryStream_vmt_000_0040df58,'\x01',uVar3);
    pcStack_1c = thunk_FUN_00403434;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00411b6c(local_8,&local_10,4);
    (**(code **)*local_c)(local_c,local_10);
    FUN_00411b6c(local_8,(undefined4 *)local_c[1],local_10);
    *(undefined1 *)(local_8 + 0x74) = 1;
    (*in_stack_0000000c)(in_stack_00000010,local_c);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = &DAT_0041188b;
    pcStack_1c = (code *)0x411883;
    FUN_00402d14(local_c);
    return;
  }
  return;
}


