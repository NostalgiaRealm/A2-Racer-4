
/* ==== FUN_00516530 @ 00516530 ==== 
 * signature: undefined __cdecl FUN_00516530(int param_1)
 * body: 00516530-005165ae
 */

void __cdecl FUN_00516530(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (param_1 == DAT_0074c60c) {
    DAT_0074c60c = iVar1;
  }
  if (param_1 == DAT_0074c608) {
    DAT_0074c608 = iVar1;
  }
  if (param_1 == DAT_0074c610) {
    DAT_0074c610 = iVar1;
  }
  if (iVar2 == 0) {
    DAT_0074c600 = iVar1;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  else {
    *(int *)(iVar2 + 0x30) = iVar1;
    *(int *)(iVar1 + 0x2c) = iVar2;
  }
  DAT_0074c634 = DAT_0074c634 + -1;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_removefacet__remove_f_d_from_f_005baa9c);
  }
  return;
}


