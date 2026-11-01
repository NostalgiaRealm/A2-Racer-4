
/* ==== FUN_00415c00 @ 00415c00 ==== 
 * signature: undefined __register FUN_00415c00(int param_1, undefined4 param_2, char param_3)
 * body: 00415c00-00415c4e
 */

void FUN_00415c00(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_2 == '\0') {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffef;
  }
  else {
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x10;
  }
  if (param_3 != '\0') {
    iVar1 = FUN_00415b9c(param_1);
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_00415b70(param_1,iVar3);
        FUN_00415c00(iVar2,param_2,'\x01');
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}


