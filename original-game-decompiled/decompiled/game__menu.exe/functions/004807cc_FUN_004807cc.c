
/* ==== FUN_004807cc @ 004807cc ==== 
 * signature: undefined __register FUN_004807cc(int param_1, undefined4 * param_2)
 * body: 004807cc-0048081a
 */

void FUN_004807cc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = (undefined1 *)0x4807de;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar2 = 0;
  puStack_10 = &stack0xfffffffc;
  iVar1 = FUN_00480428(param_1);
  FUN_004823ac(*(int **)(param_1 + 0xb0),local_8,iVar1,(char)uVar2);
  *in_FS_OFFSET = uVar2;
  pcStack_14 = FUN_00480822;
  uStack_18 = 0x48081a;
  FUN_00403c5c((int *)&local_8);
  return;
}


