
/* ==== TCustomForm.dyn_b008 @ 0043f0a4 ==== 
 * signature: undefined TCustomForm.dyn_b008(void)
 * body: 0043f0a4-0043f101;0043f109-0043f10c
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
      puStack_10 = (undefined1 *)0x43f0d0;
      piVar1 = FUN_004163b8((int *)&PTR_TPersistent_vmt_000_00414ecc,'\x01',param_3);
      puStack_14 = &UNK_0043f102;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_10 = &stack0xfffffffc;
      (**(code **)(**(int **)(param_1 + 0x58) + 8))(*(int **)(param_1 + 0x58),piVar1);
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x43f109;
      puStack_14 = (undefined *)0x43f101;
      FUN_00402d14(piVar1);
      return;
    }
    puStack_10 = (undefined1 *)0x43f0c2;
    (**(code **)(**(int **)(param_1 + 0x58) + 8))
              (*(int **)(param_1 + 0x58),*(undefined4 *)(param_2 + 8));
  }
  return;
}


