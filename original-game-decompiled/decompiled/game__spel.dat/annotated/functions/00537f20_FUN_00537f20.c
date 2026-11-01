
/* ==== FUN_00537f20 @ 00537f20 ==== 
 * signature: undefined __cdecl FUN_00537f20(int param_1, undefined4 param_2, int param_3)
 * body: 00537f20-00537f90
 */

void __cdecl FUN_00537f20(int param_1,undefined4 param_2,int param_3)

{
  DAT_0074cb60 = DAT_0074cb60 + 1;
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergevertex_del__deleted_v_d_w_005c69bc);
  }
  FUN_00514450(*(int **)(param_3 + 0x34),param_1);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
  FUN_00514020(&DAT_0074c6f0,param_1);
  return;
}


