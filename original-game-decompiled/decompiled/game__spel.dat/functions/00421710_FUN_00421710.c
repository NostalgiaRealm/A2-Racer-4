
/* ==== FUN_00421710 @ 00421710 ==== 
 * signature: undefined4 __cdecl FUN_00421710(int param_1)
 * body: 00421710-00421785
 */

undefined4 __cdecl FUN_00421710(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00407d20(*(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50),
                       *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50));
  if (((iVar1 < 1) || (iVar1 < 9)) && ((-1 < iVar1 || (iVar1 == -4 || -iVar1 < 4)))) {
    return 0;
  }
  return 1;
}


