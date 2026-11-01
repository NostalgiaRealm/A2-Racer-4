
/* ==== FUN_004ab6d0 @ 004ab6d0 ==== 
 * signature: undefined __thiscall FUN_004ab6d0(void * this, int * param_1)
 * body: 004ab6d0-004ab7b4;004ab7b8-004ab825;004ab829-004ab875
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ab7b5-004ab7b7 004ab826-004ab828
 */

void __thiscall FUN_004ab6d0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  piVar2 = param_1;
  local_4 = 0;
  local_8 = 0;
  FUN_00558b35((char *)((int)this + 0x34),4,1,param_1);
  FUN_00558b35((char *)((int)this + 0x38),4,1,param_1);
  FUN_00558b35((char *)((int)this + 0x3c),4,1,param_1);
  pcVar3 = (char *)((int)this + 0xfc);
  iVar4 = 2;
  do {
    FUN_00558b35(pcVar3,4,1,param_1);
    pcVar3 = pcVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar1 = (int *)((int)this + 0xf0);
  FUN_00558b35((char *)piVar1,4,1,param_1);
  iVar4 = 0;
  if (0 < *piVar1) {
    param_1 = (int *)((int)this + 0x104);
    do {
      FUN_00558b35((char *)&local_4,4,1,piVar2);
      iVar4 = iVar4 + 1;
      *param_1 = local_4;
      param_1 = param_1 + 1;
    } while (iVar4 < *piVar1);
  }
  piVar1 = (int *)((int)this + 0xf4);
  FUN_00558b35((char *)piVar1,4,1,piVar2);
  if (0xc < *piVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____chunk_waypoint_left_ove_005b0358);
  }
  iVar4 = 0;
  if (0 < *piVar1) {
    param_1 = (int *)((int)this + 0x134);
    do {
      FUN_00558b35((char *)&local_8,4,1,piVar2);
      iVar4 = iVar4 + 1;
      *param_1 = local_8;
      param_1 = param_1 + 1;
    } while (iVar4 < *piVar1);
  }
  piVar1 = (int *)((int)this + 0xf8);
  FUN_00558b35((char *)piVar1,4,1,piVar2);
  if (0xc < *piVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____chunk_waypoint_left_ove_005b0358);
  }
  iVar4 = 0;
  if (0 < *piVar1) {
    param_1 = (int *)((int)this + 0x164);
    do {
      FUN_00558b35((char *)&local_8,4,1,piVar2);
      iVar4 = iVar4 + 1;
      *param_1 = local_8;
      param_1 = param_1 + 1;
    } while (iVar4 < *piVar1);
  }
  *(undefined4 *)((int)this + 0x30) = 1;
  return;
}


