
/* ==== FUN_0053b960 @ 0053b960 ==== 
 * signature: undefined __cdecl FUN_0053b960(uint param_1)
 * body: 0053b960-0053b99b
 */

void __cdecl FUN_0053b960(uint param_1)

{
  void *pvVar1;
  
  if ((*(uint *)(param_1 + 0x14) & 0xc00) == 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffdf7ff | 0x10400;
    pvVar1 = *(void **)(*(int *)(param_1 + 0x28) + 0x1c);
    if (pvVar1 != (void *)0x0) {
      FUN_00500d10(pvVar1,param_1);
    }
    pvVar1 = *(void **)(*(int *)(param_1 + 0x44) + 0x1c);
    if (pvVar1 != (void *)0x0) {
      FUN_00500d10(pvVar1,param_1);
    }
  }
  return;
}


