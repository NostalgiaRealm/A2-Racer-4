
/* ==== FUN_0051ad70 @ 0051ad70 ==== 
 * signature: undefined __cdecl FUN_0051ad70(undefined4 param_1, int param_2, int param_3, undefined4 param_4)
 * body: 0051ad70-0051ae77
 */

void __cdecl FUN_0051ad70(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0051ceb0(param_2,param_3,param_4);
  if (DAT_0074c760 == 0) {
    FUN_0051d850();
  }
  FUN_0051cd30();
  FUN_0051db60(&DAT_0074c058);
  if ((DAT_0074bf90 != 0) || ((DAT_0074be40 != 0 && (DAT_0074bf8c != 0)))) {
    FUN_0052b900();
  }
  if (DAT_0074bfcc != 0) {
    FUN_0052bf40();
  }
  if (-1 < DAT_0074bfc8) {
    FUN_0052bdc0(DAT_0074c6f4,DAT_0074c03c,DAT_0074c6f8);
    if (DAT_0074be40 != 0) {
      iVar1 = DAT_0074c03c + -1;
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          iVar3 = iVar2 + 1;
          iVar2 = DAT_0074c6f8[iVar2];
          *(undefined4 *)(iVar2 + iVar1 * 8) = 0;
          *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = 0;
          iVar2 = DAT_0074c6f8[iVar1];
          *(undefined4 *)(iVar2 + -8 + iVar3 * 8) = 0;
          *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = 0;
          iVar2 = iVar3;
        } while (iVar3 < iVar1);
      }
      iVar2 = DAT_0074c6f8[iVar1];
      *(undefined4 *)(iVar2 + iVar1 * 8) = 0;
      *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = 0x3ff00000;
    }
    FUN_0052aa70(DAT_0074c03c,DAT_0074c6f8);
    FUN_0052be20(DAT_0074c6f8);
  }
  return;
}


