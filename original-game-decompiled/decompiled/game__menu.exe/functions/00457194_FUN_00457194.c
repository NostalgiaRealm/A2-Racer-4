
/* ==== FUN_00457194 @ 00457194 ==== 
 * signature: undefined __register FUN_00457194(int * param_1, int param_2, int param_3, int param_4)
 * body: 00457194-00457230;00457248-0045725d
 */

void FUN_00457194(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  if (((((param_2 != param_1[0x23]) || (param_3 != param_1[0x10])) || (param_1[0xf] != param_4)) ||
      ((param_1[0x12] != param_1[0x125] || (param_1[0x13] != param_1[0x126])))) ||
     (param_1[0x14] != param_1[0x127])) {
    if ((param_2 < 1) || (param_3 < 1)) {
      puStack_18 = (undefined1 *)0x4571e6;
      FUN_00456634(param_1,param_2,param_3);
    }
    else {
      puStack_18 = (undefined1 *)0x4571f4;
      piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_vmt_000_00454a44,'\x01',param_3);
      pcStack_1c = thunk_FUN_00403408;
      uStack_20 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_20;
      uVar2 = 0;
      puStack_18 = &stack0xfffffffc;
      FUN_00455154(piVar1,param_2,param_3,'\0','\x01',param_1 + 0x25,param_1 + 0x125,param_4);
      *in_FS_OFFSET = uVar2;
      FUN_00457048((int)param_1,(int)piVar1);
      *(undefined1 *)((int)param_1 + 0x1a) = 1;
    }
  }
  return;
}


