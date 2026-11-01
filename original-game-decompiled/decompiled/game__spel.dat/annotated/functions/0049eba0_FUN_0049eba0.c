
/* ==== FUN_0049eba0 @ 0049eba0 ==== 
 * signature: int __thiscall FUN_0049eba0(void * this, int param_1)
 * body: 0049eba0-0049ecaf
 */

int __thiscall FUN_0049eba0(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056eb2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a0100((uint)(*(int *)this != 0),(byte *)s__s___d__Sound_sources_not_alloca_005ae998);
  if ((*(int *)((int)this + 4) < 0) || (*(int *)((int)this + 8) <= *(int *)((int)this + 4))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  FUN_004a0100(iVar2,(byte *)s__s___d__Illegal_index_number_of_s_005ae960);
  this_00 = operator_new(0x5c);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004a0100((uint)(*(int *)((int)this + 0xc) != 0),
                 (byte *)s__s___d__Sound_source_list_not_in_005ae90c);
    puVar1 = FUN_0049e1a0(this_00,*(undefined4 *)((int)this + 0xc),param_1,*(int *)((int)this + 4));
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(*(int *)this + *(int *)((int)this + 4) * 4) = puVar1;
  FUN_004a0100((uint)(*(int *)(*(int *)this + *(int *)((int)this + 4) * 4) != 0),
               (byte *)s__s___d__Couldn_t_allocate_sound_s_005ae8e0);
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  ExceptionList = local_c;
  return iVar2;
}


