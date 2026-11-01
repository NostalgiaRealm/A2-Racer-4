
/* ==== FUN_004f5390 @ 004f5390 ==== 
 * signature: undefined __fastcall FUN_004f5390(byte * param_1)
 * body: 004f5390-004f53b5
 */

void __fastcall FUN_004f5390(byte *param_1)

{
  if ((*param_1 & 0xc) == 0) {
    if (param_1[0x5c] != 8) {
      FUN_00500650(*(int *)(param_1 + 0x1d4));
      return;
    }
    FUN_005005f0(*(void **)(param_1 + 0x1d4),*(int *)(param_1 + 0xc));
  }
  return;
}


