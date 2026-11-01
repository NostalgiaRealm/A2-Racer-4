
/* ==== FUN_00449690 @ 00449690 ==== 
 * signature: undefined __stdcall FUN_00449690(void)
 * body: 00449690-00449aeb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449690(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  FUN_004489a0(&DAT_006fa558,(byte *)s_INTEL_INI_0059f5f8,(byte *)s_AI_Settings_0059f5ec);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_AI_Settings_0059f604);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  uVar3 = read_ini_value_setting(s_GENERAL_0059f61c,s_StopSpeed_0059f610);
  _DAT_005d1b20 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f634,s_ChaseTimeEasy_0059f624);
  DAT_005d1b24 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f64c,s_ChaseTimeHard_0059f63c);
  DAT_005d1b28 = (float)uVar3;
  DAT_005d1b2c = read_ini_value_setting(s_GENERAL_0059f660,s_GiveUpDist_0059f654);
  DAT_005d1b30 = read_ini_value_setting(s_GENERAL_0059f67c,s_CopsPerPlayerEasy_0059f668);
  DAT_005d1b34 = read_ini_value_setting(s_GENERAL_0059f698,s_CopsPerPlayerHard_0059f684);
  DAT_005d1b38 = read_ini_value_setting(s_GENERAL_0059f6b0,s_CopsPerRacer_0059f6a0);
  uVar3 = read_ini_value_setting(s_VIOLATIONS_0059f6c4,s_MaxSpeed60_0059f6b8);
  DAT_005d1b3c = (float)uVar3;
  uVar3 = read_ini_value_setting(s_VIOLATIONS_0059f6dc,s_MaxSpeed80_0059f6d0);
  DAT_005d1b40 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_VIOLATIONS_0059f6f4,s_MaxSpeed120_0059f6e8);
  DAT_005d1b44 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_VIOLATIONS_0059f70c,s_NoMaxSpeed_0059f700);
  DAT_005d1b3c = DAT_005d1b3c * 0.25;
  DAT_005d1b40 = DAT_005d1b40 * 0.25;
  DAT_005d1b44 = DAT_005d1b44 * 0.25;
  DAT_005d1b48 = (float)uVar3 * 0.25;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f72c,s_CatchUpCloseEasy_0059f718);
  DAT_005d1b4c = (float)uVar3 * 0.25;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f748,s_CatchUpCloseNormal_0059f734);
  DAT_005d1b50 = (float)uVar3 * 0.25;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f760,s_CatchUpFarEasy_0059f750);
  DAT_005d1b54 = (float)uVar3 * 0.25;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f77c,s_CatchUpFarNormal_0059f768);
  DAT_005d1b58 = (float)uVar3 * 0.25;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f79c,s_CatchUpCloseChunkEasy_0059f784);
  _DAT_005d1b5c = (float)uVar3;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f7bc,s_CatchUpCloseChunkNormal_0059f7a4);
  _DAT_005d1b60 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f7d4,s_CatchUpFarChunk_0059f7c4);
  _DAT_005d1b64 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f7ec,s_CatchUpSpeed_0059f7dc);
  _DAT_005d1b68 = (float)uVar3 * 0.25;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f804,s_SlowDownFactor_0059f7f4);
  _DAT_005d1b6c = (float)uVar3 * 0.25;
  uVar3 = read_ini_value_setting(s_GENERAL_0059f81c,s_SpeedUpFactor_0059f80c);
  _DAT_005d1b70 = (float)uVar3 * 0.25;
  uVar3 = read_ini_value_setting(s_RACER_PENALTIES_0059f838,s_MaxSpeedPenaltyEasy_0059f824);
  _DAT_005d1b74 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_RACER_PENALTIES_0059f860,s_MaxSpeedPenaltyNormal_0059f848);
  _DAT_005d1b78 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_RACER_PENALTIES_0059f884,s_MaxSpeedPenaltyHard_0059f870);
  _DAT_005d1b7c = (float)uVar3;
  uVar3 = read_ini_value_setting(s_RACER_PENALTIES_0059f8a8,s_MaxRPMPenaltyEasy_0059f894);
  _DAT_005d1b80 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_RACER_PENALTIES_0059f8cc,s_MaxRPMPenaltyNormal_0059f8b8);
  _DAT_005d1b84 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_RACER_PENALTIES_0059f8f0,s_MaxRPMPenaltyHard_0059f8dc);
  _DAT_005d1b88 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_STEERING_BEHAVIOR_0059f90c,s_MinAngle_0059f900);
  _DAT_005d1b8c = (float)uVar3;
  uVar3 = read_ini_value_setting(s_STEERING_BEHAVIOR_0059f92c,s_MaxAngle_0059f920);
  _DAT_005d1b90 = (float)uVar3;
  uVar3 = read_ini_value_setting(s_STEERING_BEHAVIOR_0059f94c,s_SteerFactor_0059f940);
  _DAT_005d1b94 = (float)uVar3;
  return;
}


