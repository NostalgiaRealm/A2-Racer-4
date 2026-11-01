
/* ==== FUN_0040b260 @ 0040b260 ==== 
 * signature: int __register FUN_0040b260(int param_1, int param_2)
 * body: 0040b260-0040b2ad
 */

int FUN_0040b260(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    iVar1 = FUN_00403c38(param_1);
    if ((param_2 <= iVar1) && (iVar3 = param_2, DAT_004475b4 != '\0')) {
      iVar1 = 1;
      iVar3 = 0;
      if (0 < param_2) {
        do {
          uVar2 = (uint)*(byte *)(param_1 + -1 + iVar1);
          if (((byte)(&DAT_00446108)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar1 <= param_2);
      }
    }
  }
  return iVar3;
}


