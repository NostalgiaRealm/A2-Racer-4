
/* ==== FUN_0040bf50 @ 0040bf50 ==== 
 * signature: int __register FUN_0040bf50(int param_1, int param_2)
 * body: 0040bf50-0040bf9d
 */

int FUN_0040bf50(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    iVar1 = FUN_00403edc(param_1);
    if ((param_2 <= iVar1) && (iVar3 = param_2, DAT_004ac5bc != '\0')) {
      iVar1 = 1;
      iVar3 = 0;
      if (0 < param_2) {
        do {
          uVar2 = (uint)*(byte *)(param_1 + -1 + iVar1);
          if (((byte)(&DAT_004aa118)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
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


