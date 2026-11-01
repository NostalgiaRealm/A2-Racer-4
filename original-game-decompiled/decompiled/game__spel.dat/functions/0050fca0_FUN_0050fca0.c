
/* ==== FUN_0050fca0 @ 0050fca0 ==== 
 * signature: undefined __fastcall FUN_0050fca0(undefined4 * param_1)
 * body: 0050fca0-0050fcc6
 */

void __fastcall FUN_0050fca0(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[3] = param_1 + 4;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *param_1 = &PTR_FUN_00578a20;
  param_1[1] = param_1[1] & 0xfffffffd | 1;
  return;
}


