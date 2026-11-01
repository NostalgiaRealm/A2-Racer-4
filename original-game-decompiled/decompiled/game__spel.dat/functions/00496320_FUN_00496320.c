
/* ==== FUN_00496320 @ 00496320 ==== 
 * signature: undefined __thiscall FUN_00496320(void * this, int param_1)
 * body: 00496320-00496362
 */

void __thiscall FUN_00496320(void *this,int param_1)

{
  if ((DAT_00712784 == 1) && (((byte)DAT_005ab3c0 & 8) == 0)) {
    FUN_004962e0(this,0);
    return;
  }
  FUN_00496370();
  FUN_004962c0(this,param_1);
  *(int *)((int)this + 0x5c) = param_1;
  return;
}


