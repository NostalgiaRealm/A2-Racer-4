
/* ==== FUN_00407bbc @ 00407bbc ==== 
 * signature: undefined __register FUN_00407bbc(int param_1, int * param_2)
 * body: 00407bbc-00407c08
 */

void FUN_00407bbc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00403c38(param_1);
  for (iVar2 = 1; (iVar2 <= iVar1 && (*(byte *)(param_1 + -1 + iVar2) < 0x21)); iVar2 = iVar2 + 1) {
  }
  if (iVar1 < iVar2) {
    FUN_004039b8(param_2);
  }
  else {
    for (; *(byte *)(param_1 + -1 + iVar1) < 0x21; iVar1 = iVar1 + -1) {
    }
    FUN_00403e40(param_1,iVar2,(iVar1 - iVar2) + 1,param_2);
  }
  return;
}


