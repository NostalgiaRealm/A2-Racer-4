
/* ==== FUN_00402ea4 @ 00402ea4 ==== 
 * signature: undefined __register FUN_00402ea4(int * param_1, int param_2)
 * body: 00402ea4-00402ebe
 */

void FUN_00402ea4(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    while (*piVar1 != param_2) {
      piVar1 = *(int **)(*piVar1 + -0x24);
      if (piVar1 == (int *)0x0) {
        FUN_00402744(CONCAT31((int3)((uint)param_1 >> 8),10));
        return;
      }
    }
  }
  return;
}


