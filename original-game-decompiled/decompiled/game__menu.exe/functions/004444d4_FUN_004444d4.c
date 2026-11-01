
/* ==== FUN_004444d4 @ 004444d4 ==== 
 * signature: undefined FUN_004444d4(void)
 * body: 004444d4-00444550
 */

int FUN_004444d4(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0044b180(DAT_004ac7d8);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_0044b16c(DAT_004ac7d8,iVar4);
      if (((*(byte *)(iVar2 + 0x21) & 2) == 0) &&
         (iVar3 = FUN_004082b8(param_1,*(char **)(iVar2 + 8)), iVar3 == 0)) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_0044b5a8(DAT_004ac7d8);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_0044b594(DAT_004ac7d8,iVar4);
      iVar3 = FUN_004082b8(param_1,*(char **)(iVar2 + 8));
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}


