
/* ==== FUN_004a5c70 @ 004a5c70 ==== 
 * signature: undefined __thiscall FUN_004a5c70(void * this, int * param_1)
 * body: 004a5c70-004a5cca
 */

void __thiscall FUN_004a5c70(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(int *)((int)this + 0x74) = *param_1;
  *(int *)((int)this + 0x78) = param_1[1];
  *(int *)((int)this + 0x7c) = param_1[2];
  iVar1 = *param_1;
  iVar2 = param_1[2];
  *(float *)((int)this + 0x84) = -(float)param_1[1];
  *(int *)((int)this + 0x80) = iVar1;
  *(int *)((int)this + 0x88) = iVar2;
  FUN_004fb810(this);
  return;
}


