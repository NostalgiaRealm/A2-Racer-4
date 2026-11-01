
/* ==== FUN_004d0ac0 @ 004d0ac0 ==== 
 * signature: undefined4 * __thiscall FUN_004d0ac0(void * this, int param_1)
 * body: 004d0ac0-004d0c48
 */

undefined4 * __thiscall FUN_004d0ac0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  facet *pfVar4;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f9ee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = FUN_0054caea();
  *(undefined4 **)((int)this + 0x34) = puVar2;
  if (*(int *)(DAT_0074daf8 + 4) != -1) {
    *(int *)(DAT_0074daf8 + 4) = *(int *)(DAT_0074daf8 + 4) + 1;
  }
  *(int *)((int)this + 0x1c) = (int)this + 0x14;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x2c) = (int)this + 0x24;
  puVar2 = (undefined4 *)((int)this + 8);
  *(undefined ***)this = &PTR_FUN_00578f04;
  *(int *)((int)this + 0xc) = (int)this + 4;
  *(undefined4 **)((int)this + 0x10) = puVar2;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *puVar2 = 0;
  **(undefined4 **)((int)this + 0x20) = 0;
  local_4 = 0;
  **(undefined4 **)((int)this + 0x30) = 0;
  FUN_004d0d20(this,0,0,0);
  local_4 = 1;
  puVar1 = (undefined4 *)((int)this + 0x4c);
  puVar3 = FUN_0054caea();
  *puVar1 = puVar3;
  if (*(int *)(DAT_0074daf8 + 4) != -1) {
    *(int *)(DAT_0074daf8 + 4) = *(int *)(DAT_0074daf8 + 4) + 1;
  }
  *(undefined ***)this = &PTR_FUN_00578ecc;
  *(undefined1 *)((int)this + 0x48) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((facet *)*puVar1 != (facet *)0x0) {
    pfVar4 = std::locale::facet::_Decref((facet *)*puVar1);
    if (pfVar4 != (facet *)0x0) {
      (*(code *)**(undefined4 **)pfVar4)(1);
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = FUN_0054caea();
    *puVar1 = puVar3;
    if (*(int *)(DAT_0074daf8 + 4) != -1) {
      *(int *)(DAT_0074daf8 + 4) = *(int *)(DAT_0074daf8 + 4) + 1;
    }
  }
  *(int *)((int)this + 0x1c) = (int)this + 0x14;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x2c) = (int)this + 0x24;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(int *)((int)this + 0xc) = (int)this + 4;
  *(undefined4 **)((int)this + 0x10) = puVar2;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  FUN_004d0d40(this,0,0);
  FUN_004d0d20(this,0,0,0);
  if ((param_1 != 0) && (*(char *)((int)this + 0x48) == '\0')) {
    FUN_004d1120(this,param_1 + 8,param_1,param_1 + 4,param_1 + 8,param_1,param_1 + 4);
  }
  *(int *)((int)this + 0x50) = param_1;
  *(undefined4 *)((int)this + 0x40) = DAT_00750064;
  *(undefined4 *)((int)this + 0x3c) = DAT_00750064;
  *(undefined4 *)((int)this + 0x38) = 0;
  ExceptionList = pvStack_c;
  return this;
}


