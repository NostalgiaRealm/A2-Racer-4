
/* ==== FUN_0053b840 @ 0053b840 ==== 
 * signature: undefined __cdecl FUN_0053b840(int param_1, float param_2, float param_3)
 * body: 0053b840-0053b898
 */

void __cdecl FUN_0053b840(int param_1,float param_2,float param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffd7ffff | 0x140000;
  uVar1 = FUN_0050dfd0((void *)(*(int *)(param_1 + 0x28) + 0x68),param_1 + 0x18,
                       *(float *)(*(int *)(param_1 + 0x28) + 0x60) + param_2);
  *(uint *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_0050dfd0((void *)(*(int *)(param_1 + 0x44) + 0x68),param_1 + 0x34,
                       *(float *)(*(int *)(param_1 + 0x44) + 0x60) + param_3);
  *(uint *)(param_1 + 0x38) = uVar1;
  return;
}


