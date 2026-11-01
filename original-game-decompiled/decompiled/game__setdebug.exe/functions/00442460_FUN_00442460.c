
/* ==== FUN_00442460 @ 00442460 ==== 
 * signature: undefined __register FUN_00442460(int param_1, int param_2)
 * body: 00442460-0044251a
 */

void FUN_00442460(int param_1,int param_2)

{
  char *pcVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  UINT *in_FS_OFFSET;
  undefined1 uVar4;
  undefined1 uVar5;
  UINT UVar6;
  UINT UStack_120;
  code *pcStack_11c;
  undefined1 *puStack_118;
  undefined *local_10c;
  byte local_108 [256];
  undefined *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10c = (undefined *)0x0;
  local_8 = (undefined *)0x0;
  pcStack_11c = thunk_FUN_00403434;
  UStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = (UINT)&UStack_120;
  FUN_00403a50((int *)&local_8,*(int *)(param_2 + 4));
  uVar4 = 0;
  uVar5 = local_8 == (undefined *)0x0;
  if (!(bool)uVar5) {
    pcVar1 = FUN_00407e78(local_8);
    FUN_00402b18((char *)local_108,pcVar1);
    FUN_00402938(local_108,&DAT_00442528);
    if (!(bool)uVar4 && !(bool)uVar5) {
      FUN_00403c40((int *)&local_8,(undefined4 *)FUN_00442534);
    }
  }
  UVar6 = 0x10;
  FUN_00441ec0(param_1,(int *)&local_10c);
  pCVar2 = FUN_00403dfc(local_10c);
  pCVar3 = FUN_00403dfc(local_8);
  FUN_00442308(param_1,pCVar3,pCVar2,UVar6);
  *in_FS_OFFSET = UVar6;
  pcStack_11c = FUN_00442522;
  UStack_120 = 0x442512;
  FUN_004039b8((int *)&local_10c);
  UStack_120 = 0x44251a;
  FUN_004039b8((int *)&local_8);
  return;
}


