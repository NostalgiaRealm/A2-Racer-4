
/* ==== FUN_004f3100 @ 004f3100 ==== 
 * signature: uint __fastcall FUN_004f3100(int param_1)
 * body: 004f3100-004f3116
 */

uint __fastcall FUN_004f3100(int param_1)

{
  if (*(int *)(param_1 + 0x9c) == 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(*(int *)(param_1 + 0x9c) + 0x2a);
}


