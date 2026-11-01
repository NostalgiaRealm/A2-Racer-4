
/* ==== FUN_004bc070 @ 004bc070 ==== 
 * signature: uint __cdecl FUN_004bc070(undefined4 param_1, undefined4 param_2)
 * body: 004bc070-004bc0e2
 */

uint __cdecl FUN_004bc070(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_6c [18];
  undefined4 local_24 [6];
  uint uStack_c;
  undefined4 local_4;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[2] = param_2;
  local_6c[0] = 0x6c;
  local_6c[1] = 0x1007;
  local_4 = 0x10005000;
  local_6c[3] = param_1;
  puVar2 = &DAT_00740968;
  puVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_1,0);
  return ~-(uint)(iVar1 != 0) & uStack_c;
}


