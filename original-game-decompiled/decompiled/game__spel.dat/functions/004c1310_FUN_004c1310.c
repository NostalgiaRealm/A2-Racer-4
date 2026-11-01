
/* ==== FUN_004c1310 @ 004c1310 ==== 
 * signature: uint __thiscall FUN_004c1310(void * this, uint param_1)
 * body: 004c1310-004c1330;004c1334-004c139d;004c13a7-004c13e4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c1331-004c1333 004c139e-004c13a6
 */

uint __thiscall FUN_004c1310(void *this,uint param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 0x198) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____error_description_is_no_005b2ca8);
  }
  if ((int)param_1 < 0x101) {
    if (param_1 != 0x100) {
      switch(param_1) {
      case 8:
        param_1 = 0x800;
        break;
      default:
        goto switchD_004c1351_caseD_9;
      case 0x10:
        param_1 = 0x400;
        break;
      case 0x18:
        param_1 = 0x200;
        break;
      case 0x20:
        param_1 = 0x100;
      }
    }
  }
  else if (((param_1 != 0x200) && (param_1 != 0x400)) && (param_1 != 0x800)) {
switchD_004c1351_caseD_9:
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____unknown_render_bitdepth_005b2cf4);
  }
  bVar1 = FUN_004c1030((int)this);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((*(byte *)((int)this + 0xd0) & 0x80) != 0) {
      return *(uint *)((int)this + 0x168) & param_1;
    }
  }
  else if ((*(byte *)((int)this + 4) & 0x80) != 0) {
    return *(uint *)((int)this + 0x9c) & param_1;
  }
  return 0xffffffff;
}


