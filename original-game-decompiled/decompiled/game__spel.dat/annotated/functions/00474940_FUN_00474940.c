
/* ==== FUN_00474940 @ 00474940 ==== 
 * signature: undefined __cdecl FUN_00474940(undefined4 * param_1, undefined4 param_2, void * param_3)
 * body: 00474940-004749a5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00474940(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined4 local_18 [6];
  
  pvVar1 = FUN_00479a80(param_3,local_18,0);
  _DAT_005a28b8 = (float)*(double *)((int)pvVar1 + 0x10);
  FUN_004cf650(local_18);
  pvVar1 = FUN_00479a80(param_3,local_18,1);
  _DAT_005a28bc = (float)*(double *)((int)pvVar1 + 0x10);
  FUN_004cf650(local_18);
  *param_1 = &PTR_FUN_00576a88;
  param_1[2] = 0;
  return;
}


