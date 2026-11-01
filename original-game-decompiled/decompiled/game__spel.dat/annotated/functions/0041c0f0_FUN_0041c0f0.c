
/* ==== FUN_0041c0f0 @ 0041c0f0 ==== 
 * signature: undefined __stdcall FUN_0041c0f0(void)
 * body: 0041c0f0-0041c14c
 */

void FUN_0041c0f0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_004475d0();
  iVar1 = iVar1 + -0x1e;
  iVar2 = FUN_004475b0();
  iVar2 = iVar2 + -0x1e;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_0049f9a0(&DAT_006fbb58,(uint *)s_MUSIC_COPS_00594564);
  FUN_0049ff90(&DAT_006fbb58,~uVar3,iVar1);
  uVar3 = FUN_0049f9a0(&DAT_006fbb58,(uint *)s_MUSIC_00594570);
  FUN_0049ff90(&DAT_006fbb58,uVar3,iVar2);
  return;
}


