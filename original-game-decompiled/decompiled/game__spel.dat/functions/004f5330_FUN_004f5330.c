
/* ==== FUN_004f5330 @ 004f5330 ==== 
 * signature: undefined __thiscall FUN_004f5330(void * this, int param_1)
 * body: 004f5330-004f5355
 */

void __thiscall FUN_004f5330(void *this,int param_1)

{
  if (((byte)*(undefined4 *)this & 0xc) == 4) {
    FUN_00501630(*(void **)((int)this + 0x58),*(int *)(param_1 + 8));
    return;
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  return;
}


