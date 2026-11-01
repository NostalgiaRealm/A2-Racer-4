
/* ==== FUN_004cfc40 @ 004cfc40 ==== 
 * signature: undefined __fastcall FUN_004cfc40(int param_1)
 * body: 004cfc40-004cfd34
 */

void __fastcall FUN_004cfc40(int param_1)

{
  undefined4 *this;
  void *this_00;
  uint uVar1;
  int iVar2;
  facet *pfVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_0056f99e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x5c) + 4) + -0x5c + param_1) = &PTR_FUN_005777a4;
  this = (undefined4 *)(param_1 + -0x54);
  *this = &PTR_FUN_00578ecc;
  local_4 = 2;
  if ((*(char *)(param_1 + -0xc) != '\0') && (*(FILE **)(param_1 + -4) != (FILE *)0x0)) {
    iVar2 = FUN_005588fd(*(FILE **)(param_1 + -4));
    if (iVar2 == 0) {
      FUN_004d0d60(this,0,2);
    }
  }
  this_00 = *(void **)(param_1 + -0x10);
  if (this_00 != (void *)0x0) {
    FUN_004028f0(this_00,'\x01');
    FUN_0054b339(this_00);
  }
  uVar1 = *(uint *)(param_1 + -8);
  local_4._0_1_ = 1;
  if (uVar1 != 0) {
    iVar2 = *(int *)(uVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar1 + 4) = iVar2 + -1;
    }
    puVar4 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  *this = &PTR_FUN_00578f04;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(facet **)(param_1 + -0x20) != (facet *)0x0) {
    pfVar3 = std::locale::facet::_Decref(*(facet **)(param_1 + -0x20));
    if (pfVar3 != (facet *)0x0) {
      (*(code *)**(undefined4 **)pfVar3)(1);
    }
  }
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x5c) + 4) + -8 + (int)this) = &PTR_FUN_00578eac;
  ExceptionList = pvStack_c;
  return;
}


