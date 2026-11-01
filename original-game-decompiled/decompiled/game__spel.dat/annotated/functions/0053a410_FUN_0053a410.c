
/* ==== FUN_0053a410 @ 0053a410 ==== 
 * signature: undefined __thiscall FUN_0053a410(void * this, int * param_1)
 * body: 0053a410-0053a4da
 */

void __thiscall FUN_0053a410(void *this,int *param_1)

{
  int iVar1;
  
  param_1[5] = param_1[5] & 0xffcfffffU | 0xc0000;
  iVar1 = *(int *)((int)this + 8);
  param_1[0x1f] = iVar1;
  param_1[0x20] = 0;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 0x80) = param_1;
  }
  iVar1 = *(int *)(param_1[10] + 0x20);
  param_1[8] = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 0xc) = param_1 + 6;
  }
  param_1[9] = 0;
  *(int **)(param_1[10] + 0x20) = param_1 + 6;
  iVar1 = *(int *)(param_1[0x11] + 0x20);
  param_1[0xf] = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 0xc) = param_1 + 0xd;
  }
  param_1[0x10] = 0;
  *(int **)(param_1[0x11] + 0x20) = param_1 + 0xd;
  *(int **)((int)this + 8) = param_1;
  FUN_0053bf10(param_1);
  if ((param_1[5] & 0xc000U) == 0) {
    FUN_0053ac00(param_1,(uint)((int)((*(uint *)(*(int *)(param_1[0x11] + 0xa4) + 0x5c) |
                                      *(uint *)(*(int *)(param_1[10] + 0xa4) + 0x5c)) * 0x1000000) <
                               0x21000000),0);
    return;
  }
  (**(code **)(*param_1 + 0x14))(this);
  return;
}


