
/* ==== FUN_0053bb90 @ 0053bb90 ==== 
 * signature: undefined __thiscall FUN_0053bb90(void * this, int param_1, undefined4 param_2)
 * body: 0053bb90-0053bbae
 */

void __thiscall FUN_0053bb90(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 0xc) == param_1) {
    *(undefined4 *)((int)this + 0xc) = param_2;
    return;
  }
  *(undefined4 *)((int)this + 0x10) = param_2;
  return;
}


