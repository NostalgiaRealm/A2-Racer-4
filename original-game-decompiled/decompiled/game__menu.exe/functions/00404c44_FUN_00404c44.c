
/* ==== FUN_00404c44 @ 00404c44 ==== 
 * signature: undefined __register FUN_00404c44(VARIANT * param_1, VARIANTARG * param_2, undefined4 param_3)
 * body: 00404c44-00404cbc;00404cc4-00404d21;00404d29-00404d37
 */

void FUN_00404c44(VARIANT *param_1,VARIANTARG *param_2,undefined4 param_3)

{
  VARTYPE VVar1;
  VARTYPE VVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  _union_2683 local_14;
  
  VVar1 = (param_2->n1).n2.vt;
  VVar2 = (VARTYPE)param_3;
  if (VVar2 == VVar1) {
    puStack_20 = (undefined1 *)0x404c60;
    FUN_00404a30(param_1,param_2);
  }
  else if (VVar1 == 0x100) {
    if (VVar2 != 8) {
      local_14.n2.vt = 0;
      puStack_20 = (undefined1 *)0x404c8c;
      FUN_00404c24((VARIANTARG *)&local_14.n2,(int)param_2);
      pcStack_24 = thunk_FUN_004036bc;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_00404b50(param_1,(VARIANTARG *)&local_14.n2,param_3);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x404d33;
      pcStack_24 = (code *)0x404cbc;
      FUN_004049ec((VARIANTARG *)&local_14.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x404c79;
    FUN_00404c24(param_1,(int)param_2);
  }
  else if ((VVar2 == 0x100) && (VVar1 != 0x101)) {
    if (VVar1 != 8) {
      local_14.n2.vt = 0;
      puStack_20 = (undefined1 *)0x404cf3;
      FUN_00404b50((VARIANTARG *)&local_14.n2,param_2,CONCAT22((short)((uint)param_3 >> 0x10),8));
      pcStack_24 = thunk_FUN_004036bc;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_00404bf4(param_1,(int)&local_14);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x404d33;
      pcStack_24 = (code *)0x404d21;
      FUN_004049ec((VARIANTARG *)&local_14.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x404cdf;
    FUN_00404bf4(param_1,(int)param_2);
  }
  else {
    puStack_20 = (undefined1 *)0x404d33;
    FUN_00404b50(param_1,param_2,param_3);
  }
  return;
}


