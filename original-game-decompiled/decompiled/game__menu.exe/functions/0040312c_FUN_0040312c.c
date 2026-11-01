
/* ==== FUN_0040312c @ 0040312c ==== 
 * signature: undefined __register FUN_0040312c(int * param_1, int param_2)
 * body: 0040312c-00403146
 */

void FUN_0040312c(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    while (*piVar1 != param_2) {
      piVar1 = *(int **)(*piVar1 + -0x24);
      if (piVar1 == (int *)0x0) {
        FUN_00402808(CONCAT31((int3)((uint)param_1 >> 8),10));
        return;
      }
    }
  }
  return;
}


