
/* ==== FUN_00454af0 @ 00454af0 ==== 
 * signature: undefined4 __cdecl FUN_00454af0(undefined4 param_1, int param_2)
 * body: 00454af0-00454b65
 */

undefined4 __cdecl FUN_00454af0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056a680;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_2 + 0x28);
  local_8 = 0;
  iVar3 = iVar1 * 0xf0;
  ExceptionList = &local_10;
  uVar2 = FUN_004a7bd0(DAT_00715e50 + iVar3);
  FUN_00479180(iVar1,uVar2);
  if (*(int *)(iVar3 + 0x2c + DAT_00715e50) == 0) {
    *(undefined4 *)(iVar3 + 0x2c + DAT_00715e50) = 1;
  }
  ExceptionList = local_10;
  return 0;
}


