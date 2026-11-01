
/* ==== FUN_0054be5e @ 0054be5e ==== 
 * signature: int __thiscall FUN_0054be5e(void * this, undefined2 * param_1, undefined4 * param_2)
 * body: 0054be5e-0054bee5
 */

int __thiscall FUN_0054be5e(void *this,undefined2 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    while( true ) {
      if ((int)param_2 < 1) {
        return local_8;
      }
      puVar3 = *(undefined4 **)((int)this + 0x20);
      puVar5 = (undefined2 *)*puVar3;
      if ((puVar5 == (undefined2 *)0x0) ||
         (puVar3 = (undefined4 *)((**(int **)((int)this + 0x30) << 1) >> 1), (int)puVar3 < 1))
      break;
      puVar1 = param_1;
      puVar4 = puVar3;
      if ((int)param_2 < (int)puVar3) {
        puVar3 = param_2;
        puVar4 = param_2;
      }
      for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)((int)puVar3 + -1)) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
        puVar1 = puVar1 + 1;
      }
      local_8 = local_8 + (int)puVar4;
      param_2 = (undefined4 *)((int)param_2 - (int)puVar4);
      param_1 = param_1 + (int)puVar4;
      FUN_0054c5b6(this,(int)puVar4);
    }
    sVar2 = (**(code **)(*(int *)this + 4))(CONCAT22((short)((uint)puVar3 >> 0x10),*param_1));
    if (sVar2 == -1) break;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
    param_2 = (undefined4 *)((int)param_2 + -1);
  }
  return local_8;
}


