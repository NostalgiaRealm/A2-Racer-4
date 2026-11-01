
/* ==== FUN_004c4c30 @ 004c4c30 ==== 
 * signature: uint __cdecl FUN_004c4c30(undefined4 param_1, undefined4 param_2, uint param_3, undefined4 * param_4, undefined4 param_5)
 * body: 004c4c30-004c4cc9;004c4ccd-004c4cd4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4cca-004c4ccc
 */

uint __cdecl
FUN_004c4c30(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_6c [6];
  undefined4 local_54;
  undefined4 local_24 [8];
  uint local_4;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = param_3 | 0x401008;
  local_6c[3] = param_1;
  local_54 = param_5;
  local_6c[2] = param_2;
  local_6c[0] = 0x6c;
  local_6c[1] = 0x21007;
  puVar2 = param_4;
  puVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_3,0);
  if (iVar1 != 0) {
    hardware(iVar1);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____could_not_create_surfac_005b4288);
  }
  return local_4;
}


