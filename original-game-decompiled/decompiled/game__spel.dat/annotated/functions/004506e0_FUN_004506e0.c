
/* ==== FUN_004506e0 @ 004506e0 ==== 
 * signature: undefined __stdcall FUN_004506e0(void)
 * body: 004506e0-0045079f;004507a3-004507d5;004507d9-00450837
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004507a0-004507a2 004507d6-004507d8
 */

void FUN_004506e0(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char cVar10;
  
  iVar1 = FUN_00447540();
  cVar10 = iVar1 == 0;
  iVar1 = FUN_00447590();
  uVar2 = FUN_0049f880(&DAT_006fbb58,2000,0x1c2,iVar1,cVar10);
  if ((char)uVar2 == '\0') {
    FUN_004c3fa0((byte *)s_Warning__Could_not_init_SndEngin_005a25ec);
    FUN_00447500(0);
  }
  FUN_004489a0(&DAT_006fa558,(byte *)s_SOUND_INI_005a264c,(byte *)s_Sound_Settings_005a263c);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Sound_Settings_005a2658);
  pcVar3 = *(char **)(iVar1 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_0049ff60(&DAT_006fbb58,pcVar3);
  iVar1 = DAT_006fbb70;
  DAT_006fbdd0 = DAT_006fbb70;
  if (DAT_006fbb70 != 0) {
    DAT_006fbdd4 = operator_new(DAT_006fbb70 * 0x44);
    if (DAT_006fbdd4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s___d__Couldn_t_allocate_static_005a268c);
    }
    iVar7 = 0;
    if (0 < iVar1) {
      iVar8 = 0;
      do {
        iVar4 = FUN_0049ef20(&DAT_006fbb6c,iVar7);
        if (0x3f < *(uint *)(iVar4 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s___d__Sound_type_name_too_long_005a2700);
        }
        pcVar3 = "";
        if (*(char **)(iVar4 + 0x2c) != (char *)0x0) {
          pcVar3 = *(char **)(iVar4 + 0x2c);
        }
        uVar5 = 0xffffffff;
        do {
          pcVar9 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar9 = pcVar3 + 1;
          cVar10 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar10 != '\0');
        uVar5 = ~uVar5;
        pcVar3 = pcVar9 + -uVar5;
        pcVar9 = (char *)((int)DAT_006fbdd4 + iVar8);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
        uVar2 = FUN_0049ecf0(&DAT_006fbb5c,iVar7);
        iVar7 = iVar7 + 1;
        *(undefined4 *)((int)DAT_006fbdd4 + iVar8 + 0x40) = uVar2;
        iVar8 = iVar8 + 0x44;
      } while (iVar7 < iVar1);
    }
  }
  FUN_00450de0();
  return;
}


