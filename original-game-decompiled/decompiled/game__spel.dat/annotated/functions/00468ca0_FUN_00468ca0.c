
/* ==== FUN_00468ca0 @ 00468ca0 ==== 
 * signature: undefined __stdcall FUN_00468ca0(void)
 * body: 00468ca0-00468d02
 */

void FUN_00468ca0(void)

{
  CHAR local_40 [64];
  
  FUN_00468c10(s_general_005a7868,(byte *)s_General_Animations_005a7854);
  wsprintfA(local_40,&DAT_005a7870,DAT_006fb898);
  FUN_00468c10(local_40,(byte *)s_Etappe_Animations_005a7874);
  wsprintfA(local_40,s_League_d_005a7888,DAT_006fb958);
  FUN_00468c10(local_40,(byte *)s_League_Animations_005a7894);
  return;
}


