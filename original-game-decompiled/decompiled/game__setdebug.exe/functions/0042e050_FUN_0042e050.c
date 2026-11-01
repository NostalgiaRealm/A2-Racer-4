
/* ==== FUN_0042e050 @ 0042e050 ==== 
 * signature: undefined __register FUN_0042e050(int param_1, int param_2, int param_3)
 * body: 0042e050-0042e07a
 */

void FUN_0042e050(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &stack0xfffffffc;
  if (param_2 == 0) {
    param_2 = *(int *)(*(int *)(param_1 + 100) + 8);
  }
  FUN_0042dfe8(param_2,param_2,param_3,(int)&stack0xfffffffc);
  iVar1 = **(int **)(param_1 + 0x14);
  (**(code **)(iVar1 + 0x74))(*(int **)(param_1 + 0x14),iVar1,puVar2);
  return;
}


