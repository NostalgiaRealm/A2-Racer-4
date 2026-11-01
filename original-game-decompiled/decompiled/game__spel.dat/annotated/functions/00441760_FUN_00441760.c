
/* ==== FUN_00441760 @ 00441760 ==== 
 * signature: undefined __cdecl FUN_00441760(int param_1)
 * body: 00441760-0044183f
 */

void __cdecl FUN_00441760(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(&DAT_0059c234 + DAT_006fb890 * 0x3f0);
  iVar3 = FUN_00440b10(s_C__Work_A2IV_Game_prog_gfx_pbar__0059cfd8,0x13a,
                       *(int *)(&DAT_0059c230 + (uint)(DAT_006fb894 == 0) * 0x3f0),0);
  iVar4 = iVar3 * 0x20 + DAT_00740d44;
  piVar2 = *(int **)(iVar4 + 4);
  iVar3 = *(int *)(iVar4 + 8);
  iVar4 = *(int *)(iVar4 + 0xc);
  iVar5 = (iVar3 * param_1) / 100;
  if (iVar5 < 2) {
    iVar5 = 2;
  }
  if (iVar3 < iVar5) {
    iVar5 = iVar3;
  }
  FUN_004416f0();
  if (0 < param_1) {
    FUN_004c9930(piVar2,DAT_007408b0,0,0,iVar5,iVar4 + -1,(byte)uVar1);
  }
  FUN_004c41e0();
  return;
}


