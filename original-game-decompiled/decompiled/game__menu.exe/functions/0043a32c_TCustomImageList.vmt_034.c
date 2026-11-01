
/* ==== TCustomImageList.vmt_034 @ 0043a32c ==== 
 * signature: undefined __register TCustomImageList.vmt_034(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0043a32c-0043a3d8
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
  undefined4 *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
  param_1[0x10] = iVar1;
  if (((param_1[9] < 1) || (0x8000 < param_1[9])) ||
     (uVar3 = extraout_ECX, uVar4 = extraout_EDX, param_1[10] < 1)) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab708,(int *)&local_8);
    piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',local_8);
    FUN_004036f4(piVar2);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
  }
  param_1[0xb] = 4;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  TImageList_set_DrawingStyle(param_1,CONCAT31((int3)((uint)uVar4 >> 8),2),uVar3);
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  param_1[0xe] = 0x1fffffff;
  param_1[0xf] = 0x1fffffff;
  piVar2 = TBitmap_vmt_00c((int *)FUN_004173a4,'\x01',extraout_ECX_01);
  param_1[0x11] = (int)piVar2;
  FUN_0043a3f8((int)param_1);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0043a3e0;
  pcStack_14 = (code *)0x43a3d8;
  FUN_00403c5c((int *)&local_8);
  return;
}


