
/* ==== FUN_0042e998 @ 0042e998 ==== 
 * signature: undefined __register FUN_0042e998(int * param_1, int param_2)
 * body: 0042e998-0042ea15
 */

void FUN_0042e998(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_1[9] != 0) {
    iVar2 = FUN_0041030c(*(int *)(param_1[9] + 0x134),(int)param_1);
    if (-1 < iVar2) {
      iVar1 = (*(int **)(param_1[9] + 0x134))[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (iVar2 != param_2) {
        FUN_00410150(*(int **)(param_1[9] + 0x134),iVar2);
        FUN_0041032c(*(int **)(param_1[9] + 0x134),param_2,(int)param_1);
        FUN_0042eb70((int)param_1,*(char *)((int)param_1 + 0x47),'\x01');
        piVar3 = (int *)FUN_0044488c(param_1);
        if ((*(byte *)(piVar3 + 0x11) & 4) != 0) {
          FUN_00403178(piVar3,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
        }
      }
    }
  }
  return;
}


