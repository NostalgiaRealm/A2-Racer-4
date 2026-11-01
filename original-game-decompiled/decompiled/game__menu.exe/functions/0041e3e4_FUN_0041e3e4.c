
/* ==== FUN_0041e3e4 @ 0041e3e4 ==== 
 * signature: undefined __register FUN_0041e3e4(int param_1, undefined4 param_2, undefined4 param_3, int * param_4, undefined1 param_5, undefined4 * param_6)
 * body: 0041e3e4-0041e46a;0041e482-0041e4ca
 */

void FUN_0041e3e4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5,
                 undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uStackY_24;
  
  bVar5 = 0;
  iVar1 = FUN_00402f6c((int *)FUN_00417310,'\x01',param_3);
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_3;
  puVar4 = (undefined4 *)(iVar1 + 0x18);
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_6;
    param_6 = param_6 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(undefined1 *)(iVar1 + 0x70) = param_5;
  if (*(int *)(iVar1 + 0x2c) != 0) {
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 8);
  }
  uVar2 = FUN_0040312c(param_4,(int)&PTR_TMemoryStream_vmt_000_0040f194);
  *(undefined4 *)(iVar1 + 0x6c) = uVar2;
  *in_FS_OFFSET = uStackY_24;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004ac66c);
  uStackY_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_24;
  FUN_0041cf14(*(int **)(param_1 + 0x20));
  *(int *)(param_1 + 0x20) = iVar1;
  FUN_0041cf10(iVar1);
  *in_FS_OFFSET = uStackY_24;
  uStackY_24 = 0x41e4ca;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004ac66c);
  return;
}


