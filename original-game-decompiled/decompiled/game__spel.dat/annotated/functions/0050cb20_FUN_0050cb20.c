
/* ==== FUN_0050cb20 @ 0050cb20 ==== 
 * signature: undefined __thiscall FUN_0050cb20(void * this, int param_1)
 * body: 0050cb20-0050cb53
 */

void __thiscall FUN_0050cb20(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  this_00 = *(void **)((int)this + 0xc);
  uVar2 = FUN_0050c6d0(param_1);
  puVar3 = (undefined4 *)FUN_005012d0(this_00,param_1,uVar2);
  iVar1 = puVar3[2];
  puVar3[2] = iVar1 + -1;
  if ((iVar1 + -1 == 0) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  return;
}


