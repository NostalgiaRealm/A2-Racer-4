
/* ==== FUN_004d7a60 @ 004d7a60 ==== 
 * signature: undefined __cdecl FUN_004d7a60(undefined4 * param_1, int param_2)
 * body: 004d7a60-004d7abe
 */

void __cdecl FUN_004d7a60(undefined4 *param_1,int param_2)

{
  double dVar1;
  uint uVar2;
  
  dVar1 = *(double *)(*(int *)(param_2 + 4) + 0x10);
  uVar2 = FUN_00558625();
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = (uint)((double)(int)uVar2 * 0.0030517578125 < dVar1);
  return;
}


