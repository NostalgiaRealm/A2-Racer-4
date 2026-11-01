
/* ==== FUN_0047e9d0 @ 0047e9d0 ==== 
 * signature: undefined __register FUN_0047e9d0(int param_1, int * param_2)
 * body: 0047e9d0-0047ea00
 */

void FUN_0047e9d0(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x2c,4);
  if (*(int *)(param_1 + 0x2c) != 0) {
    (**(code **)(*param_2 + 8))(param_2,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x2c));
  }
  return;
}


