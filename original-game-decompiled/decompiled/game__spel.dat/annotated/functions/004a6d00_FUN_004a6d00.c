
/* ==== FUN_004a6d00 @ 004a6d00 ==== 
 * signature: undefined __cdecl FUN_004a6d00(undefined4 * param_1, int param_2, int param_3, int param_4)
 * body: 004a6d00-004a6d26;004a6d2a-004a6d66
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a6d27-004a6d29
 */

void __cdecl FUN_004a6d00(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((-1 < param_2) && (param_2 <= DAT_00715f04)) {
    iVar4 = FUN_004a6d70(param_2,param_3,param_4);
    puVar1 = (undefined4 *)(iVar4 * 0x50 + 8 + DAT_00715eb8);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    *param_1 = *puVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_chunk___d_005af910);
}


