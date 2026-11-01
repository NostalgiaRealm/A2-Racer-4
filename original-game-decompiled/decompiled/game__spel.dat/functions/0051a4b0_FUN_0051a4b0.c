
/* ==== FUN_0051a4b0 @ 0051a4b0 ==== 
 * signature: undefined __stdcall FUN_0051a4b0(void)
 * body: 0051a4b0-0051a59c
 */

void FUN_0051a4b0(void)

{
  int iVar1;
  int *piVar2;
  
  FUN_00558953(DAT_0074c5ec,(byte *)s_qh_printlists__facets__005bc75c);
  for (iVar1 = DAT_0074c600; (iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0));
      iVar1 = *(int *)(iVar1 + 0x30)) {
    FUN_00558953(DAT_0074c5ec,(byte *)&PTR_DAT_005bc6dc);
  }
  FUN_00558953(DAT_0074c5ec,(byte *)s_new_facets__d_visible_facets__d_n_005bc708);
  for (piVar2 = DAT_0074c628; (piVar2 != (int *)0x0 && (*piVar2 != 0)); piVar2 = (int *)*piVar2) {
    FUN_00558953(DAT_0074c5ec,(byte *)&PTR_DAT_005bc6dc);
  }
  FUN_00558953(DAT_0074c5ec,&DAT_005ae60c);
  return;
}


