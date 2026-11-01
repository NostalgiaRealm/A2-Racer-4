
/* ==== FUN_00519e00 @ 00519e00 ==== 
 * signature: uint __cdecl FUN_00519e00(int param_1)
 * body: 00519e00-00519e47
 */

uint __cdecl FUN_00519e00(int param_1)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 2 + 2U | 1; ((int)uVar1 % 3 == 0 || ((int)uVar1 % 5 == 0));
      uVar1 = uVar1 + 2) {
  }
  DAT_0074c6e8 = (int *)FUN_005147d0(uVar1);
  FUN_00514dd0(DAT_0074c6e8,0,uVar1);
  return uVar1;
}


