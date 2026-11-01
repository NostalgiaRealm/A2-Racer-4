
/* ==== TCustomForm.dyn_ffd2 @ 00446ba4 ==== 
 * signature: undefined TCustomForm.dyn_ffd2(void)
 * body: 00446ba4-00446bfc
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
  puStack_10 = &UNK_00446bfd;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if ((*(char *)(param_1 + 0x217) == '\x01') && (*(char *)(param_1 + 0x47) != '\0')) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab658,(int *)&puStack_8);
    piVar1 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',puStack_8);
    FUN_004036f4(piVar1);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &UNK_00446c04;
  puStack_10 = (undefined *)0x446bfc;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


