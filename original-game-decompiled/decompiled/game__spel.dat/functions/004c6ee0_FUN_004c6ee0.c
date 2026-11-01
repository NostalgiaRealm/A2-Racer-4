
/* ==== FUN_004c6ee0 @ 004c6ee0 ==== 
 * signature: int __cdecl FUN_004c6ee0(char * param_1, undefined4 param_2, int param_3, int param_4)
 * body: 004c6ee0-004c6f4e
 */

int __cdecl FUN_004c6ee0(char *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  
  if (param_3 < DAT_00740928) {
    iVar3 = param_3 * 0x44;
    do {
      if ((*(int *)((char *)(DAT_00740934 + iVar3) + 0x30) != 0) &&
         (iVar2 = __strcmpi((char *)(DAT_00740934 + iVar3),param_1), iVar2 == 0)) {
        if (param_4 == 0) {
          return param_3;
        }
        bVar1 = FUN_004c6bd0(param_3);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          return param_3;
        }
      }
      param_3 = param_3 + 1;
      iVar3 = iVar3 + 0x44;
    } while (param_3 < DAT_00740928);
  }
  return -1;
}


