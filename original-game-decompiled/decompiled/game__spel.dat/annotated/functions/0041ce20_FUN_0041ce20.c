
/* ==== FUN_0041ce20 @ 0041ce20 ==== 
 * signature: undefined4 __cdecl FUN_0041ce20(int param_1, int param_2)
 * body: 0041ce20-0041ceb8
 */

undefined4 __cdecl FUN_0041ce20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 * 0xf0 + 0x50 + DAT_00715e50) == 0) {
    iVar3 = *(int *)(DAT_00715f00 + 0xf4 + param_1 * 0x994);
  }
  else {
    iVar3 = *(int *)(DAT_00715f00 + 0xf8 + param_1 * 0x994);
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = FUN_004a6d70(param_1,iVar2,*(int *)(param_2 * 0xf0 + 0x50 + DAT_00715e50));
      if (*(int *)(iVar1 * 0x50 + 0x24 + DAT_00715eb8) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return 0;
}


