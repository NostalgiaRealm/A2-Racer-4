
/* ==== FUN_0047ce40 @ 0047ce40 ==== 
 * signature: undefined __thiscall FUN_0047ce40(void * this, int param_1)
 * body: 0047ce40-0047ce76
 */

void __thiscall FUN_0047ce40(void *this,int param_1)

{
  *(int *)((int)this + 0x44) = param_1;
  if ((param_1 != -1) && (DAT_006fb940 != 0)) {
    *(undefined4 *)(DAT_0073b0d0 + param_1 * 0xa9 + 0xa5) = 1;
  }
  return;
}


