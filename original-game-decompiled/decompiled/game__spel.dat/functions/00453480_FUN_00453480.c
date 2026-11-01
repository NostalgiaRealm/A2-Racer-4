
/* ==== FUN_00453480 @ 00453480 ==== 
 * signature: undefined4 __cdecl FUN_00453480(int param_1, int * param_2)
 * body: 00453480-004534fd
 */

undefined4 __cdecl FUN_00453480(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b2b10(param_1,DAT_006fba58);
  if (iVar1 != 0) {
    *param_2 = DAT_006fba58;
    return 1;
  }
  iVar1 = *(int *)(DAT_006fba58 * 0xf0 + 0x44 + DAT_00715e50);
  if (iVar1 != -1) {
    iVar1 = FUN_004b2b10(param_1,iVar1);
    if (iVar1 != 0) {
      *param_2 = *(int *)(DAT_006fba58 * 0xf0 + 0x44 + DAT_00715e50);
      return 1;
    }
  }
  return 0;
}


