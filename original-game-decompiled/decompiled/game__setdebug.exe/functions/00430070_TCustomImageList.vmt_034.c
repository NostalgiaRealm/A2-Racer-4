
/* ==== TCustomImageList.vmt_034 @ 00430070 ==== 
 * signature: undefined TCustomImageList.vmt_034(void)
 * body: 00430070-0043011c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomImageList_vmt_034(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined4 *puStack_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
  param_1[0x10] = iVar1;
  if (((param_1[9] < 1) || (0x8000 < param_1[9])) ||
     (uVar3 = extraout_ECX, uVar4 = extraout_EDX, param_1[10] < 1)) {
    FUN_00405298((undefined4 *)PTR_PTR_00446b2c,(int *)&puStack_8);
    piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',puStack_8);
    FUN_0040346c(piVar2);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  param_1[0xb] = 4;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  FUN_00430b44(param_1,CONCAT31((int3)((uint)uVar4 >> 8),2),uVar3);
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  param_1[0xe] = 0x1fffffff;
  param_1[0xf] = 0x1fffffff;
  piVar2 = TBitmap_vmt_00c((int *)FUN_0041571c,'\x01',extraout_ECX_01);
  param_1[0x11] = (int)piVar2;
  FUN_0043013c((int)param_1);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00430124;
  pcStack_14 = (code *)0x43011c;
  FUN_004039b8((int *)&puStack_8);
  return;
}


