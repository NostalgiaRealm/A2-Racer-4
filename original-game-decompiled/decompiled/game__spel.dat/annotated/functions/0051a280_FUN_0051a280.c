
/* ==== FUN_0051a280 @ 0051a280 ==== 
 * signature: undefined __cdecl FUN_0051a280(int param_1, int * param_2)
 * body: 0051a280-0051a2f5
 */

void __cdecl FUN_0051a280(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_prependfacet__prepend_f_d_bef_005bc6b0);
  }
  iVar2 = *(int *)(iVar1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x30) = param_1;
  }
  *(int *)(iVar1 + 0x2c) = param_1;
  *(int *)(param_1 + 0x30) = *param_2;
  if (DAT_0074c600 == iVar1) {
    DAT_0074c600 = param_1;
  }
  if (DAT_0074c608 == iVar1) {
    DAT_0074c608 = param_1;
  }
  *param_2 = param_1;
  DAT_0074c634 = DAT_0074c634 + 1;
  return;
}


