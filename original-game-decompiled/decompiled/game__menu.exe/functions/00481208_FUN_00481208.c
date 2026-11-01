
/* ==== FUN_00481208 @ 00481208 ==== 
 * signature: undefined __register FUN_00481208(undefined * param_1)
 * body: 00481208-0048127a
 */

void FUN_00481208(undefined *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  uint local_10;
  byte *local_c;
  undefined *local_8;
  
  local_c = (byte *)0x0;
  local_10 = 0;
  pcStack_18 = (code *)0x48121d;
  local_8 = param_1;
  FUN_00404090((int)param_1);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  FUN_00408a30(local_8,(int *)&local_10);
  iVar2 = 8;
  uVar1 = local_10;
  if (*(uint *)(local_10 - 4) < 9) {
    uVar1 = thunk_FUN_00402808(local_10);
    iVar2 = extraout_EDX;
  }
  FUN_00403e04((int *)&local_c,
               CONCAT31((int3)((uint)(iVar2 + 1) >> 8),*(undefined1 *)((uVar1 - 1) + iVar2 + 1)));
  FUN_00408618(local_c);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00481282;
  pcStack_1c = (code *)0x48127a;
  FUN_00403c80((int *)&local_10,3);
  return;
}


