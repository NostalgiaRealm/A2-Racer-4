
/* ==== TCustomForm.dyn_b017 @ 0043e560 ==== 
 * signature: undefined TCustomForm.dyn_b017(void)
 * body: 0043e560-0043e5b5
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b017(int param_1,int param_2)

{
  int iVar1;
  LRESULT LVar2;
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (((((*(byte *)(param_1 + 0x20) & 0x10) != 0) || (*(char *)(param_1 + 0x217) == '\x01')) ||
      (*(int *)(param_1 + 0x230) == 0)) || (*(char *)(*(int *)(param_1 + 0x230) + 0x4c) != '\0')) {
    iVar1 = *(int *)(param_2 + 8);
    FUN_0043dd18(param_1,0);
    LVar2 = FUN_00421a28(0xb017,*(WPARAM *)(iVar1 + 4),(uint)*(ushort *)(iVar1 + 8));
    if (LVar2 != 0) {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  return;
}


