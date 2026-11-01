
/* ==== FUN_00437a80 @ 00437a80 ==== 
 * signature: undefined __stdcall FUN_00437a80(void)
 * body: 00437a80-00437b08
 */

void FUN_00437a80(void)

{
  int iVar1;
  char *pcVar2;
  CHAR local_e8 [32];
  CHAR local_c8 [200];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005997f4);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  FUN_005587a3(local_e8,&DAT_00599804);
  FUN_005587a3(local_c8,(byte *)s__f__f__f_00599808);
  FUN_004c3c30(&DAT_00599814,local_e8,local_c8);
  return;
}


