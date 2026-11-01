
/* ==== FUN_0049bd10 @ 0049bd10 ==== 
 * signature: undefined4 __thiscall FUN_0049bd10(void * this, int param_1)
 * body: 0049bd10-0049bd2d
 */

undefined4 __thiscall FUN_0049bd10(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x14))) {
    return *(undefined4 *)(*(int *)(*(int *)((int)this + 0x1c) + 4) + param_1 * 4);
  }
  return 0;
}


