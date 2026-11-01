
/* ==== FUN_00411afc @ 00411afc ==== 
 * signature: undefined __register FUN_00411afc(int param_1)
 * body: 00411afc-00411b36
 */

void FUN_00411afc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_0040f024(*(undefined4 **)(param_1 + 0x30),iVar3);
        FUN_00402d14(piVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00402d14(*(int **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}


