
/* ==== FUN_00409834 @ 00409834 ==== 
 * signature: bool __register FUN_00409834(int param_1, int * param_2, ushort * param_3, char * param_4)
 * body: 00409834-004098c4
 */

bool FUN_00409834(int param_1,int *param_2,ushort *param_3,char *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  *param_4 = '\0';
  FUN_00409810(param_1,param_2);
  iVar3 = *param_2;
  uVar1 = 0;
  while( true ) {
    iVar2 = FUN_00403c38(param_1);
    if (((iVar2 < iVar3) || (9 < (byte)(*(char *)(param_1 + -1 + iVar3) - 0x30U))) || (999 < uVar1))
    break;
    uVar1 = uVar1 * 10 + (*(byte *)(param_1 + -1 + iVar3) - 0x30);
    iVar3 = iVar3 + 1;
  }
  iVar2 = *param_2;
  if (iVar2 < iVar3) {
    *param_4 = (char)iVar3 - (char)*param_2;
    *param_2 = iVar3;
    *param_3 = uVar1;
  }
  return iVar2 < iVar3;
}


