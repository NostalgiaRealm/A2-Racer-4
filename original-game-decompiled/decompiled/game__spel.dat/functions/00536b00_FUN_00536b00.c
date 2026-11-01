
/* ==== FUN_00536b00 @ 00536b00 ==== 
 * signature: undefined __cdecl FUN_00536b00(uint param_1, int param_2)
 * body: 00536b00-00536bc6
 */

void __cdecl FUN_00536b00(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_facets__make_newfa_005c62e0);
  }
  FUN_00516530(param_2);
  FUN_00514e50(param_2);
  *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffefff | 0x10000200;
  for (uVar3 = *(uint *)(param_1 + 0x20); uVar3 != 0; uVar3 = -(uint)(uVar3 != param_1) & uVar1) {
    uVar1 = *(uint *)(uVar3 + 0x20);
    FUN_005395a0(uVar3,param_2);
  }
  if ((*(int *)(param_2 + 0x28) != 0) &&
     (iVar2 = FUN_00514af0(*(int **)(param_2 + 0x34)), iVar2 <= DAT_0074c03c + 5)) {
    FUN_0051e2b0(*(undefined4 **)(param_2 + 0x28),DAT_0074c5f4);
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  if (2 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle_facets__merged_fac_005c62a0);
  }
  return;
}


