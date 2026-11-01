
/* ==== TReader.vmt_008 @ 00413378 ==== 
 * signature: undefined __register TReader.vmt_008(int param_1, char * param_2)
 * body: 00413378-00413437;0041344a-00413450
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
  
  puStack_18 = (undefined1 *)0x413391;
  local_8 = param_1;
  uVar1 = FUN_0040830c(param_2,*(char **)(param_1 + 0x70));
  if (((char)uVar1 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    puStack_18 = (undefined1 *)0x4133ac;
    uVar2 = FUN_00414ec4(local_8,extraout_EDX,extraout_ECX);
    uVar3 = extraout_ECX_00;
    if ((char)uVar2 != '\n') {
      *(int *)(local_8 + 0x10) = *(int *)(local_8 + 0x10) + -1;
      puStack_18 = (undefined1 *)0x4133be;
      FUN_00415024(local_8,extraout_EDX_00,extraout_ECX_00);
      *(undefined1 *)(local_8 + 0x74) = 1;
      puStack_18 = (undefined1 *)0x4133ca;
      FUN_004132b4();
      uVar3 = extraout_ECX_01;
    }
    puStack_18 = (undefined1 *)0x4133d6;
    local_c = (int *)FUN_00402f6c((int *)&PTR_TMemoryStream_vmt_000_0040f194,'\x01',uVar3);
    pcStack_1c = thunk_FUN_004036bc;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00413720(local_8,&local_10,4);
    (**(code **)*local_c)(local_c,local_10);
    FUN_00413720(local_8,(undefined4 *)local_c[1],local_10);
    *(undefined1 *)(local_8 + 0x74) = 1;
    (*in_stack_0000000c)(in_stack_00000010,local_c);
    *in_FS_OFFSET = uStack_20;
    puStack_18 = &DAT_0041343f;
    pcStack_1c = (code *)0x413437;
    FUN_00402f9c(local_c);
    return;
  }
  return;
}


