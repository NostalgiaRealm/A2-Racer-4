
/* ==== FUN_00404924 @ 00404924 ==== 
 * signature: undefined __register FUN_00404924(VARIANT * param_1, VARIANTARG * param_2, undefined4 param_3)
 * body: 00404924-0040499c;004049a4-00404a01;00404a09-00404a17
 */

void FUN_00404924(VARIANT *param_1,VARIANTARG *param_2,undefined4 param_3)

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
    puStack_20 = (undefined1 *)0x404940;
    FUN_00404710(param_1,param_2);
  }
  else if (VVar1 == 0x100) {
    if (VVar2 != 8) {
      local_14.n2.vt = 0;
      puStack_20 = (undefined1 *)0x40496c;
      FUN_00404904((VARIANTARG *)&local_14.n2,(int)param_2);
      pcStack_24 = thunk_FUN_00403434;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_00404830(param_1,(VARIANTARG *)&local_14.n2,param_3);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x404a13;
      pcStack_24 = (code *)0x40499c;
      FUN_004046cc((VARIANTARG *)&local_14.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x404959;
    FUN_00404904(param_1,(int)param_2);
  }
  else if ((VVar2 == 0x100) && (VVar1 != 0x101)) {
    if (VVar1 != 8) {
      local_14.n2.vt = 0;
      puStack_20 = (undefined1 *)0x4049d3;
      FUN_00404830((VARIANTARG *)&local_14.n2,param_2,CONCAT22((short)((uint)param_3 >> 0x10),8));
      pcStack_24 = thunk_FUN_00403434;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      FUN_004048d4(param_1,(int)&local_14);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x404a13;
      pcStack_24 = (code *)0x404a01;
      FUN_004046cc((VARIANTARG *)&local_14.n2);
      return;
    }
    puStack_20 = (undefined1 *)0x4049bf;
    FUN_004048d4(param_1,(int)param_2);
  }
  else {
    puStack_20 = (undefined1 *)0x404a13;
    FUN_00404830(param_1,param_2,param_3);
  }
  return;
}


