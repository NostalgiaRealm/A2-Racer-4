
/* ==== FUN_0041cec0 @ 0041cec0 ==== 
 * signature: undefined4 __cdecl FUN_0041cec0(int param_1, int param_2)
 * body: 0041cec0-0041cfad
 */

undefined4 __cdecl FUN_0041cec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1;
  iVar5 = param_2 * 0xf0;
  if (*(int *)(iVar5 + 0x50 + DAT_00715e50) == 0) {
    param_2 = *(int *)(DAT_00715f00 + 0xf4 + param_1 * 0x994);
  }
  else {
    param_2 = *(int *)(DAT_00715f00 + 0xf8 + param_1 * 0x994);
  }
  param_1 = 0;
  if (0 < param_2) {
    do {
      iVar3 = FUN_004a6d70(iVar2,param_1,*(int *)(iVar5 + 0x50 + DAT_00715e50));
      iVar1 = *(int *)(iVar3 * 0x50 + 0x24 + DAT_00715eb8);
      if ((iVar1 != 0) && (iVar6 = 0, 0 < iVar1)) {
        do {
          iVar4 = FUN_004ab0d0((void *)(DAT_00715eb8 + iVar3 * 0x50),iVar6);
          iVar4 = FUN_0040dad0(iVar4);
          if (iVar4 == -1) {
            return 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return 0;
}


