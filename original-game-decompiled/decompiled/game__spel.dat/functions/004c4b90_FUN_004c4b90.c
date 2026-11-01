
/* ==== FUN_004c4b90 @ 004c4b90 ==== 
 * signature: undefined4 __cdecl FUN_004c4b90(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * body: 004c4b90-004c4c19;004c4c1d-004c4c24
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4c1a-004c4c1c
 */

undefined4 __cdecl
FUN_004c4b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_6c [18];
  undefined4 local_24 [8];
  undefined4 local_4;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[2] = param_2;
  local_6c[3] = param_1;
  local_4 = param_3;
  local_6c[0] = 0x6c;
  local_6c[1] = 0x1007;
  puVar2 = param_4;
  puVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_3,0);
  if (iVar1 != 0) {
    FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____could_not_create_surfac_005b4288);
  }
  return local_4;
}


