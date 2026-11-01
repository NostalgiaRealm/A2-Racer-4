
/* ==== TCustomForm.dyn_0046 @ 0043e934 ==== 
 * signature: undefined TCustomForm.dyn_0046(void)
 * body: 0043e934-0043e9b6
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_0046(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  iVar1 = *(int *)(param_2 + 8);
  if ((((*(ushort *)(param_1 + 0x20) & 10) == 0) && ((*(byte *)(iVar1 + 0x18) & 1) == 0)) &&
     ((*(int *)(iVar1 + 0x10) != *(int *)(param_1 + 0x38) ||
      (*(int *)(iVar1 + 0x14) != *(int *)(param_1 + 0x3c))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x212) = uVar2;
  puStack_18 = &UNK_0043e9b7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TWinControl_dyn_0046(param_1,param_2);
  *in_FS_OFFSET = uStack_1c;
  *(undefined1 *)(param_1 + 0x212) = 0;
  return;
}


