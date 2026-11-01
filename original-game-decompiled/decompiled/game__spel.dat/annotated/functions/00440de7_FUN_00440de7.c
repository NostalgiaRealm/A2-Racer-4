
/* ==== FUN_00440de7 @ 00440de7 ==== 
 * signature: undefined __cdecl FUN_00440de7(int param_1, int param_2, int param_3, int param_4, int param_5, undefined4 param_6, undefined4 param_7, int param_8, int param_9, int param_10, int param_11, int param_12, uint param_13)
 * body: 00440de7-00440fa8
 */

void __cdecl
FUN_00440de7(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
            uint param_13)

{
  uint uVar1;
  int iVar2;
  undefined2 extraout_var;
  uint uVar3;
  undefined2 extraout_var_00;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (((DAT_006fb894 == 0) && (DAT_006fb8c8 != 0)) && (param_1 != 2)) {
    FUN_004c88b0(param_1,2,param_2,param_3,param_4,param_5,0);
    iVar2 = FUN_004c48f0(DAT_00740890);
    iVar6 = param_4 - param_2;
    iVar8 = param_5 - param_3;
    param_3 = (param_2 >> 2) * param_3 + param_2 / 2;
    param_4 = iVar8 + 1;
    if (DAT_006cc088 == 0) {
      FUN_00440db0(&DAT_006cbef8,CONCAT22((short)(param_2 >> 0x1f),(undefined2)DAT_0074099c));
      FUN_00440db0(&DAT_006cc084,CONCAT22(extraout_var,(undefined2)DAT_007409a0));
      FUN_00440db0(&DAT_006cbef4,CONCAT22(extraout_var_00,(undefined2)DAT_007409a4));
      DAT_006cc088 = 1;
    }
    uVar3 = FUN_004c81b0(param_13 & 0xff,8);
    uVar3 = uVar3 * 0x10001;
    uVar5 = DAT_006cbef8 & uVar3;
    uVar9 = DAT_006cc084 & uVar3;
    uVar3 = DAT_006cbef4 & uVar3;
    uVar7 = iVar6 + 1 >> 1;
    if (0 < param_4) {
      do {
        if (0 < (int)uVar7) {
          puVar4 = (uint *)(iVar2 + param_3 * 4);
          param_13 = uVar7;
          do {
            uVar1 = *puVar4;
            *puVar4 = ((uVar1 & DAT_006cbef4) + uVar3 | (uVar1 & DAT_006cc084) + uVar9 |
                      (uVar1 & DAT_006cbef8) + uVar5) >> 1;
            param_13 = param_13 - 1;
            puVar4 = puVar4 + 1;
          } while (param_13 != 0);
        }
        param_3 = param_3 + (param_2 >> 2);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    FUN_004c4a20(DAT_00740890,iVar2);
    FUN_004c88b0(2,param_8,param_9,param_10,param_11,param_12,0);
  }
  return;
}


