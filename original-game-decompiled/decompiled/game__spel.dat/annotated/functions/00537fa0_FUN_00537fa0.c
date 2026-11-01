
/* ==== FUN_00537fa0 @ 00537fa0 ==== 
 * signature: undefined __cdecl FUN_00537fa0(int param_1, int param_2)
 * body: 00537fa0-0053809c
 */

void __cdecl FUN_00537fa0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergevertex_neighbors__merge_v_005c6a44);
  }
  if (DAT_0074c624 != 0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergevertex_neighbors__of_f_d_005c6a00);
    FUN_0051eb30(s_TRACE_005c69f8,0,0,(int *)0x0,DAT_0074c624);
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    piVar2 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      if (*(int *)(iVar1 + 0x10) == DAT_0074c6d4) {
        FUN_00514280(*(int **)(iVar1 + 0xc),param_1);
        if (*(int *)(*(int *)(iVar1 + 0xc) + 8) == 0) {
          FUN_00537f20(iVar1,param_1,param_2);
        }
      }
      else {
        FUN_00514a80(*(int **)(iVar1 + 0xc),param_1,param_2);
      }
      iVar1 = *piVar2;
    }
  }
  if (DAT_0074c624 != 0) {
    FUN_0051eb30(s_TRACE_005c69f8,0,0,(int *)0x0,DAT_0074c624);
  }
  return;
}


