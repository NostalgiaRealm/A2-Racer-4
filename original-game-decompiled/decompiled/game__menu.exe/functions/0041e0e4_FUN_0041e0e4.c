
/* ==== FUN_0041e0e4 @ 0041e0e4 ==== 
 * signature: undefined __register FUN_0041e0e4(int * param_1, uint param_2)
 * body: 0041e0e4-0041e18d;0041e1b4-0041e1c3
 */

void FUN_0041e0e4(int *param_1,uint param_2)

{
  COLORREF CVar1;
  HPALETTE pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_78;
  code *pcStack_74;
  undefined1 *puStack_70;
  undefined4 local_60 [21];
  HPALETTE local_c;
  HANDLE local_8;
  
  puStack_70 = &stack0xfffffffc;
  local_8 = (HANDLE)0x0;
  local_c = (HPALETTE)0x0;
  pcStack_74 = thunk_FUN_00403408;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  FUN_0041e0c4((int)param_1);
  FUN_0041e0d4((int)param_1);
  CVar1 = FUN_00417d54(param_2);
  local_8 = (HANDLE)FUN_0041d7a4(*(HPALETTE *)(param_1[8] + 8),*(HPALETTE *)(param_1[8] + 0x10),
                                 CVar1);
  FUN_00402c30(local_60,0x54,0);
  GetObjectA(local_8,0x54,local_60);
  pHVar2 = *(HPALETTE *)(param_1[8] + 0x10);
  if (pHVar2 != DAT_004ac650) {
    pHVar2 = FUN_0041d740(pHVar2);
  }
  local_c = pHVar2;
  uVar3 = 0;
  FUN_0041e3e4((int)param_1,local_8,local_c,(int *)0x0,*(undefined1 *)(param_1[8] + 0x70),local_60);
  *in_FS_OFFSET = uVar3;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


