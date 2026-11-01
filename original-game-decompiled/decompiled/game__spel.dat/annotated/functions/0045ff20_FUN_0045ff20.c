
/* ==== FUN_0045ff20 @ 0045ff20 ==== 
 * signature: undefined4 * __thiscall FUN_0045ff20(void * this, undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 0045ff20-0045ff61
 */

undefined4 * __thiscall
FUN_0045ff20(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  FUN_0045ded0(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_FUN_00576910;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0x3f800000;
  *(undefined4 *)((int)this + 0x4c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x70) = 0xc1200000;
  return this;
}


