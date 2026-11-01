
/* ==== FUN_00469dc0 @ 00469dc0 ==== 
 * signature: undefined __thiscall FUN_00469dc0(void * this, int param_1)
 * body: 00469dc0-00469e70
 */

void __thiscall FUN_00469dc0(void *this,int param_1)

{
  int iVar1;
  
  FUN_004c3fa0((byte *)s_Adding_animation_type_object__d_005a7cd0);
  if ((*(int *)((int)this + 0x408) < 0) || (0x3f < *(int *)((int)this + 0x408))) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  FUN_004a6980(iVar1,(byte *)s__s___d__Illegal_index_number_of_o_005a7d18);
  iVar1 = FUN_00469d70(this,param_1);
  FUN_004a6980((uint)(iVar1 != -1),(byte *)s__s___d__Can_t_find_animation_typ_005a7d84);
  *(int *)(*(int *)((int)this + 0x408) * 0x10 + 8 + (int)this) = param_1;
  *(int *)((*(int *)((int)this + 0x408) + 1) * 0x10 + (int)this) = iVar1;
  *(undefined4 *)(*(int *)((int)this + 0x408) * 0x10 + 0xc + (int)this) = 0;
  *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) + 1;
  return;
}


