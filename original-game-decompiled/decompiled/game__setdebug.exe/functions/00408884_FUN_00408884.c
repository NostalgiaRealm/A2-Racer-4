
/* ==== FUN_00408884 @ 00408884 ==== 
 * signature: undefined __register FUN_00408884(undefined4 * param_1, undefined4 param_2, undefined4 param_3, double param_4)
 * body: 00408884-004088c3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408884(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  int iStack_8;
  
  uVar1 = (ulonglong)ROUND(param_4 * (double)_DAT_00446158);
  local_c = (int)uVar1;
  iStack_8 = (int)(uVar1 >> 0x20);
  if ((longlong)uVar1 < 0) {
    uVar1 = CONCAT44(-(uint)(local_c != 0) - iStack_8,-local_c);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_0044615c);
    iVar2 = -(int)(uVar1 / DAT_0044615c);
  }
  else {
    iVar2 = (int)(uVar1 / DAT_0044615c);
    uVar3 = (undefined4)(uVar1 % (ulonglong)DAT_0044615c);
  }
  *param_1 = uVar3;
  param_1[1] = iVar2 + 0xa955a;
  return;
}


