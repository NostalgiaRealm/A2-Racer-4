
/* ==== FUN_0055056c @ 0055056c ==== 
 * signature: undefined __stdcall FUN_0055056c(undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0055056c-005505c3
 */

void FUN_0055056c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 local_54 [72];
  undefined1 local_c [8];
  
  pbVar1 = (byte *)FUN_00551e07(local_c,'d',*(uint *)(param_4 + 0xc));
  FUN_005587a3(local_54,pbVar1);
  puVar2 = FUN_00551e61();
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  return;
}


