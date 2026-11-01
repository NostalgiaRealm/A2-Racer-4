
/* ==== FUN_0051ad10 @ 0051ad10 ==== 
 * signature: undefined __cdecl FUN_0051ad10(int param_1)
 * body: 0051ad10-0051ad67
 */

void __cdecl FUN_0051ad10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_freeqhull__free_global_memory_005bc848);
  }
  DAT_0074c69c = 1;
  FUN_0051aa40(param_1);
  FUN_0051a840();
  FUN_0051ed40();
  puVar2 = &DAT_0074be00;
  for (iVar1 = 0x254; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0074c69c = 1;
  return;
}


