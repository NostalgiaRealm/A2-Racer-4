
/* ==== FUN_00417504 @ 00417504 ==== 
 * signature: undefined __register FUN_00417504(int * param_1, byte param_2)
 * body: 00417504-00417573
 */

void FUN_00417504(int *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  
  bVar2 = ~*(byte *)(param_1 + 2) & param_2;
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      (**(code **)(*param_1 + 0x14))();
      if (param_1[1] == 0) {
        piVar1 = FUN_0040a9f4((int *)&DAT_0040d94c,'\x01',(undefined4 *)PTR_PTR_00446b90);
        FUN_0040346c(piVar1);
      }
    }
    if ((bVar2 & 2) != 0) {
      FUN_004175a0((int)param_1);
    }
    if ((bVar2 & 4) != 0) {
      FUN_004175cc((int)param_1);
    }
    if ((bVar2 & 8) != 0) {
      FUN_004175fc((int)param_1);
    }
    *(byte *)(param_1 + 2) = bVar2 | *(byte *)(param_1 + 2);
  }
  return;
}


