
/* ==== FUN_004195ac @ 004195ac ==== 
 * signature: undefined __register FUN_004195ac(int * param_1, byte param_2)
 * body: 004195ac-0041961b
 */

void FUN_004195ac(int *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  
  bVar2 = ~*(byte *)(param_1 + 2) & param_2;
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x14))();
      if (param_1[1] == 0) {
        piVar1 = FUN_0040b694((int *)&DAT_0040ea0c,'\x01',(undefined4 *)PTR_PTR_004ab778);
        FUN_004036f4(piVar1);
      }
    }
    if ((bVar2 & 2) != 0) {
      FUN_00419648((int)param_1);
    }
    if ((bVar2 & 4) != 0) {
      FUN_00419674((int)param_1);
    }
    if ((bVar2 & 8) != 0) {
      FUN_004196a4((int)param_1);
    }
    *(byte *)(param_1 + 2) = bVar2 | *(byte *)(param_1 + 2);
  }
  return;
}


