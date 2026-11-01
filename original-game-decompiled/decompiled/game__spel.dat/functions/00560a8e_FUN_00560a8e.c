
/* ==== FUN_00560a8e @ 00560a8e ==== 
 * signature: int __cdecl FUN_00560a8e(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * body: 00560a8e-00560b4f
 */

int __cdecl
FUN_00560a8e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_28 [2];
  int local_20;
  int local_18;
  uint local_14;
  int local_c;
  
  uVar3 = param_1 - 0x76c;
  if (((int)uVar3 < 0x46) || (0x8a < (int)uVar3)) {
    iVar2 = -1;
  }
  else {
    iVar4 = *(int *)(&DAT_005c9500 + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_00563515();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_005c8c58 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_005c8c5c != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_00563788(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + DAT_005c8c60;
    }
  }
  return iVar2;
}


