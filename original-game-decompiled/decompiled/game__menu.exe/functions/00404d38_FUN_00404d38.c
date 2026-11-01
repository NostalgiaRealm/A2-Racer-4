
/* ==== FUN_00404d38 @ 00404d38 ==== 
 * signature: uint __register FUN_00404d38(VARIANTARG * param_1)
 * body: 00404d38-00404da1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00404d38(VARIANTARG *param_1)

{
  float fVar1;
  VARTYPE VVar2;
  _union_2683 local_10;
  
  VVar2 = (param_1->n1).n2.vt;
  if (VVar2 == 3) {
    return *(uint *)((int)&param_1->n1 + 8);
  }
  if (VVar2 != 2) {
    if (VVar2 == 0x11) {
      return (uint)*(byte *)((int)&param_1->n1 + 8);
    }
    if (VVar2 == 5) {
      fVar1 = (float)*(double *)((int)&param_1->n1 + 8);
    }
    else if (VVar2 == 4) {
      fVar1 = *(float *)((int)&param_1->n1 + 8);
    }
    else {
      if (VVar2 != 6) {
        local_10.n2.vt = 0;
        FUN_00404c44((VARIANT *)&local_10.n2,param_1,3);
        return local_10._8_4_;
      }
      fVar1 = (float)*(longlong *)((int)&param_1->n1 + 8) / ram0x004aa06c;
    }
    return (int)ROUND(fVar1);
  }
  return (int)*(short *)((int)&param_1->n1 + 8);
}


