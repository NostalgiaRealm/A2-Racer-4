
/* ==== FUN_00450900 @ 00450900 ==== 
 * signature: int __cdecl FUN_00450900(char * param_1)
 * body: 00450900-00450943
 */

int __cdecl FUN_00450900(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_006fbdd0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_004508d0(param_1,(char *)(iVar2 + DAT_006fbdd4));
      if (iVar1 != 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < DAT_006fbdd0);
  }
  return -1;
}


