
/* ==== FUN_0053b9a0 @ 0053b9a0 ==== 
 * signature: undefined __cdecl FUN_0053b9a0(int param_1)
 * body: 0053b9a0-0053b9d6
 */

void __cdecl FUN_0053b9a0(int param_1)

{
  void *pvVar1;
  
  if ((*(uint *)(param_1 + 0x14) & 0xc00) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffcf3ff;
    pvVar1 = *(void **)(*(int *)(param_1 + 0x28) + 0x1c);
    if (pvVar1 != (void *)0x0) {
      FUN_00500ea0(pvVar1,param_1);
    }
    pvVar1 = *(void **)(*(int *)(param_1 + 0x44) + 0x1c);
    if (pvVar1 != (void *)0x0) {
      FUN_00500ea0(pvVar1,param_1);
    }
  }
  return;
}


