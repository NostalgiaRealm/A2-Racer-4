
/* ==== FUN_0040bfa0 @ 0040bfa0 ==== 
 * signature: undefined __register FUN_0040bfa0(int param_1, int param_2, int * param_3, int * param_4)
 * body: 0040bfa0-0040c012
 */

void FUN_0040bfa0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_00403edc(param_1);
  iVar4 = 1;
  iVar2 = 1;
  while ((iVar2 < iVar1 && (iVar4 < param_2))) {
    iVar4 = iVar4 + 1;
    uVar3 = (uint)*(byte *)(param_1 + -1 + iVar2);
    if (((byte)(&DAT_004aa118)[(int)uVar3 >> 3] >> (uVar3 & 7) & 1) != 0) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  }
  if (((iVar4 == param_2) && (iVar2 < iVar1)) &&
     (uVar3 = (uint)*(byte *)(param_1 + -1 + iVar2),
     ((byte)(&DAT_004aa118)[(int)uVar3 >> 3] >> (uVar3 & 7) & 1) != 0)) {
    iVar2 = iVar2 + 1;
  }
  *param_3 = iVar4;
  *param_4 = iVar2;
  return;
}


