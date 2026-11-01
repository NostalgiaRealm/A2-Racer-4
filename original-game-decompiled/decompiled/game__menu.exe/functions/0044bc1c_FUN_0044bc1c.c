
/* ==== FUN_0044bc1c @ 0044bc1c ==== 
 * signature: undefined __register FUN_0044bc1c(int param_1, int * param_2)
 * body: 0044bc1c-0044bc4b
 */

void FUN_0044bc1c(int param_1,int *param_2)

{
  while( true ) {
    if (param_1 == 0) {
      FUN_00403c5c(param_2);
      return;
    }
    if (*(int *)(param_1 + 0x70) != 0) break;
    param_1 = *(int *)(param_1 + 0x24);
  }
  FUN_00403cb0(param_2,*(undefined4 **)(param_1 + 0x70));
  return;
}


