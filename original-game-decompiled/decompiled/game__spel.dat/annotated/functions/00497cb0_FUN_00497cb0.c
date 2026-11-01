
/* ==== FUN_00497cb0 @ 00497cb0 ==== 
 * signature: int __fastcall FUN_00497cb0(int * param_1)
 * body: 00497cb0-00497d38
 */

int __fastcall FUN_00497cb0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = 0;
  FUN_004c3fa0((byte *)s_Calculating_the_bytes_used_by_si_005adee0);
  iVar2 = 0;
  if (0 < *param_1) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + param_1[5]);
      if (iVar1 != -1) {
        iVar3 = iVar3 + iVar1 * iVar1;
        iVar1 = iVar2;
        if (0 < iVar5) {
          do {
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        FUN_004c3fa0((byte *)s_Single_size_texture__s_005adf14);
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar2 < *param_1);
  }
  uVar4 = DAT_00740974 >> 3;
  FUN_004c3fa0((byte *)s_Total_bytes_used___d_005adf2c);
  return uVar4 * iVar3;
}


