
/* ==== FUN_00519e50 @ 00519e50 ==== 
 * signature: undefined4 * __cdecl FUN_00519e50(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 00519e50-00519f12
 */

undefined4 * __cdecl FUN_00519e50(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DAT_0074cd70 = DAT_0074cd70 + 1;
  puVar1 = FUN_0051e110(0x18);
  puVar3 = puVar1;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (DAT_0074c64c == 0xffffff) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_input_error__more_than__d_v_005bc55c);
    FUN_0051e8e0(1,(int *)0x0);
  }
  if (DAT_0074c64c == DAT_0074c620) {
    DAT_0074c624 = puVar1;
  }
  puVar1[5] = (puVar1[5] ^ DAT_0074c64c) & 0xffffff ^ puVar1[5];
  DAT_0074c64c = DAT_0074c64c + 1;
  puVar1[2] = param_3;
  if (3 < DAT_0074be68) {
    FUN_005164c0(param_3);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_newvertex__vertex_p_d__v_d__c_005bc534);
  }
  return puVar1;
}


