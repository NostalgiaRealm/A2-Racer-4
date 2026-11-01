
/* ==== FUN_00439b24 @ 00439b24 ==== 
 * signature: undefined FUN_00439b24(void)
 * body: 00439b24-00439ba0
 */

int FUN_00439b24(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_004401f8(DAT_004477c8);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_004401e4(DAT_004477c8,iVar4);
      if (((*(byte *)(iVar2 + 0x21) & 2) == 0) &&
         (iVar3 = FUN_00407a7c(param_1,*(char **)(iVar2 + 8)), iVar3 == 0)) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_00440608(DAT_004477c8);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_004405f4(DAT_004477c8,iVar4);
      iVar3 = FUN_00407a7c(param_1,*(char **)(iVar2 + 8));
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}


