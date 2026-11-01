
/* ==== TStreamAdapter.vmt_004 @ 004160a0 ==== 
 * signature: undefined TStreamAdapter.vmt_004(void)
 * body: 004160a0-004160ee;004160fe-00416106
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStreamAdapter_vmt_004(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  pcStack_18 = thunk_FUN_00403408;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (in_stack_00000008 == 0) {
    uVar1 = 0x80030009;
    *in_FS_OFFSET = uStack_1c;
  }
  else {
    uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 8))
                      (*(int **)(in_stack_00000004 + 0xc),in_stack_00000008,in_stack_0000000c);
    if (in_stack_00000010 != (undefined4 *)0x0) {
      *in_stack_00000010 = uVar1;
    }
    uVar1 = 0;
    *in_FS_OFFSET = uStack_1c;
  }
  return uVar1;
}


