
/* ==== FUN_0049ea90 @ 0049ea90 ==== 
 * signature: undefined __thiscall FUN_0049ea90(void * this, undefined4 param_1, int param_2)
 * body: 0049ea90-0049ead6
 */

void __thiscall FUN_0049ea90(void *this,undefined4 param_1,int param_2)

{
  void *pvVar1;
  
  *(int *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  pvVar1 = operator_new(param_2 << 2);
  *(void **)this = pvVar1;
  FUN_004a0100((uint)(pvVar1 != (void *)0x0),(byte *)s__s___d__Couldn_t_allocate_sound_s_005ae7e4);
  *(undefined4 *)((int)this + 0xc) = param_1;
  return;
}


