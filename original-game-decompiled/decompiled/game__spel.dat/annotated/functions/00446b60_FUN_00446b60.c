
/* ==== FUN_00446b60 @ 00446b60 ==== 
 * signature: undefined4 __stdcall FUN_00446b60(void)
 * body: 00446b60-00446b95
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00446b60(void)

{
  float10 fVar1;
  
  fVar1 = FUN_004a67f0(0x7128b0);
  if (fVar1 - (float10)_DAT_006fa3cc < (float10)0.2) {
    return 0;
  }
  fVar1 = FUN_004a67f0(0x7128b0);
  _DAT_006fa3cc = (float)fVar1;
  return 1;
}


