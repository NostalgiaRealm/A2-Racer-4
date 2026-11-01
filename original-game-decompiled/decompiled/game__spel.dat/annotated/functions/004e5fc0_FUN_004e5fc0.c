
/* ==== FUN_004e5fc0 @ 004e5fc0 ==== 
 * signature: undefined __cdecl FUN_004e5fc0(undefined4 * param_1, int param_2)
 * body: 004e5fc0-004e5fe4
 */

void __cdecl FUN_004e5fc0(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0xc);
    *param_1 = &PTR_FUN_00578178;
  }
  return;
}


