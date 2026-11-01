
/* ==== FUN_00487640 @ 00487640 ==== 
 * signature: float10 __cdecl FUN_00487640(int param_1, int param_2)
 * body: 00487640-004876d5;004876d7-004876e1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004876d6-004876d6
 */

float10 __cdecl FUN_00487640(int param_1,int param_2)

{
  char cVar1;
  LPCSTR pCVar2;
  int iVar3;
  LPCSTR pCVar4;
  char *pcVar5;
  char *pcVar6;
  float local_88;
  CHAR *local_84;
  CHAR local_80 [128];
  
  pCVar2 = *(LPCSTR *)(param_2 + 4);
  if (pCVar2 == (LPCSTR)0x0) {
    pCVar2 = "";
  }
  pCVar4 = *(LPCSTR *)(param_1 + 4);
  if (pCVar4 == (LPCSTR)0x0) {
    pCVar4 = "";
  }
  FUN_004c3d10(pCVar4,pCVar2,local_80,0x7f);
  iVar3 = FUN_00558d27(local_80,&DAT_005ab2ec);
  if (iVar3 != 0) {
    return (float10)local_88;
  }
  iVar3 = -1;
  pcVar5 = local_80;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar6 + -1) = s___Bad_float_005ab2f0._0_4_;
  *(undefined4 *)(pcVar6 + 3) = s___Bad_float_005ab2f0._4_4_;
  local_84 = local_80;
  *(undefined4 *)(pcVar6 + 7) = s___Bad_float_005ab2f0._8_4_;
  pcVar6[0xb] = s___Bad_float_005ab2f0[0xc];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_84,&DAT_0057d508);
}


