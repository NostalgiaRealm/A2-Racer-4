
/* ==== FUN_004c4a80 @ 004c4a80 ==== 
 * signature: undefined4 __cdecl FUN_004c4a80(undefined4 param_1, undefined4 param_2)
 * body: 004c4a80-004c4aef;004c4af3-004c4afa
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4af0-004c4af2
 */

undefined4 __cdecl FUN_004c4a80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_6c [24];
  undefined4 uStack_c;
  undefined4 local_4;
  
  puVar1 = local_6c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_6c[2] = param_2;
  local_6c[3] = param_1;
  local_6c[0] = 0x6c;
  local_6c[1] = 7;
  local_4 = 0x800;
  iVar2 = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_1,0);
  if (iVar2 != 0) {
    FUN_004c4400(iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____could_not_create_surfac_005b4288);
  }
  return uStack_c;
}


