
/* ==== FUN_00473c80 @ 00473c80 ==== 
 * signature: undefined __cdecl FUN_00473c80(undefined4 * param_1)
 * body: 00473c80-00473cb7
 */

void __cdecl FUN_00473c80(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
  uVar2 = FUN_00425300(iVar1);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 2;
  param_1[4] = uVar2;
  return;
}


