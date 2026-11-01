
/* ==== FUN_0054c601 @ 0054c601 ==== 
 * signature: undefined __thiscall FUN_0054c601(void * this, undefined4 param_1, int param_2)
 * body: 0054c601-0054c656
 */

void __thiscall FUN_0054c601(void *this,undefined4 param_1,int param_2)

{
  locale *this_00;
  undefined4 uVar1;
  
  *(bool *)((int)this + 0x48) = param_2 == 1;
  if (param_2 == 0) {
    this_00 = (locale *)((int)this + 0x4c);
    std::locale::~locale(this_00);
    if (this_00 != (locale *)0x0) {
      FUN_004d0e40((undefined4 *)this_00);
    }
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  FUN_0054c657((int)this);
  *(undefined4 *)((int)this + 0x50) = param_1;
  *(undefined4 *)((int)this + 0x40) = DAT_0075006c;
  uVar1 = DAT_0075006c;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  return;
}


