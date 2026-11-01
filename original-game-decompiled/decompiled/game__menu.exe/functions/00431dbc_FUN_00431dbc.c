
/* ==== FUN_00431dbc @ 00431dbc ==== 
 * signature: undefined __register FUN_00431dbc(int * param_1)
 * body: 00431dbc-00431e02
 */

void FUN_00431dbc(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0x53] != 0) {
    if ((param_1[0x60] != 0) && (iVar2 = *(int *)(param_1[0x60] + 8), -1 < iVar2 + -1)) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_004102b0((undefined4 *)param_1[0x60],iVar3);
        FUN_00431dbc(piVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*param_1 + 0xa0))();
  }
  return;
}


