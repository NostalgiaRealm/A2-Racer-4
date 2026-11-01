
/* ==== FUN_00538930 @ 00538930 ==== 
 * signature: undefined __cdecl FUN_00538930(int * param_1, int param_2, int param_3)
 * body: 00538930-00538a53
 */

void __cdecl FUN_00538930(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  iVar2 = FUN_005146b0((int *)*param_1,param_2);
  FUN_005143b0((int *)*param_1,iVar2);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
    while (iVar1 != 0) {
      piVar3 = piVar3 + 1;
      if (iVar1 == param_3) {
        DAT_0074c930 = DAT_0074c930 + 1;
        if ((param_1[3] & 0x4000000U) != 0) {
          FUN_005349b0((int)param_1);
        }
        FUN_00518240(param_1);
        if (DAT_0074be68 < 2) {
          return;
        }
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_renameridgevertex__ridge_r_d_d_005c6cfc);
        return;
      }
      if ((*(uint *)(iVar1 + 0x14) & 0xffffff) < (*(uint *)(param_3 + 0x14) & 0xffffff)) break;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar3;
    }
  }
  FUN_00513f70(param_1,iVar5,param_3);
  uVar4 = iVar2 - iVar5 >> 0x1f;
  uVar4 = (iVar2 - iVar5 ^ uVar4) - uVar4 & 0x80000001;
  bVar6 = uVar4 == 0;
  if ((int)uVar4 < 0) {
    bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar6) {
    if (2 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_renameridgevertex__swapped_th_005c6d48);
    }
    iVar1 = param_1[1];
    param_1[1] = param_1[2];
    param_1[2] = iVar1;
  }
  return;
}


