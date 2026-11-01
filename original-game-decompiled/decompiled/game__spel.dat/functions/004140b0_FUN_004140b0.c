
/* ==== FUN_004140b0 @ 004140b0 ==== 
 * signature: undefined __cdecl FUN_004140b0(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 004140b0-00414134
 */

void __cdecl FUN_004140b0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = (&DAT_005d1bac)[param_1 * 0xe];
  if ((iVar1 == 8) || (iVar1 == 10)) {
    *param_2 = 2;
    *param_3 = 1;
    *param_4 = 0;
    return;
  }
  if ((iVar1 != 7) && (iVar1 != 9)) {
    *param_2 = 1;
    *param_3 = 0;
    *param_4 = 2;
    return;
  }
  *param_2 = 0;
  *param_3 = 1;
  *param_4 = 2;
  return;
}


