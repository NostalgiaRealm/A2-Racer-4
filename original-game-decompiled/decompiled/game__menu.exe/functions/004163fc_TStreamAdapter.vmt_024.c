
/* ==== TStreamAdapter.vmt_024 @ 004163fc ==== 
 * signature: undefined TStreamAdapter.vmt_024(void)
 * body: 004163fc-00416460;00416470-00416478
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStreamAdapter_vmt_024(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  pcStack_18 = thunk_FUN_00403408;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (in_stack_00000008 != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 2;
    iVar1 = FUN_00412680(*(int **)(in_stack_00000004 + 0xc));
    *(int *)(in_stack_00000008 + 8) = iVar1;
    *(int *)(in_stack_00000008 + 0xc) = iVar1 >> 0x1f;
    *(undefined4 *)(in_stack_00000008 + 0x10) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x14) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x18) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x1c) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x20) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x24) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x2c) = 1;
  }
  *in_FS_OFFSET = uStack_1c;
  return 0;
}


