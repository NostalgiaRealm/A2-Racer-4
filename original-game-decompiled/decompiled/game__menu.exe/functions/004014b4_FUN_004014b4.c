
/* ==== FUN_004014b4 @ 004014b4 ==== 
 * signature: undefined4 __register FUN_004014b4(int * param_1, int * param_2)
 * body: 004014b4-004014e3
 */

undefined4 FUN_004014b4(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_0040145c();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar2[2] = *param_2;
  piVar2[3] = param_2[1];
  iVar1 = *param_1;
  *piVar2 = iVar1;
  piVar2[1] = (int)param_1;
  *(int **)(iVar1 + 4) = piVar2;
  *param_1 = (int)piVar2;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


