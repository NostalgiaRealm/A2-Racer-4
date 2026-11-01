
/* ==== FUN_00424a38 @ 00424a38 ==== 
 * signature: undefined __register FUN_00424a38(int * param_1, int param_2)
 * body: 00424a38-00424ab5
 */

void FUN_00424a38(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_1[9] != 0) {
    iVar2 = FUN_0040f080(*(int *)(param_1[9] + 0x134),(int)param_1);
    if (-1 < iVar2) {
      iVar1 = (*(int **)(param_1[9] + 0x134))[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (iVar2 != param_2) {
        FUN_0040ef14(*(int **)(param_1[9] + 0x134),iVar2);
        FUN_0040f0a0(*(int **)(param_1[9] + 0x134),param_2,(int)param_1);
        FUN_00424c10((int)param_1,*(char *)((int)param_1 + 0x47),'\x01');
        piVar3 = (int *)FUN_00439edc(param_1);
        if ((*(byte *)(piVar3 + 0x11) & 4) != 0) {
          FUN_00402ef0(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
        }
      }
    }
  }
  return;
}


