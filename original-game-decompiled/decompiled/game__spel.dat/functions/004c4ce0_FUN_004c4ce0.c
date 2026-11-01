
/* ==== FUN_004c4ce0 @ 004c4ce0 ==== 
 * signature: bool __cdecl FUN_004c4ce0(int param_1)
 * body: 004c4ce0-004c4d1d;004c4d2a-004c4d90
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4d1e-004c4d29
 */

bool __cdecl FUN_004c4ce0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_6c [27];
  
  if ((DAT_007408e0 != 0) && (param_1 == 0)) {
    return false;
  }
  piVar2 = DAT_007408ac;
  if (((param_1 != 0) && (piVar2 = DAT_007408b0, param_1 != 1)) &&
     (piVar2 = DAT_00740890, param_1 != 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____unidentified_focus_erro_005b4230);
  }
  puVar3 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_6c[0] = 0x6c;
  FUN_004c4a60(piVar2);
  iVar1 = (**(code **)(*piVar2 + 100))(piVar2,0,local_6c,1,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*piVar2 + 0x80))(piVar2,0);
    return (bool)('\x01' - (iVar1 != 0));
  }
  return false;
}


