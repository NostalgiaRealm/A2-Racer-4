
/* ==== FUN_004cd3b0 @ 004cd3b0 ==== 
 * signature: undefined __cdecl FUN_004cd3b0(undefined1 * param_1)
 * body: 004cd3b0-004cd481
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004cd482-004cd492
 */

void __cdecl FUN_004cd3b0(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  CHAR local_104 [260];
  
  iVar3 = 0;
  if (param_1 == (undefined1 *)0x0) {
    DAT_00740de8 = &DAT_005b3494;
    FUN_005587a3(local_104,(byte *)s_x___s_005b66c8);
  }
  else {
    DAT_00740de8 = param_1;
    FUN_005587a3(local_104,(byte *)s_x__s__s_005b66d0);
  }
  iVar1 = FUN_0055a328(&DAT_005b66c0);
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)FUN_0055a328(&DAT_005b66c0);
    DAT_00740dec = *puVar2;
    return;
  }
  do {
    if (iVar3 == -1) goto LAB_004cd478;
    iVar3 = FUN_004cca00(0);
    DAT_00740dec = (CHAR)iVar3;
    local_104[0] = DAT_00740dec;
    iVar1 = FUN_0055926e(local_104,0);
  } while (iVar1 == -1);
  iVar3 = FUN_004cca00(1);
  if (iVar3 != -1) {
    return;
  }
LAB_004cd478:
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s_program_installation_check_faile_005b6570);
}


