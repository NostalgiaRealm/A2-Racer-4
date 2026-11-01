
/* ==== FUN_00440b60 @ 00440b60 ==== 
 * signature: undefined __cdecl FUN_00440b60(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, byte * param_7)
 * body: 00440b60-00440b8c;00440b90-00440bb3;00440bb7-00440ca4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00440b8d-00440b8f 00440bb4-00440bb6
 */

void __cdecl
FUN_00440b60(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte abStack_190 [400];
  
  if ((param_2 < 0) || (0x54 < param_2)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d___draw_2d_text__illegal_i_0059cb7c);
  }
  if ((0 < param_1) && (param_1 < 3)) {
    iVar2 = (param_2 + (uint)(DAT_006fb894 == 0) * 0x54) * 0xc;
    iVar4 = *(int *)(&DAT_0059c18c + iVar2) + param_5;
    iVar2 = *(int *)(&DAT_0059c190 + iVar2);
    if ((DAT_006fb890 == 1) && (DAT_006fb894 != 0)) {
      iVar4 = iVar4 + 0x140;
    }
    FUN_005590ae(abStack_190,param_7,(undefined4 *)&stack0x00000020);
    FUN_004ca110(param_3);
    if (param_4 == 0) {
      FUN_004ca3d0(param_1,iVar4,iVar2 + param_6,abStack_190);
      return;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + 0x30c) + 8);
    iVar3 = FUN_004ca9f0((char *)abStack_190);
    FUN_004ca3d0(param_1,iVar4 - iVar3 / 2,(iVar2 + param_6) - iVar1 / 2,abStack_190);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d___draw_2d_text__illegal_f_0059cbcc);
}


