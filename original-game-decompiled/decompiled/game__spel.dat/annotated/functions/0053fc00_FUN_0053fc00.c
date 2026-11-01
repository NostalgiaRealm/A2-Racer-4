
/* ==== FUN_0053fc00 @ 0053fc00 ==== 
 * signature: uint __fastcall FUN_0053fc00(int param_1)
 * body: 0053fc00-0053fc0d
 */

uint __fastcall FUN_0053fc00(int param_1)

{
  return *(uint *)(*(uint *)(param_1 + 0x10) & 0xfffffff0) >> 0x18 & 0x7f;
}


