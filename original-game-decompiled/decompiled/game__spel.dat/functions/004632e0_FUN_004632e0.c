
/* ==== FUN_004632e0 @ 004632e0 ==== 
 * signature: undefined4 __cdecl FUN_004632e0(float * param_1)
 * body: 004632e0-0046334f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004632e0(float *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [9];
  undefined4 local_24 [9];
  
  if (DAT_006fb8a0 != 1) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_00463180(local_48,(int)param_1);
  puVar3 = local_48;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = local_48;
  puVar3 = local_24;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00463210(param_1,(int)local_24);
  _DAT_00709b00 = GetTickCount();
  DAT_00709b08 = 0;
  return 1;
}


