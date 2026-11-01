
/* ==== FUN_004af230 @ 004af230 ==== 
 * signature: int __thiscall FUN_004af230(void * this, int param_1, float param_2, undefined4 param_3, float param_4)
 * body: 004af230-004af25c;004af260-004af518
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004af25d-004af25f
 */

int __thiscall FUN_004af230(void *this,int param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *(int *)((int)this + 8);
  if ((param_1 < 0) || (iVar2 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Illegal_start_chunk___d_005b0714);
  }
  piVar4 = *(int **)((int)this + 4);
  piVar3 = piVar4 + param_1;
  iVar1 = DAT_00715f00 + piVar4[param_1] * 0x994;
  if ((param_2 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
      (param_4 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40) <= 0.0) {
    for (; param_1 < iVar2; param_1 = param_1 + 1) {
      iVar1 = DAT_00715f00 + *piVar3 * 0x994;
      if (0.0 < (param_2 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
                (param_4 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40)) goto LAB_004af500;
      piVar3 = piVar3 + 1;
    }
  }
  else {
    for (; -1 < param_1; param_1 = param_1 + -1) {
      iVar1 = DAT_00715f00 + *piVar3 * 0x994;
      if ((param_2 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
          (param_4 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40) < 0.0) {
        return param_1;
      }
      piVar3 = piVar3 + -1;
    }
  }
  if (param_1 == 0) {
    param_1 = iVar2 + -1;
    if (-1 < param_1) {
      piVar4 = piVar4 + param_1;
      do {
        iVar2 = DAT_00715f00 + *piVar4 * 0x994;
        if ((param_2 - *(float *)(iVar2 + 0x34)) * *(float *)(iVar2 + 0x48) -
            (param_4 - *(float *)(iVar2 + 0x3c)) * *(float *)(iVar2 + 0x40) < 0.0) {
          return param_1;
        }
        param_1 = param_1 + -1;
        piVar4 = piVar4 + -1;
      } while (-1 < param_1);
    }
  }
  else {
    param_1 = 0;
    if (0 < iVar2) {
      while (iVar1 = DAT_00715f00 + *piVar4 * 0x994,
            (param_2 - *(float *)(iVar1 + 0x34)) * *(float *)(iVar1 + 0x48) -
            (param_4 - *(float *)(iVar1 + 0x3c)) * *(float *)(iVar1 + 0x40) <= 0.0) {
        param_1 = param_1 + 1;
        piVar4 = piVar4 + 1;
        if (iVar2 <= param_1) {
          return param_1;
        }
      }
LAB_004af500:
      param_1 = param_1 + -1;
      if (param_1 == -1) {
        return iVar2 + -1;
      }
    }
  }
  return param_1;
}


