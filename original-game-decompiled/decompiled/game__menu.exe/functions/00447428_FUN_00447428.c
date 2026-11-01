
/* ==== FUN_00447428 @ 00447428 ==== 
 * signature: int __register FUN_00447428(int param_1)
 * body: 00447428-00447472
 */

int FUN_00447428(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((*(char *)(param_1 + 0x217) == '\x02') && (*(int *)(param_1 + 0x23c) != 0)) {
    iVar1 = FUN_0044b180(DAT_004ac7d8);
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_0044b16c(DAT_004ac7d8,iVar3);
        if (*(char *)(iVar2 + 0x217) == '\x01') {
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return iVar4;
}


