
/* ==== FUN_0050dd60 @ 0050dd60 ==== 
 * signature: undefined __thiscall FUN_0050dd60(void * this, int * param_1)
 * body: 0050dd60-0050dd95
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050dd60(void *this,int *param_1)

{
  undefined4 uVar1;
  
  _DAT_00000000 = 0;
  uVar1 = *(undefined4 *)((int)this + 4);
  if (*param_1 <= param_1[1]) {
    FUN_0050a360(param_1);
  }
  *(undefined4 *)(param_1[2] + param_1[1] * 4) = uVar1;
  param_1[1] = param_1[1] + 1;
  return;
}


