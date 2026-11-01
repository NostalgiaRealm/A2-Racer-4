
/* ==== TStreamAdapter.vmt_000 @ 00414484 ==== 
 * signature: undefined4 __register TStreamAdapter.vmt_000(void)
 * body: 00414484-004144d2;004144e2-004144ea
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStreamAdapter_vmt_000(void)

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
  pcStack_18 = thunk_FUN_00403180;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (in_stack_00000008 == 0) {
    uVar1 = 0x80030009;
    *in_FS_OFFSET = uStack_1c;
  }
  else {
    uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 4))
                      (*(int **)(in_stack_00000004 + 0xc),in_stack_00000008,in_stack_0000000c);
    if (in_stack_00000010 != (undefined4 *)0x0) {
      *in_stack_00000010 = uVar1;
    }
    uVar1 = 0;
    *in_FS_OFFSET = uStack_1c;
  }
  return uVar1;
}


