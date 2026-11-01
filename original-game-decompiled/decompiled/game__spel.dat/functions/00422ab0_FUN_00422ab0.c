
/* ==== FUN_00422ab0 @ 00422ab0 ==== 
 * signature: undefined4 __cdecl FUN_00422ab0(int param_1, undefined4 * param_2)
 * body: 00422ab0-00422add
 */

undefined4 __cdecl FUN_00422ab0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 * 0x50 + 8 + DAT_00715eb8);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return 1;
}


