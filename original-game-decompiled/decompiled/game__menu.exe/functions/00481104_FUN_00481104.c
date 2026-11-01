
/* ==== FUN_00481104 @ 00481104 ==== 
 * signature: undefined __register FUN_00481104(undefined * param_1)
 * body: 00481104-0048116a
 */

void FUN_00481104(undefined *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined *local_8;
  
  pcStack_10 = (code *)0x481114;
  local_8 = param_1;
  FUN_00404090((int)param_1);
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcStack_10 = (code *)&stack0xfffffffc;
  uVar1 = FUN_004087b4(local_8);
  if ((uVar1 != 0xffffffff) && ((uVar1 & 1) == 1)) {
    FUN_004087c8(local_8,uVar1 & 0xfffffffe);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00481172;
  pcStack_14 = (code *)0x48116a;
  FUN_00403c5c((int *)&local_8);
  return;
}


