
/* ==== FUN_0047467c @ 0047467c ==== 
 * signature: undefined __register FUN_0047467c(int param_1, int * param_2)
 * body: 0047467c-004746a9
 */

void FUN_0047467c(int param_1,int *param_2)

{
  uint uVar1;
  
  if (param_2 == *(int **)(param_1 + 4)) {
    uVar1 = FUN_0041e000(*(int **)(param_1 + 4));
    *(uint *)(param_1 + 0x1c) = uVar1;
    FUN_00474634(param_1);
    if (*(short *)(param_1 + 0x2a) != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
    }
  }
  return;
}


