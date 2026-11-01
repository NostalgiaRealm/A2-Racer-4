
/* ==== FUN_00516220 @ 00516220 ==== 
 * signature: undefined4 __cdecl FUN_00516220(int param_1, int param_2, uint param_3, int param_4, uint * param_5, uint * param_6)
 * body: 00516220-005162e6
 */

undefined4 __cdecl
FUN_00516220(int param_1,int param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = (int *)(param_2 + 4 + param_1 * 4);
  piVar5 = (int *)0x0;
  piVar3 = (int *)(param_4 + 4 + param_1 * 4);
  do {
    if (piVar6 != (int *)(param_2 + 4 + param_3 * 4)) {
      iVar2 = *piVar3;
      while (piVar3 = piVar3 + 1, *piVar6 != iVar2) {
        if (piVar5 != (int *)0x0) {
          return 0;
        }
        piVar5 = piVar3;
        iVar2 = *piVar3;
      }
    }
    piVar1 = piVar6 + 1;
    piVar6 = piVar6 + 1;
  } while (*piVar1 != 0);
  if (piVar5 == (int *)0x0) {
    piVar5 = piVar3 + 1;
  }
  uVar4 = (int)piVar5 + (-8 - param_4) >> 2;
  *param_5 = uVar4;
  *param_6 = (~uVar4 ^ param_3) & 1;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_matchvertices__matched_by_ski_005ba998);
  }
  return 1;
}


