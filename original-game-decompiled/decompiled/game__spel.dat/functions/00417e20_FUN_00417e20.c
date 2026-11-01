
/* ==== FUN_00417e20 @ 00417e20 ==== 
 * signature: undefined __thiscall FUN_00417e20(void * this, int param_1)
 * body: 00417e20-00417e96
 */

void __thiscall FUN_00417e20(void *this,int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0xffffffff;
  if (param_1 < DAT_005d2ab0) {
    *(undefined4 *)((int)this + 4) =
         *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50);
    *(undefined4 *)((int)this + 8) = 0xffffffff;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    return;
  }
  uVar1 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50);
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


