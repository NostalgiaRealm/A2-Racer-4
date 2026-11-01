
/* ==== FUN_0044d5ec @ 0044d5ec ==== 
 * signature: undefined __register FUN_0044d5ec(int param_1, int param_2)
 * body: 0044d5ec-0044d6a6
 */

void FUN_0044d5ec(int param_1,int param_2)

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
  pcStack_11c = thunk_FUN_004036bc;
  UStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = (UINT)&UStack_120;
  FUN_00403cf4((int *)&local_8,*(int *)(param_2 + 4));
  uVar4 = 0;
  uVar5 = local_8 == (undefined *)0x0;
  if (!(bool)uVar5) {
    pcVar1 = FUN_00408920(local_8);
    FUN_00402d34((char *)local_108,pcVar1);
    FUN_00402b3c(local_108,&DAT_0044d6b4);
    if (!(bool)uVar4 && !(bool)uVar5) {
      FUN_00403ee4((int *)&local_8,(undefined4 *)&DAT_0044d6c0);
    }
  }
  UVar6 = 0x10;
  FUN_0044ce60(param_1,(int *)&local_10c);
  pCVar2 = FUN_004040a0(local_10c);
  pCVar3 = FUN_004040a0(local_8);
  FUN_0044d494(param_1,pCVar3,pCVar2,UVar6);
  *in_FS_OFFSET = UVar6;
  pcStack_11c = FUN_0044d6ae;
  UStack_120 = 0x44d69e;
  FUN_00403c5c((int *)&local_10c);
  UStack_120 = 0x44d6a6;
  FUN_00403c5c((int *)&local_8);
  return;
}


