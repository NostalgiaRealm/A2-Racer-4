
/* ==== TWinControl.vmt_09c @ 00427cd8 ==== 
 * signature: undefined __register TWinControl.vmt_09c(int param_1)
 * body: 00427cd8-00427d24
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControl_vmt_09c(int param_1)

{
  BOOL BVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  *(ushort *)(param_1 + 0x44) = *(ushort *)(param_1 + 0x44) | 0x200;
  pcStack_10 = thunk_FUN_00403434;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  BVar1 = DestroyWindow(*(HWND *)(param_1 + 0x14c));
  if (BVar1 == 0) {
    FUN_0040b9e4();
  }
  *in_FS_OFFSET = uStack_14;
  *(ushort *)(local_8 + 0x44) = *(ushort *)(local_8 + 0x44) & 0xfdff;
  return;
}


