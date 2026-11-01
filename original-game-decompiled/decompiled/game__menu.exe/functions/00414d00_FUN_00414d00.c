
/* ==== FUN_00414d00 @ 00414d00 ==== 
 * signature: undefined __register FUN_00414d00(int param_1, int param_2)
 * body: 00414d00-00414d7c;00414d94-00414da9
 */

void FUN_00414d00(int param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  code *pcStack_20;
  code *pcStack_1c;
  byte *local_c;
  int local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  local_c = (byte *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  pcStack_2c = thunk_FUN_00403408;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  uVar2 = FUN_00414ec4(param_1,param_2,0);
  if ((char)uVar2 != '\v') {
    FUN_004132b4();
  }
  iVar3 = FUN_0040de54(param_2);
  pcVar1 = (char *)**(undefined4 **)(iVar3 + 1);
  uVar2 = extraout_ECX;
  while (FUN_00414de0(local_8,(int *)&local_c,uVar2), local_c != (byte *)0x0) {
    FUN_004132cc(pcVar1,local_c);
    uVar2 = extraout_ECX_00;
  }
  *in_FS_OFFSET = uStack_30;
  *in_FS_OFFSET = local_24;
  pcStack_1c = FUN_00414db1;
  pcStack_20 = (code *)0x414da9;
  FUN_00403c5c((int *)&local_c);
  return;
}


