
/* ==== FUN_004eb480 @ 004eb480 ==== 
 * signature: undefined4 __thiscall FUN_004eb480(void * this, int param_1, int param_2)
 * body: 004eb480-004eb4c8
 */

undefined4 __thiscall FUN_004eb480(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004ec720((int)this);
  iVar1 = FUN_004eb3f0(this,param_2);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_004ea880(this,iVar1,param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_004ec540(iVar1);
  uVar2 = FUN_004edd30(iVar1);
  return uVar2;
}


