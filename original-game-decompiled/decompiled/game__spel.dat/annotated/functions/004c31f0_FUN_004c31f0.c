
/* ==== FUN_004c31f0 @ 004c31f0 ==== 
 * signature: void * __thiscall FUN_004c31f0(void * this, uint param_1)
 * body: 004c31f0-004c32e7;004c32eb-004c33c6;004c33ca-004c33ed
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c32e8-004c32ea 004c33c7-004c33c9
 */

void * __thiscall FUN_004c31f0(void *this,uint param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *unaff_EBX;
  void *pvStack_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f823;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  _strncpy((char *)((int)this + 0x14),s_m_d3d_drv_info_005b3398,0x19);
  _strncpy((char *)((int)this + 0x2d),s_c_d3d_drv_info_005b3388,0x19);
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)((int)this + 0xc) == 1) {
      FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
      iVar4 = *(int *)this;
      if (iVar4 != 0) {
        FUN_005586c5(iVar4,0x1d8,*(int *)(iVar4 + -4),FUN_004c2de0);
        FUN_0054b339((int *)(iVar4 + -4));
      }
    }
    if (*(int *)((int)this + 0xc) != 0) {
      FUN_0054b339(*(LPVOID *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_004c3fa0((byte *)s_T_ARRAY___init___16_16s___16_16s_005afa70);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  puVar1 = operator_new(param_1 * 0x1d8 + 4);
  local_4._0_1_ = 1;
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
    FUN_00558643(puVar1,0x1d8,param_1,FUN_004c2d70);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(uint **)this = puVar1;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  pvVar2 = operator_new(param_1);
  *(void **)((int)this + 0x10) = pvVar2;
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  *(undefined4 *)((int)this + 0xc) = 1;
  iVar4 = 0;
  if (0 < (int)param_1) {
    do {
      iVar3 = iVar4 + 1;
      *(undefined1 *)(iVar4 + *(int *)((int)this + 0x10)) = 0;
      iVar4 = iVar3;
    } while (iVar3 < (int)param_1);
  }
  *(undefined4 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x4a) = 0;
  FUN_004c3fa0((byte *)s_______Enumerating_Devices_START___005b3418);
  iVar4 = (**(code **)(*DAT_0073b778 + 0xc))(DAT_0073b778,FUN_004c2e40,this);
  if (iVar4 != 0) {
    FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____D3DError_EnumDevice_____005b3068);
  }
  FUN_004c3fa0((byte *)s_______Enumerating_Devices_EINDE___005b33f0);
  ExceptionList = unaff_EBX;
  return this;
}


