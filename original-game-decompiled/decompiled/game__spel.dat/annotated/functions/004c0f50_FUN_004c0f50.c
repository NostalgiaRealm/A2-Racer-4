
/* ==== FUN_004c0f50 @ 004c0f50 ==== 
 * signature: undefined __thiscall FUN_004c0f50(void * this, undefined4 param_1)
 * body: 004c0f50-004c0fa8;004c0fac-004c0fb1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c0fa9-004c0fab
 */

void __thiscall FUN_004c0f50(void *this,undefined4 param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = *(int *)((int)this + 4);
  local_c = *(int *)((int)this + 8);
  local_8 = *(int *)((int)this + 0xc) + local_10;
  local_4 = *(int *)((int)this + 0x10) + local_c;
  iVar1 = (**(code **)(**(int **)((int)this + 0x2c) + 0x30))
                    (*(int **)((int)this + 0x2c),1,&local_10,param_1);
  if (iVar1 != 0) {
    FUN_004bb290(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d___D3DError_Clearing_z_buff_005b2c7c);
  }
  return;
}


