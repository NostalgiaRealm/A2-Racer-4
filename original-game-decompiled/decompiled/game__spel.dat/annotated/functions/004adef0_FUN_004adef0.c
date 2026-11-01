
/* ==== FUN_004adef0 @ 004adef0 ==== 
 * signature: undefined __thiscall FUN_004adef0(void * this, int param_1, int param_2, int param_3, int param_4)
 * body: 004adef0-004ae022
 */

void __thiscall FUN_004adef0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_3 << 7);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  *(void **)((int)this + 0x5c) = pvVar1;
  pvVar1 = operator_new(param_2 << 7);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  *(void **)((int)this + 0x7c) = pvVar1;
  pvVar1 = operator_new(param_1 << 7);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  *(void **)((int)this + 0x6c) = pvVar1;
  pvVar1 = operator_new(param_4 << 7);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  *(void **)((int)this + 0x8c) = pvVar1;
  pvVar1 = operator_new(param_3 * 0x18);
  *(void **)((int)this + 0x60) = pvVar1;
  pvVar1 = operator_new(param_4 * 0xc);
  *(void **)((int)this + 0x90) = pvVar1;
  pvVar1 = operator_new(param_2 * 0xc);
  *(void **)((int)this + 0x80) = pvVar1;
  pvVar1 = operator_new(param_1 * 0xc);
  *(void **)((int)this + 0x70) = pvVar1;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  DAT_00715f50 = this;
  return;
}


