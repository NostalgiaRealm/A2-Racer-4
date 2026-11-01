
/* ==== TCustomForm.dyn_b008 @ 00449a54 ==== 
 * signature: undefined TCustomForm.dyn_b008(void)
 * body: 00449a54-00449ab1;00449ab9-00449abc
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b008(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  
  if (*(char *)(param_1 + 0x49) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      puStack_10 = (undefined1 *)0x449a80;
      piVar1 = FUN_00418040((int *)&PTR_TPersistent_vmt_000_00416a80,'\x01',param_3);
      puStack_14 = &UNK_00449ab2;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      (**(code **)(**(int **)(param_1 + 0x58) + 8))(*(int **)(param_1 + 0x58),piVar1);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x449ab9;
      puStack_14 = (undefined *)0x449ab1;
      FUN_00402f9c(piVar1);
      return;
    }
    puStack_10 = (undefined1 *)0x449a72;
    (**(code **)(**(int **)(param_1 + 0x58) + 8))
              (*(int **)(param_1 + 0x58),*(undefined4 *)(param_2 + 8));
  }
  return;
}


