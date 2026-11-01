
/* ==== FUN_0045ddb8 @ 0045ddb8 ==== 
 * signature: undefined __register FUN_0045ddb8(int param_1)
 * body: 0045ddb8-0045de54
 */

void FUN_0045ddb8(int param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    local_8 = 0;
    local_c = 0;
    bVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x24 + (uint)bVar3 * 4) + 0xc);
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x2c))();
        if (local_8 < iVar2) {
          local_8 = (**(code **)(*piVar1 + 0x2c))();
        }
        iVar2 = (**(code **)(*piVar1 + 0x20))();
        if (local_c < iVar2) {
          local_c = (**(code **)(*piVar1 + 0x20))();
        }
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 != 7);
    if ((0 < local_8) && (*(int *)(param_1 + 0x44) != local_8)) {
      *(int *)(param_1 + 0x44) = local_8;
    }
    if ((0 < local_c) && (*(int *)(param_1 + 0x48) != local_c)) {
      *(int *)(param_1 + 0x48) = local_c;
    }
    FUN_0045debc(param_1,0x4401);
  }
  return;
}


