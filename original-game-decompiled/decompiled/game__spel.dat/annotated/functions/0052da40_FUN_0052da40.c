
/* ==== FUN_0052da40 @ 0052da40 ==== 
 * signature: undefined __cdecl FUN_0052da40(int param_1, undefined4 * param_2, undefined4 * param_3, double * param_4)
 * body: 0052da40-0052daf7
 */

void __cdecl FUN_0052da40(int param_1,undefined4 *param_2,undefined4 *param_3,double *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if ((*(uint *)(param_1 + 0x50) & 0x800) == 0) {
    iVar3 = *(int *)(iVar1 + 4);
    iVar4 = *(int *)(iVar1 + 8);
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    iVar3 = *(int *)(iVar1 + 8);
  }
  DAT_0074c968 = DAT_0074c968 + 2;
  FUN_005273a0(*(double **)(iVar4 + 8),param_1,(double *)&local_10);
  *param_4 = (double)CONCAT44(uStack_c,local_10);
  uVar2 = FUN_005288f0(*(double **)(iVar4 + 8),param_1,(double)CONCAT44(uStack_c,local_10));
  *param_2 = uVar2;
  FUN_005273a0(*(double **)(iVar3 + 8),param_1,(double *)&local_10);
  if ((double)CONCAT44(uStack_c,local_10) < *param_4) {
    *(undefined4 *)param_4 = local_10;
    *(undefined4 *)((int)param_4 + 4) = uStack_c;
  }
  uVar2 = FUN_005288f0(*(double **)(iVar3 + 8),param_1,(double)CONCAT44(uStack_c,local_10));
  *param_3 = uVar2;
  return;
}


