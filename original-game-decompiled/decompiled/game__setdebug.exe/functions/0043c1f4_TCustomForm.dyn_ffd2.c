
/* ==== TCustomForm.dyn_ffd2 @ 0043c1f4 ==== 
 * signature: undefined TCustomForm.dyn_ffd2(void)
 * body: 0043c1f4-0043c24c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_ffd2(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  puStack_10 = &UNK_0043c24d;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if ((*(char *)(param_1 + 0x217) == '\x01') && (*(char *)(param_1 + 0x47) != '\0')) {
    FUN_00405298((undefined4 *)PTR_PTR_00446ab0,(int *)&puStack_8);
    piVar1 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',puStack_8);
    FUN_0040346c(piVar1);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &UNK_0043c254;
  puStack_10 = (undefined *)0x43c24c;
  FUN_004039b8((int *)&puStack_8);
  return;
}


