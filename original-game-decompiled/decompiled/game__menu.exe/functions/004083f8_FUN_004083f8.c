
/* ==== FUN_004083f8 @ 004083f8 ==== 
 * signature: undefined __register FUN_004083f8(int param_1, int * param_2)
 * body: 004083f8-00408444
 */

void FUN_004083f8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00403edc(param_1);
  for (iVar2 = 1; (iVar2 <= iVar1 && (*(byte *)(param_1 + -1 + iVar2) < 0x21)); iVar2 = iVar2 + 1) {
  }
  if (iVar1 < iVar2) {
    FUN_00403c5c(param_2);
  }
  else {
    for (; *(byte *)(param_1 + -1 + iVar1) < 0x21; iVar1 = iVar1 + -1) {
    }
    FUN_004040e4(param_1,iVar2,(iVar1 - iVar2) + 1,param_2);
  }
  return;
}


