
/* ==== FUN_004b2db0 @ 004b2db0 ==== 
 * signature: undefined __thiscall FUN_004b2db0(void * this, int param_1, int param_2)
 * body: 004b2db0-004b2df9
 */

void __thiscall FUN_004b2db0(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  FUN_004c3fa0((byte *)s_TXTCACHE_Filling_pipeline__d_005b0dd0);
  piVar1 = (int *)((int)this + param_1 * 0xc);
  FUN_004c3fa0((byte *)s_TXTCACHE_Filling_with_texture__d_005b0d28);
  *(undefined4 *)(DAT_0073b1b0 + 0x2c + param_2 * 0x48) = 4;
  *piVar1 = param_2;
  *(undefined1 *)(piVar1 + 2) = 1;
  piVar1[1] = param_2;
  return;
}


