
/* ==== FUN_00441e00 @ 00441e00 ==== 
 * signature: undefined __stdcall FUN_00441e00(int param_1, int param_2, int param_3, int param_4, undefined1 param_5)
 * body: 00441e00-00441e58
 */

void FUN_00441e00(int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(DAT_0073b1b0 + 0x28);
  iVar2 = *(int *)(DAT_0073b1b0 + 0x24);
  iVar5 = -5;
  do {
    iVar3 = (param_2 + -5) * param_4 + iVar5 + param_1;
    iVar4 = 10;
    do {
      if ((-1 < iVar3) && (iVar3 < iVar1 * param_4 + iVar2)) {
        *(undefined1 *)(iVar3 + param_3) = param_5;
      }
      iVar3 = iVar3 + param_4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  return;
}


