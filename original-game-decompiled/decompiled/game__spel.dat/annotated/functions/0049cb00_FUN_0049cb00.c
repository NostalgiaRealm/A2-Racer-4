
/* ==== FUN_0049cb00 @ 0049cb00 ==== 
 * signature: undefined __fastcall FUN_0049cb00(int param_1)
 * body: 0049cb00-0049cb24
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049cb00(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  fVar1 = _DAT_005b23b8 * 0.5;
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)(param_1 + 8) = 0;
  *(float *)(param_1 + 0x3c) = fVar1;
  return;
}


