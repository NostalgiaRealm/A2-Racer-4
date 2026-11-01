
/* ==== FUN_004fb360 @ 004fb360 ==== 
 * signature: undefined __thiscall FUN_004fb360(void * this, undefined4 param_1, int * param_2)
 * body: 004fb360-004fb41b
 */

void __thiscall FUN_004fb360(void *this,undefined4 param_1,int *param_2)

{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  double local_a0;
  double local_98;
  double local_90;
  double local_80 [16];
  
  this_00 = (void *)*param_2;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(void **)((int)this + 8) = this_00;
  FUN_004f2ab0(this_00,local_80);
  iVar1 = *param_2;
  if (*(int *)(iVar1 + 0x40) == 0) {
    puVar2 = FUN_004fe470(*(void **)(*(int *)(iVar1 + 0x18) + 0xa4),iVar1);
    *(undefined4 **)(iVar1 + 0x40) = puVar2;
  }
  if ((*(int *)(iVar1 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(iVar1 + 0x40) < *(int *)(*(int *)(iVar1 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(iVar1 + 0x40));
  }
  FUN_004fe7e0(*(void **)(iVar1 + 0x40),(double *)(param_2 + 2),&local_a0);
  *(float *)((int)this + 0xc) = (float)local_a0;
  *(float *)((int)this + 0x10) = (float)local_98;
  *(float *)((int)this + 0x14) = (float)local_90;
  FUN_004fac90(local_80,(float *)((int)this + 0xc),(float *)((int)this + 0x1c));
  FUN_004f2450(*(void **)((int)this + 8),this);
  return;
}


