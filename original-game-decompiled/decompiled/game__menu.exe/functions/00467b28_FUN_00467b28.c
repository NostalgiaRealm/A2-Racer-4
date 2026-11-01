
/* ==== FUN_00467b28 @ 00467b28 ==== 
 * signature: undefined __register FUN_00467b28(int param_1)
 * body: 00467b28-00467bbe
 */

void FUN_00467b28(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  bVar4 = 0;
  do {
    if (bVar4 != 5) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x24 + (uint)bVar4 * 4) + 0xc);
      if (piVar1 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar1 + 0x1c))();
        if (cVar2 == '\0') {
          iVar3 = (**(code **)(*piVar1 + 0x2c))();
          if (local_8 < iVar3) {
            local_8 = (**(code **)(*piVar1 + 0x2c))();
          }
          iVar3 = (**(code **)(*piVar1 + 0x20))();
          if (local_c < iVar3) {
            local_c = (**(code **)(*piVar1 + 0x20))();
          }
        }
      }
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 != 7);
  if ((0 < local_8) && (*(int *)(param_1 + 0x40) != local_8)) {
    *(int *)(param_1 + 0x40) = local_8;
  }
  if ((0 < local_c) && (*(int *)(param_1 + 0x44) != local_c)) {
    *(int *)(param_1 + 0x44) = local_c;
  }
  return;
}


