
/* ==== FUN_004c4810 @ 004c4810 ==== 
 * signature: undefined4 __cdecl FUN_004c4810(int param_1)
 * body: 004c4810-004c4836;004c4843-004c48d8;004c48dc-004c48e4
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c4837-004c4842 004c48d9-004c48db
 */

undefined4 __cdecl FUN_004c4810(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 auStack_6c [4];
  undefined4 uStack_5c;
  
  if (param_1 == 0) {
    piVar2 = DAT_007408ac;
    if (DAT_007408bc == 0) {
      return 0;
    }
  }
  else if (param_1 == 1) {
    piVar2 = DAT_007408b0;
    if (DAT_007408c0 == 0) {
      return 0;
    }
  }
  else {
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____unidentified_focus_erro_005b4230);
    }
    piVar2 = DAT_00740890;
    if (DAT_007408c4 == 0) {
      return 0;
    }
  }
  FUN_004c4a60(piVar2);
  puVar3 = auStack_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  auStack_6c[0] = 0x6c;
  iVar1 = (**(code **)(*piVar2 + 100))(piVar2,0,auStack_6c,1,0);
  if (iVar1 == 0) {
    return uStack_5c;
  }
  FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____could_not_lock_surface___005b41ec);
}


