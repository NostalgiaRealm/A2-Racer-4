
/* ==== FUN_00440c7c @ 00440c7c ==== 
 * signature: undefined __register FUN_00440c7c(int param_1, int * param_2)
 * body: 00440c7c-00440cab
 */

void FUN_00440c7c(int param_1,int *param_2)

{
  while( true ) {
    if (param_1 == 0) {
      FUN_004039b8(param_2);
      return;
    }
    if (*(int *)(param_1 + 0x70) != 0) break;
    param_1 = *(int *)(param_1 + 0x24);
  }
  FUN_00403a0c(param_2,*(undefined4 **)(param_1 + 0x70));
  return;
}


