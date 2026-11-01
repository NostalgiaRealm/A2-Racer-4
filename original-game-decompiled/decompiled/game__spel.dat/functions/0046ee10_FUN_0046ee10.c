
/* ==== FUN_0046ee10 @ 0046ee10 ==== 
 * signature: undefined __fastcall FUN_0046ee10(void * param_1)
 * body: 0046ee10-0046ee78
 */

void __fastcall FUN_0046ee10(void *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  FUN_004489a0(&DAT_006fa558,(byte *)s_GAME_INI_005a88f0,(byte *)s_Game_Settings_005a88e0);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a88fc);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  uVar3 = FUN_004c3cd0(s_Input_005a8914,s_DEVICE_005a890c);
  FUN_0046ece0(param_1,uVar3);
  uVar3 = FUN_004c3cd0(s_Input_005a8928,s_SENSITIVITY_005a891c);
  *(undefined4 *)((int)param_1 + 0x24) = uVar3;
  return;
}


