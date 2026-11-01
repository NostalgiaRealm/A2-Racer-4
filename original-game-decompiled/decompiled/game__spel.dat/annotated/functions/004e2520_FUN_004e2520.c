
/* ==== FUN_004e2520 @ 004e2520 ==== 
 * signature: short * __thiscall FUN_004e2520(void * this, int * param_1)
 * body: 004e2520-004e2573
 */

short * __thiscall FUN_004e2520(void *this,int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  
  uVar2 = FUN_004d4510(param_1);
  sVar1 = (short)uVar2;
  *(short *)this = sVar1;
  if ((sVar1 != 0xff) && (sVar5 = 0, 0 < sVar1)) {
    do {
      iVar4 = (int)sVar5;
      uVar2 = FUN_004d4510(param_1);
      *(undefined4 *)((int)this + iVar4 * 4 + 4) = uVar2;
      uVar3 = FUN_004d74d0(param_1);
      sVar5 = sVar5 + 1;
      *(short *)((int)this + iVar4 * 2 + 0x18) = (short)uVar3;
    } while (sVar5 < *(short *)this);
    return this;
  }
  return this;
}


