
/* ==== FUN_0046985b @ 0046985b ==== 
 * signature: undefined __thiscall FUN_0046985b(void * this, int param_1)
 * body: 0046985b-0046985f
 */

void __thiscall FUN_0046985b(void *this,int param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    if (*(int *)((int)this + 8) != 0) {
      FUN_004698b0((int)this);
    }
    pvVar1 = operator_new(param_1 * 8);
    *(void **)((int)this + 8) = pvVar1;
    FUN_004a6980((uint)(pvVar1 != (void *)0x0),(byte *)s_Could_not_allocate__d_frame_type_005a7abc);
  }
  *(int *)((int)this + 0xc) = param_1;
  return;
}


