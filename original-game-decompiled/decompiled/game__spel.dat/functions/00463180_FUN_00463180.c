
/* ==== FUN_00463180 @ 00463180 ==== 
 * signature: undefined __cdecl FUN_00463180(undefined4 * param_1, int param_2)
 * body: 00463180-0046320c
 */

void __cdecl FUN_00463180(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [5];
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = DAT_006c3530;
  local_24[0] = 1;
  local_24[3] = 0x3f000000;
  local_24[4] = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  local_8 = 0;
  local_4 = 0;
  local_c = param_2;
  *(int *)(&DAT_00709f18 + param_2 * 0x340) = *(int *)(&DAT_00709f18 + param_2 * 0x340) + 1000;
  FUN_00464b50(local_24);
  puVar2 = local_24;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


