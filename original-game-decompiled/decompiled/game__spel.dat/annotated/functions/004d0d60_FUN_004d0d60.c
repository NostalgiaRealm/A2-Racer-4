
/* ==== FUN_004d0d60 @ 004d0d60 ==== 
 * signature: undefined __thiscall FUN_004d0d60(void * this, int param_1, int param_2)
 * body: 004d0d60-004d0e3f
 */

void __thiscall FUN_004d0d60(void *this,int param_1,int param_2)

{
  facet *pfVar1;
  
  *(bool *)((int)this + 0x48) = param_2 == 1;
  if (param_2 == 0) {
    if (*(facet **)((int)this + 0x4c) != (facet *)0x0) {
      pfVar1 = std::locale::facet::_Decref(*(facet **)((int)this + 0x4c));
      if (pfVar1 != (facet *)0x0) {
        (*(code *)**(undefined4 **)pfVar1)(1);
      }
    }
    if ((undefined4 *)((int)this + 0x4c) != (undefined4 *)0x0) {
      FUN_004d0e40((undefined4 *)((int)this + 0x4c));
    }
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  *(int *)((int)this + 0xc) = (int)this + 4;
  *(int *)((int)this + 0x1c) = (int)this + 0x14;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 8);
  *(int *)((int)this + 0x2c) = (int)this + 0x24;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(undefined4 *)((int)this + 8) = 0;
  **(undefined4 **)((int)this + 0x20) = 0;
  **(undefined4 **)((int)this + 0x30) = 0;
  **(undefined4 **)((int)this + 0xc) = 0;
  **(undefined4 **)((int)this + 0x1c) = 0;
  **(undefined4 **)((int)this + 0x2c) = 0;
  if ((param_1 != 0) && (*(char *)((int)this + 0x48) == '\0')) {
    *(int *)((int)this + 0x1c) = param_1;
    *(int *)((int)this + 0xc) = param_1 + 8;
    *(int *)((int)this + 0x10) = param_1 + 8;
    *(int *)((int)this + 0x20) = param_1;
    *(int *)((int)this + 0x2c) = param_1 + 4;
    *(int *)((int)this + 0x30) = param_1 + 4;
  }
  *(int *)((int)this + 0x50) = param_1;
  *(undefined4 *)((int)this + 0x40) = DAT_00750064;
  *(undefined4 *)((int)this + 0x3c) = DAT_00750064;
  *(undefined4 *)((int)this + 0x38) = 0;
  return;
}


