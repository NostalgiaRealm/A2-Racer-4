
/* ==== FUN_00514e50 @ 00514e50 ==== 
 * signature: undefined __cdecl FUN_00514e50(int param_1)
 * body: 00514e50-00514ec4
 */

void __cdecl FUN_00514e50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0074c604;
  if (DAT_0074c604 == DAT_0074c60c) {
    DAT_0074c60c = param_1;
  }
  if (DAT_0074c604 == DAT_0074c608) {
    DAT_0074c608 = param_1;
  }
  uVar1 = *(undefined4 *)(DAT_0074c604 + 0x2c);
  *(int *)(param_1 + 0x30) = DAT_0074c604;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  iVar2 = *(int *)(iVar3 + 0x2c);
  if (iVar2 == 0) {
    DAT_0074c600 = param_1;
  }
  else {
    *(int *)(iVar2 + 0x30) = param_1;
  }
  *(int *)(iVar3 + 0x2c) = param_1;
  DAT_0074c634 = DAT_0074c634 + 1;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_appendfacet__append_f_d_to_fa_005ba2b4);
  }
  return;
}


