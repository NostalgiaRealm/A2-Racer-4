
/* ==== FUN_00441f30 @ 00441f30 ==== 
 * signature: undefined __thiscall FUN_00441f30(void * this, int param_1, int param_2, int param_3, int param_4)
 * body: 00441f30-00441f96
 */

void __thiscall FUN_00441f30(void *this,int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_004c81b0(0xd,8);
  uVar2 = FUN_004c81b0(0,8);
  if (*(int *)((int)this + 0xe0) != 0) {
    FUN_00441e60(this,param_1,param_2,param_3,param_4,uVar1,(ushort)uVar2);
    return;
  }
  FUN_00441e00(param_1,param_2,param_3,param_4,(char)uVar1);
  return;
}


