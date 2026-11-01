
/* ==== FUN_00441a00 @ 00441a00 ==== 
 * signature: undefined __register FUN_00441a00(int param_1, int * param_2)
 * body: 00441a00-00441a62
 */

void FUN_00441a00(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00403c5c(param_2);
  iVar3 = 1;
  iVar1 = FUN_00403edc(param_1);
  if (0 < iVar1) {
    do {
      uVar2 = (uint)*(byte *)(param_1 + -1 + iVar3);
      if (((byte)PTR_DAT_004aba04[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) == 0) {
        if (((*(char *)(param_1 + -1 + iVar3) == '&') && (0 < iVar1 - iVar3)) &&
           (iVar3 = iVar3 + 1, *(char *)(param_1 + -1 + iVar3) != '&')) {
          FUN_00403e04(param_2,(uint)*(byte *)(param_1 + -1 + iVar3));
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar1);
  }
  return;
}


