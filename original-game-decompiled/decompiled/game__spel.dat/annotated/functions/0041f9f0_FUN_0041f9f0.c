
/* ==== FUN_0041f9f0 @ 0041f9f0 ==== 
 * signature: undefined __cdecl FUN_0041f9f0(int param_1)
 * body: 0041f9f0-0041fa2e;0041fa32-0041fb4a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041fa2f-0041fa31
 */

void __cdecl FUN_0041f9f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *this;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 local_1c [4];
  char *pcStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569eea;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (0x12 < param_1)) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Illegal_FSM_object_inde_00594f08);
  }
  iVar8 = param_1 * 0x294;
  ExceptionList = &pvStack_c;
  if ((&DAT_005ce9f8)[param_1 * 0x294] != '\0') {
    ExceptionList = &pvStack_c;
    (&DAT_005ce9f8)[iVar8] = 0;
    local_1c[0] = (undefined1)param_1;
    *(undefined4 *)(&DAT_005cead4 + iVar8) = 0;
    uVar3 = 0xffffffff;
    *(undefined4 *)(&DAT_005cead8 + iVar8) = 0;
    (&DAT_005ceadd)[iVar8] = 0;
    (&DAT_005ceadc)[iVar8] = 1;
    pcVar5 = s__knock_out_00594f30;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    pcStack_18 = (char *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    uVar2 = FUN_00402a00(local_1c,uVar3,'\x01');
    if ((char)uVar2 != '\0') {
      pcVar5 = s__knock_out_00594f30;
      pcVar6 = pcStack_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      pcStack_18[uVar3] = '\0';
      uStack_14 = uVar3;
    }
    iVar8 = (&DAT_005ce9e8)[param_1 * 0xa5];
    puVar7 = local_1c;
    uStack_4 = 0;
    this = (void *)FUN_004891a0();
    FUN_0048a910(this,(int)puVar7,iVar8);
    uStack_4 = 0xffffffff;
    if (pcStack_18 != (char *)0x0) {
      cVar1 = pcStack_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339(pcStack_18 + -1);
      }
      else {
        pcStack_18[-1] = cVar1 + -1;
      }
    }
    pcStack_18 = (char *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  FUN_0041eeb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


