
/* ==== FUN_00441940 @ 00441940 ==== 
 * signature: undefined __thiscall FUN_00441940(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 00441940-00441963
 */

void __thiscall
FUN_00441940(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined1 *)((int)this + 0x10) = 1;
  return;
}


