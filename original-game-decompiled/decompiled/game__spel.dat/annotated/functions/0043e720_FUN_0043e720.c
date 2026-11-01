
/* ==== FUN_0043e720 @ 0043e720 ==== 
 * signature: undefined __stdcall FUN_0043e720(void)
 * body: 0043e720-0043e77c
 */

void FUN_0043e720(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_00447820();
  iVar1 = FUN_00458b90(0x11);
  pbVar2 = &DAT_006fd14c + iVar1 * 0x100;
  iVar7 = 0;
  iVar6 = 0;
  iVar5 = 1;
  iVar1 = FUN_0043cda0(DAT_006c4098);
  iVar3 = FUN_0043cd70(0xe);
  pcVar4 = s_lo_fnt3_fnt_0059a8c0 + (iVar1 * 0x11 + iVar3) * 0x94;
  iVar3 = 0x3f;
  iVar1 = FUN_00447820();
  FUN_00440b60(iVar1,iVar3,(int)pcVar4,iVar5,iVar6,iVar7,pbVar2);
  return;
}


