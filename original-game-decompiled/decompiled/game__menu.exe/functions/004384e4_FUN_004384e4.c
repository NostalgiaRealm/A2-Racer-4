
/* ==== FUN_004384e4 @ 004384e4 ==== 
 * signature: int __register FUN_004384e4(int param_1, int param_2, undefined4 param_3)
 * body: 004384e4-00438527
 */

int FUN_004384e4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  int local_c;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    local_c = FUN_00436564(param_2);
    local_c = local_c + *(int *)(param_2 + 0x20);
    param_3 = extraout_ECX;
  }
  else {
    local_c = *(int *)(*(int *)(param_2 + 0xc) + 0x20);
  }
  FUN_00438468(*(int *)(*(int *)(param_1 + 100) + 8),param_2,param_3,(int)&stack0xfffffffc);
  return local_c;
}


