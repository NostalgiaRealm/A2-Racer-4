
/* ==== FUN_004cba70 @ 004cba70 ==== 
 * signature: int __cdecl FUN_004cba70(int param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 004cba70-004cbb09
 */

int __cdecl FUN_004cba70(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 < param_5) {
    uVar1 = FUN_004cba50(param_1,param_2 + 1,param_3,param_5);
    uVar2 = FUN_004cba50(param_1,param_2,param_3,param_5);
    if (CONCAT31(extraout_var_00,uVar2) == CONCAT31(extraout_var,uVar1)) {
      do {
        if ((param_4 <= iVar3) || (0x3e < iVar3)) break;
        iVar3 = iVar3 + 1;
        uVar1 = FUN_004cba50(param_1,iVar3 + param_2 + 1,param_3,param_5);
        uVar2 = FUN_004cba50(param_1,iVar3 + param_2,param_3,param_5);
      } while (CONCAT31(extraout_var_02,uVar2) == CONCAT31(extraout_var_01,uVar1));
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  return 1;
}


