
/* ==== FUN_00421f50 @ 00421f50 ==== 
 * signature: undefined4 __cdecl FUN_00421f50(int param_1)
 * body: 00421f50-00421fbd
 */

undefined4 __cdecl FUN_00421f50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00415d20(param_1);
  FUN_00450b30(param_1,1);
  iVar3 = 0;
  iVar2 = param_1 * 0xf0;
  if (0 < *(int *)(iVar2 + 0xac + DAT_00715e50)) {
    do {
      iVar1 = FUN_004a8600((void *)(iVar2 + DAT_00715e50),iVar3);
      FUN_004b5770(DAT_0073b0d0 + iVar1 * 0xa9);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0xac + DAT_00715e50));
  }
  return 1;
}


