
/* ==== FUN_0040a66c @ 0040a66c ==== 
 * signature: int __register FUN_0040a66c(int param_1, int * param_2)
 * body: 0040a66c-0040a6a5
 */

int FUN_0040a66c(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  while( true ) {
    iVar3 = FUN_00403edc(param_1);
    if ((iVar3 < *param_2) ||
       (cVar1 = *(char *)(param_1 + -1 + *param_2),
       iVar3 = CONCAT31((int3)((uint)*param_2 >> 8),cVar1 + -0x3a), (byte)(cVar1 - 0x30U) < 10))
    break;
    uVar2 = (uint)*(byte *)(param_1 + -1 + *param_2);
    if (((byte)(&DAT_004aa118)[(int)uVar2 >> 3] >> (uVar2 & 7) & 1) != 0) {
      *param_2 = *param_2 + 1;
    }
    *param_2 = *param_2 + 1;
  }
  return iVar3;
}


