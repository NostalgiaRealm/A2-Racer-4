
/* ==== FUN_00449510 @ 00449510 ==== 
 * signature: undefined __stdcall FUN_00449510(void)
 * body: 00449510-00449548
 */

void FUN_00449510(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_0059f51c);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  DAT_006fb950 = FUN_004c3cd0(s_helpdesk_0059f538,s_tweak_mode_0059f52c);
  return;
}


