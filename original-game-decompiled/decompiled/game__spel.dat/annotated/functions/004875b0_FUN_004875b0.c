
/* ==== FUN_004875b0 @ 004875b0 ==== 
 * signature: undefined __cdecl FUN_004875b0(int param_1)
 * body: 004875b0-00487628;0048762a-00487630
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00487629-00487629
 */

void __cdecl FUN_004875b0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_84;
  char local_80 [128];
  
  FUN_004c3f10(param_1,local_80,0x7f);
  iVar2 = FUN_00558d27(local_80,&DAT_005ab2d8);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = -1;
  pcVar3 = local_80;
  do {
    pcVar4 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar4 + -1) = s___Bad_float_005ab2dc._0_4_;
  *(undefined4 *)(pcVar4 + 3) = s___Bad_float_005ab2dc._4_4_;
  local_84 = local_80;
  *(undefined4 *)(pcVar4 + 7) = s___Bad_float_005ab2dc._8_4_;
  pcVar4[0xb] = s___Bad_float_005ab2dc[0xc];
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_84,&DAT_0057d508);
}


