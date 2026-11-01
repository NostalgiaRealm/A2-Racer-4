
/* ==== FUN_00513e80 @ 00513e80 ==== 
 * signature: undefined __thiscall FUN_00513e80(void * this, ushort * param_1)
 * body: 00513e80-00513ec1
 */

void __thiscall FUN_00513e80(void *this,ushort *param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(*(int *)this + 0x30); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(char *)(iVar1 + 0x19) == '\0') {
      if (*param_1 <= param_1[1]) {
        FUN_004f6060(param_1);
      }
      *(int *)(*(int *)(param_1 + 2) + (uint)param_1[1] * 4) = iVar1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return;
}


