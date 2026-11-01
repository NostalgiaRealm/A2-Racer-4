
/* ==== FUN_004fffb0 @ 004fffb0 ==== 
 * signature: undefined __fastcall FUN_004fffb0(uint * param_1)
 * body: 004fffb0-004fffff
 */

void __fastcall FUN_004fffb0(uint *param_1)

{
  *(undefined2 *)(param_1 + 3) = 2;
  param_1[4] = (uint)(param_1 + 5);
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  param_1[8] = 0;
  *param_1 = *param_1 & 0xffffc008 | 8;
  return;
}


