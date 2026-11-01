
/* ==== FUN_00404830 @ 00404830 ==== 
 * signature: undefined __register FUN_00404830(VARIANTARG * param_1, VARIANTARG * param_2, undefined4 param_3)
 * body: 00404830-004048d3
 */

void FUN_00404830(VARIANTARG *param_1,VARIANTARG *param_2,undefined4 param_3)

{
  VARTYPE VVar1;
  bool bVar2;
  uint uVar3;
  _union_2683 local_14;
  
  VVar1 = (param_1->n1).n2.vt;
  if (VVar1 == 0x100) {
    bVar2 = FUN_00404818(param_1,(short *)param_2,param_3);
    if (!bVar2) {
      local_14._0_4_ = (uint)local_14.n2.wReserved1 << 0x10;
      uVar3 = VariantChangeTypeEx((VARIANTARG *)&local_14.n2,param_2,0x400,0,(VARTYPE)param_3);
      if (uVar3 != 0) {
        thunk_FUN_00402744(uVar3);
      }
      FUN_004046cc(param_1);
      *(undefined4 *)&param_1->n1 = local_14._0_4_;
      *(undefined4 *)((int)&param_1->n1 + 8) = local_14._8_4_;
      *(undefined4 *)((int)&param_1->n1 + 0xc) = local_14._12_4_;
    }
  }
  else if (VVar1 == 0x101) {
    FUN_004047ac(param_1,(undefined4 *)param_2,param_3);
  }
  else {
    bVar2 = FUN_00404818(param_1,(short *)param_2,param_3);
    if (!bVar2) {
      uVar3 = VariantChangeTypeEx(param_1,param_2,0x400,0,(VARTYPE)param_3);
      if (uVar3 != 0) {
        thunk_FUN_00402744(uVar3);
      }
    }
  }
  return;
}


