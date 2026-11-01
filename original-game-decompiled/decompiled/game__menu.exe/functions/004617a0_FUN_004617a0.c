
/* ==== FUN_004617a0 @ 004617a0 ==== 
 * signature: undefined __register FUN_004617a0(void)
 * body: 004617a0-004617df
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004617a0(void)

{
  double *pdVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  pdVar1 = (double *)&DAT_004ac938;
  do {
    fVar3 = _DAT_004617e8 * ((float10)iVar2 / (float10)256.0) * (float10)2.0;
    FUN_00402a84();
    *pdVar1 = (double)fVar3;
    iVar2 = iVar2 + 1;
    pdVar1 = pdVar1 + 1;
  } while (iVar2 != 0x100);
  return;
}


