
/* ==== FUN_00498760 @ 00498760 ==== 
 * signature: undefined __fastcall FUN_00498760(int * param_1)
 * body: 00498760-00498860;00498864-00498868
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00498861-00498863
 */

void __fastcall FUN_00498760(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_8;
  
  if (DAT_006fb8d0 != 0) {
    FUN_00497ab0(param_1);
    FUN_00498490(param_1);
    iVar1 = FUN_00497cb0(param_1);
    FUN_004c3fa0((byte *)s_Space_left_for_the_other_texture_005ae2f0);
    iVar2 = FUN_00497d40(param_1);
    FUN_004c3fa0((byte *)s_Loading_the_priority_list_005ae32c);
    FUN_00497dc0((int)param_1);
    iVar5 = 0;
    iVar3 = FUN_004c1080(0x73b258);
    if (iVar3 != 0x20) {
      do {
        FUN_004c1080(0x73b258);
        FUN_004c3fa0((byte *)s_Tested_texture_dimension__d_to_m_005ae348);
        iVar5 = iVar5 + 1;
        iVar3 = FUN_004c1080(0x73b258);
      } while (0x20 << ((byte)iVar5 & 0x1f) != iVar3);
    }
    FUN_004c3fa0((byte *)s_Found_a_total_of__d_supported_te_005ae370);
    local_8 = CONCAT31(local_8._1_3_,DAT_0073b4f8);
    uVar4 = FUN_00498030(param_1,(int *)0x20,iVar5 + 1,DAT_006fb978 - iVar1,iVar2,local_8);
    if ((char)uVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d___Error_subdividing_textur_005ae3e0);
    }
  }
  return;
}


