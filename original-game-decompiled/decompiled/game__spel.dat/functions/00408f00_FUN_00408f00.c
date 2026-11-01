
/* ==== FUN_00408f00 @ 00408f00 ==== 
 * signature: undefined __cdecl FUN_00408f00(int param_1)
 * body: 00408f00-00408f8b;00408f8f-00408faf
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00408f8c-00408f8e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00408f00(int param_1)

{
  int iVar1;
  
  *(undefined4 *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x5c + DAT_00715e50) = 0;
  FUN_00426fc0(&DAT_005d3460,(&DAT_005ce9e8)[param_1 * 0xa5],'\0');
  if (*(int *)(&DAT_005cea34 + param_1 * 0x294) == DAT_006fba58) {
    _DAT_006fbab8 = 0x3f800000;
    FUN_0040da60(param_1);
    return;
  }
  iVar1 = FUN_0040dad0(*(int *)(&DAT_005cea34 + param_1 * 0x294));
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_Target_object_is_not_a_rac_005907a0);
  }
  *(undefined4 *)(&DAT_005cea60 + iVar1 * 0x294) = 0x3f800000;
  FUN_0040da60(param_1);
  return;
}


