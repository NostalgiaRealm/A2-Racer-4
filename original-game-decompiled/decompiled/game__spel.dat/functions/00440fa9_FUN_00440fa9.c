
/* ==== FUN_00440fa9 @ 00440fa9 ==== 
 * signature: undefined __cdecl FUN_00440fa9(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8, int param_9)
 * body: 00440fa9-00440ff2;00440ff6-0044105e;00441062-004412ba
 */

void __cdecl
FUN_00440fa9(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  int iStack00000028;
  int iStack0000002c;
  int iStack00000030;
  int in_stack_00000034;
  
  if (((DAT_006fb894 == 0) && (DAT_006fb8c8 != 0)) && (param_1 != 2)) {
    if ((param_2 < 0) || (0x54 < param_2)) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__draw_2d_translucent_item__illeg_0059cc6c);
    }
    iVar3 = (param_2 + 0x54) * 0xc;
    iVar10 = *(int *)(&DAT_0059c190 + iVar3) + param_6;
    iVar8 = *(int *)(&DAT_0059c18c + iVar3) + param_5;
    if (*(int *)(*(int *)(&DAT_0059c188 + iVar3) * 0xc + DAT_00740a1c) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__draw_2d_translucent_item__Frame_0059cc9c);
    }
    iVar4 = *(int *)(*(int *)(*(int *)(&DAT_0059c188 + iVar3) * 0xc + 8 + DAT_00740a1c) + 4 +
                    param_3 * 8) * 0x20;
    iVar3 = *(int *)(iVar4 + 8 + DAT_00740d44);
    iVar4 = *(int *)(iVar4 + 0xc + DAT_00740d44);
    if (param_4 != 0) {
      iVar8 = iVar8 - (iVar3 >> 1);
      iVar10 = iVar10 - (iVar4 >> 1);
    }
    iVar3 = iVar3 + iVar8;
    iVar4 = iVar4 + iVar10;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (DAT_005b3798 <= iVar3) {
      iVar3 = DAT_005b3798;
    }
    if (DAT_005b379c <= iVar4) {
      iVar4 = DAT_005b379c;
    }
    iVar5 = iVar4 - iVar10;
    if ((-1 < iVar3 - iVar8) && (-1 < iVar5)) {
      FUN_004c88b0(param_1,2,iVar8,iVar10,iVar3,iVar4,0);
      iVar6 = FUN_004c48f0(DAT_00740890);
      iVar4 = (param_9 >> 2) * iVar10 + iVar8 / 2;
      iStack00000028 = iVar4;
      iVar7 = FUN_004c48f0(*(int **)(param_1 + 4 + DAT_00740d44));
      iStack00000030 = 0;
      if (DAT_006cc08c == 0) {
        FUN_00440db0(&DAT_006cc090,CONCAT22((short)(iVar3 >> 0x12),(undefined2)DAT_0074099c));
        FUN_00440db0(&DAT_006cc094,CONCAT22(extraout_var_00,(undefined2)DAT_007409a0));
        FUN_00440db0(&DAT_006cc098,CONCAT22(extraout_var,(undefined2)DAT_007409a4));
        DAT_006cc08c = 1;
      }
      iVar9 = iVar3 - iVar8 >> 1;
      if (0 < in_stack_00000034) {
        iStack0000002c = in_stack_00000034;
        do {
          if (0 < iVar9) {
            puVar12 = (uint *)(iVar7 + iStack00000030 * 4);
            puVar11 = (uint *)(iVar6 + iVar4 * 4);
            in_stack_00000034 = iVar9;
            do {
              uVar1 = *puVar12;
              uVar2 = *puVar11;
              puVar12 = puVar12 + 1;
              *puVar11 = ((DAT_006cc098 & uVar2) + (DAT_006cc098 & uVar1) |
                          (DAT_006cc094 & uVar2) + (DAT_006cc094 & uVar1) |
                         (DAT_006cc090 & uVar2) + (DAT_006cc090 & uVar1)) >> 1;
              in_stack_00000034 = in_stack_00000034 + -1;
              iVar8 = param_3;
              iVar10 = param_4;
              puVar11 = puVar11 + 1;
              iVar4 = iStack00000028;
            } while (in_stack_00000034 != 0);
          }
          iVar4 = iVar4 + (param_9 >> 2);
          iStack00000030 = iStack00000030 + (iVar3 >> 2);
          iStack0000002c = iStack0000002c + -1;
          iStack00000028 = iVar4;
        } while (iStack0000002c != 0);
      }
      FUN_004c4a20(DAT_00740890,iVar6);
      FUN_004c4a20(*(int **)(param_1 + 4 + DAT_00740d44),iVar7);
      FUN_004c88b0(2,param_8,iVar8,iVar10,param_5,iVar5,0);
    }
  }
  return;
}


