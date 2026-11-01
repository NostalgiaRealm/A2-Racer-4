
/* ==== FUN_004442dc @ 004442dc ==== 
 * signature: undefined __register FUN_004442dc(undefined4 param_1)
 * body: 004442dc-00444347;00444361-0044437e
 */

void FUN_004442dc(undefined4 param_1)

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
  
  uVar2 = DAT_004aa948;
  uVar1 = DAT_004aa93c;
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  DAT_004aa948 = 0;
  pcStack_24 = thunk_FUN_004036bc;
  local_28 = *in_FS_OFFSET;
  DAT_004aa93c = param_1;
  *in_FS_OFFSET = &local_28;
  pcStack_30 = thunk_FUN_00403408;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  lParam = 0;
  lpfn = FUN_0044428c;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  DAT_004aa948 = uVar2;
  DAT_004aa93c = uVar1;
  return;
}


