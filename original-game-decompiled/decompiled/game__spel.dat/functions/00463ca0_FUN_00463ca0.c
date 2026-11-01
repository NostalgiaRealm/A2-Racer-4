
/* ==== FUN_00463ca0 @ 00463ca0 ==== 
 * signature: undefined4 __cdecl FUN_00463ca0(int param_1)
 * body: 00463ca0-00463d1c
 */

undefined4 __cdecl FUN_00463ca0(int param_1)

{
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)((&DAT_0070a244)[param_1 * 0xd0] * 0xf0 + 0x5c + DAT_00715e50) = 1;
  local_14 = (&DAT_0070a244)[param_1 * 0xd0];
  local_24[0] = 1;
  local_18 = 0x3f000000;
  local_10 = 0xffffffff;
  local_c = param_1;
  local_8 = 1;
  local_4 = 0;
  FUN_00464b50(local_24);
  return 1;
}


