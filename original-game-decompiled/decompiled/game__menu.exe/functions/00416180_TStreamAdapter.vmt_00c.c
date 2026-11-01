
/* ==== TStreamAdapter.vmt_00c @ 00416180 ==== 
 * signature: undefined TStreamAdapter.vmt_00c(void)
 * body: 00416180-004161c8;004161d8-004161e0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStreamAdapter_vmt_00c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  pcStack_18 = thunk_FUN_00403408;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)**(undefined4 **)(in_stack_00000004 + 0xc))
            (*(undefined4 **)(in_stack_00000004 + 0xc),in_stack_00000008);
  iVar1 = FUN_00412680(*(int **)(in_stack_00000004 + 0xc));
  if (iVar1 >> 0x1f == in_stack_0000000c && iVar1 == in_stack_00000008) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x80004005;
  }
  *in_FS_OFFSET = uStack_1c;
  return uVar2;
}


