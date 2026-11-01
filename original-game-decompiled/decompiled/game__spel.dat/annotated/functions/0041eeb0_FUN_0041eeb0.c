
/* ==== FUN_0041eeb0 @ 0041eeb0 ==== 
 * signature: undefined __cdecl FUN_0041eeb0(int param_1)
 * body: 0041eeb0-0041eeee;0041eef2-0041f064
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0041eeef-0041eef1
 */

void __cdecl FUN_0041eeb0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  void *this;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569eb4;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (0x12 < param_1)) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Illegal_FSM_object_inde_00594de0);
  }
  iVar1 = param_1 * 0x294;
  ExceptionList = &pvStack_c;
  fVar8 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea54 + iVar1) = (float)(fVar8 + (float10)*(float *)(&DAT_005cea54 + iVar1));
  FUN_00421830(param_1);
  FUN_004218b0(param_1);
  FUN_00421d20(param_1);
  HandleAICar(param_1);
  uVar5 = (int)*(uint *)(&DAT_005cec0c + iVar1) >> 0x1f;
  if ((int)((*(uint *)(&DAT_005cec0c + iVar1) ^ uVar5) - uVar5) < 7) {
    pcStack_18 = (char *)0x0;
    auStack_1c[0] = (undefined1)param_1;
    uStack_14 = 0;
    uStack_10 = 0;
    uVar5 = 0xffffffff;
    pcVar6 = s_System_CopAlert_00594e08;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    uVar3 = FUN_00402a00(auStack_1c,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      pcVar6 = s_System_CopAlert_00594e08;
      pcVar7 = pcStack_18;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcStack_18[uVar5] = '\0';
      uStack_14 = uVar5;
    }
    iVar10 = (&DAT_005ce9e8)[param_1 * 0xa5];
    puVar9 = auStack_1c;
    uStack_4 = 0;
    this = (void *)FUN_004891a0();
    FUN_0048a910(this,(int)puVar9,iVar10);
    uStack_4 = 0xffffffff;
    if (pcStack_18 != (char *)0x0) {
      cVar2 = pcStack_18[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_0054b339(pcStack_18 + -1);
      }
      else {
        pcStack_18[-1] = cVar2 + -1;
      }
    }
    pcStack_18 = (char *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  FUN_00435440((&DAT_005ce9e8)[param_1 * 0xa5],0);
  if (0.0 < *(float *)(&DAT_005cec24 + iVar1)) {
    fVar8 = FUN_004a6800(0x7128b0);
    *(float *)(&DAT_005cec24 + iVar1) = (float)((float10)*(float *)(&DAT_005cec24 + iVar1) - fVar8);
  }
  if (0.0 < *(float *)(&DAT_005cec28 + iVar1)) {
    fVar8 = FUN_004a6800(0x7128b0);
    *(float *)(&DAT_005cec28 + iVar1) = (float)((float10)*(float *)(&DAT_005cec28 + iVar1) - fVar8);
  }
  ExceptionList = pvStack_c;
  return;
}


