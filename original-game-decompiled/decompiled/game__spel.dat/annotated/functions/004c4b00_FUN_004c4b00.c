
/* ==== FUN_004c4b00 @ 004c4b00 ==== 
 * signature: undefined4 __cdecl FUN_004c4b00(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004c4b00-004c4b75;004c4b79-004c4b80
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4b76-004c4b78
 */

undefined4 __cdecl FUN_004c4b00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_6c [26];
  undefined4 local_4;
  
  puVar1 = local_6c;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_6c[2] = param_2;
  local_4 = param_3;
  local_6c[0] = 0x6c;
  local_6c[1] = 7;
  local_6c[3] = param_1;
  iVar2 = (**(code **)(*DAT_0074088c + 0x18))(DAT_0074088c,local_6c,&param_3,0);
  if (iVar2 != 0) {
    hardware(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____could_not_create_surfac_005b4288);
  }
  return local_4;
}


