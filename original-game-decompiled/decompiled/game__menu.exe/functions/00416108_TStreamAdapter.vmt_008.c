
/* ==== TStreamAdapter.vmt_008 @ 00416108 ==== 
 * signature: undefined TStreamAdapter.vmt_008(void)
 * body: 00416108-00416166;00416176-0041617e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TStreamAdapter_vmt_008(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_00000010;
  int *in_stack_00000014;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  pcStack_18 = thunk_FUN_00403408;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((in_stack_00000010 < 0) || (2 < in_stack_00000010)) {
    uVar2 = 0x80030001;
    *in_FS_OFFSET = uStack_1c;
  }
  else {
    iVar1 = (**(code **)(**(int **)(in_stack_00000004 + 0xc) + 0xc))
                      (*(int **)(in_stack_00000004 + 0xc),in_stack_00000008);
    if (in_stack_00000014 != (int *)0x0) {
      *in_stack_00000014 = iVar1;
      in_stack_00000014[1] = iVar1 >> 0x1f;
    }
    uVar2 = 0;
    *in_FS_OFFSET = uStack_1c;
  }
  return uVar2;
}


