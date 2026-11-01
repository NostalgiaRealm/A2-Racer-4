
/* ==== FUN_0042e330 @ 0042e330 ==== 
 * signature: int __register FUN_0042e330(int param_1, int param_2, undefined4 param_3)
 * body: 0042e330-0042e373
 */

int FUN_0042e330(int param_1,int param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  int local_c;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    local_c = FUN_0042c3b0(param_2);
    local_c = local_c + *(int *)(param_2 + 0x20);
    param_3 = extraout_ECX;
  }
  else {
    local_c = *(int *)(*(int *)(param_2 + 0xc) + 0x20);
  }
  FUN_0042e2b4(*(int *)(*(int *)(param_1 + 100) + 8),param_2,param_3,(int)&stack0xfffffffc);
  return local_c;
}


