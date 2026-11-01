
/* ==== FUN_0043992c @ 0043992c ==== 
 * signature: undefined __register FUN_0043992c(undefined4 param_1)
 * body: 0043992c-00439997;004399b1-004399ce
 */

void FUN_0043992c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD dwThreadId;
  undefined4 *in_FS_OFFSET;
  code *lpfn;
  LPARAM lParam;
  undefined4 uStack_34;
  code *pcStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  
  uVar2 = DAT_00446874;
  uVar1 = DAT_00446868;
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  DAT_00446874 = 0;
  pcStack_24 = thunk_FUN_00403434;
  local_28 = *in_FS_OFFSET;
  DAT_00446868 = param_1;
  *in_FS_OFFSET = &local_28;
  pcStack_30 = thunk_FUN_00403180;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  lParam = 0;
  lpfn = FUN_004398dc;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  DAT_00446874 = uVar2;
  DAT_00446868 = uVar1;
  return;
}


