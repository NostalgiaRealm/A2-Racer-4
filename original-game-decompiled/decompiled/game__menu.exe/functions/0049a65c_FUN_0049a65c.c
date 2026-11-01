
/* ==== FUN_0049a65c @ 0049a65c ==== 
 * signature: undefined FUN_0049a65c(void)
 * body: 0049a65c-0049a71b
 */

void FUN_0049a65c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x49a672;
  piVar1 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',param_3);
  puStack_18 = &UNK_0049a71c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00489eb8(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(undefined4 *)&UNK_0049a76c,piVar1);
  piVar3 = piVar1;
  iVar2 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  piVar3 = FUN_00491590((int *)&DAT_00491520,'\x01',param_1,iVar2,piVar3);
  param_1[0xd1] = (int)piVar3;
  iVar2 = *(int *)(param_1[0xcc] + 0x30);
  iVar4 = *(int *)(param_1[0xcd] + 0x30) - iVar2;
  if (SBORROW4(*(int *)(param_1[0xcd] + 0x30),iVar2)) {
    thunk_FUN_00402808((uint)param_1);
    iVar4 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  FUN_004916a4((int)piVar3,iVar2,*(undefined4 *)(param_1[0xcc] + 0x34),iVar4);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_0049a723;
  puStack_18 = (undefined *)0x49a71b;
  FUN_00402f9c(piVar1);
  return;
}


