
/* ==== FUN_004198b0 @ 004198b0 ==== 
 * signature: undefined __cdecl FUN_004198b0(int param_1, char * param_2)
 * body: 004198b0-004198cd;004198d1-004199d9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004198ce-004198d0 004199da-004199e0
 */

void __cdecl FUN_004198b0(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((DAT_005d2ab0 <= param_1) || (param_1 < 0)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Given_index_is_not_a_rac_00593c40);
  }
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = s_NOVICE_00593c6c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 1;
    return;
  }
  iVar1 = 7;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = s_NORMAL_00593c74;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 2;
    return;
  }
  iVar1 = 8;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = s_SKILLED_00593c7c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 4;
    return;
  }
  iVar1 = 0xb;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = s_IRRITATING_00593c84;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 8;
    return;
  }
  iVar1 = 0xb;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = s_AGGRESSIVE_00593c90;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 0x10;
    return;
  }
  iVar1 = 8;
  bVar4 = true;
  pcVar2 = s_PUSHING_00593c9c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *param_2 == *pcVar2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar4);
  if (bVar4) {
    *(uint *)(&DAT_005cea64 + param_1 * 0x294) = *(uint *)(&DAT_005cea64 + param_1 * 0x294) | 0x20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Unknown_racer_parameter___00593cc8);
}


