
/* ==== TBitmap.vmt_05c @ 0041f204 ==== 
 * signature: undefined __register TBitmap.vmt_05c(int param_1, undefined2 * param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 0041f204-0041f27d;0041f298-0041f2a0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBitmap_vmt_05c(int param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  HPALETTE pHVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 uStackY_7c;
  code *pcStackY_78;
  undefined1 *puStackY_74;
  undefined4 local_5c [5];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_8;
  
  bVar6 = 0;
  *param_2 = 2;
  local_8 = param_3;
  FUN_0041e0d4(param_1);
  iVar1 = *(int *)(param_1 + 0x20);
  puVar4 = (undefined4 *)(iVar1 + 0x18);
  puVar5 = local_5c;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  local_44 = 0;
  local_48 = 0;
  puStackY_74 = (undefined1 *)0x41f251;
  pHVar2 = FUN_0041d0e4(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),
                        *(HPALETTE *)(iVar1 + 0x10),*(int *)(param_1 + 0x24),(int)local_5c);
  *local_8 = pHVar2;
  pcStackY_78 = thunk_FUN_00403408;
  uStackY_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_7c;
  puStackY_74 = &stack0xfffffffc;
  pHVar2 = FUN_0041d740(*(HPALETTE *)(*(int *)(param_1 + 0x20) + 0x10));
  *param_4 = pHVar2;
  *in_FS_OFFSET = uStackY_7c;
  return;
}


