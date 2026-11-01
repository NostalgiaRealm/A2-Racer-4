
/* ==== FUN_004e5527 @ 004e5527 ==== 
 * signature: undefined __stdcall FUN_004e5527(void)
 * body: 004e5527-004e5548
 */

void FUN_004e5527(void)

{
  double dVar1;
  undefined4 *this;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  float10 fVar4;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  
  fVar4 = (float10)FUN_00559960();
  dVar1 = (double)fVar4;
  uStack00000028 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar2 = uStack00000028;
  uStack00000024 = SUB84(dVar1,0);
  this = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = uStack00000024;
  _uStack00000024 = dVar1;
  FUN_004e0d60(this,uVar3,uVar2);
  *this = &PTR_FUN_005778c0;
  FUN_004e5203();
  return;
}


