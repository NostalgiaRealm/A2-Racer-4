
/* ==== FUN_004ee8a0 @ 004ee8a0 ==== 
 * signature: undefined __thiscall FUN_004ee8a0(void * this, float param_1, float param_2, float param_3)
 * body: 004ee8a0-004ee959
 */

void __thiscall FUN_004ee8a0(void *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x120);
  iVar2 = *(int *)((int)this + 0x11c);
  iVar3 = *(int *)((int)this + 0x124);
  iVar4 = *(int *)((int)this + 0x128);
  *(float *)((int)this + 0x108) =
       param_1 / (float)((*(int *)((int)this + 0x118) - *(int *)((int)this + 0x114)) / 2);
  FUN_004ee6d0((float *)((int)this + 0x108),-1.0,1.0);
  *(float *)((int)this + 0x10c) = -(param_2 / (float)((iVar1 - iVar2) / 2));
  FUN_004ee6d0((float *)((int)this + 0x10c),-1.0,1.0);
  *(float *)((int)this + 0x110) = param_3 / (float)((iVar4 - iVar3) / 2);
  FUN_004ee6d0((float *)((int)this + 0x110),-1.0,1.0);
  return;
}


