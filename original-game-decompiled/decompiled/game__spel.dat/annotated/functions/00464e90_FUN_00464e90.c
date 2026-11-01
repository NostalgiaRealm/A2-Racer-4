
/* ==== FUN_00464e90 @ 00464e90 ==== 
 * signature: undefined __cdecl FUN_00464e90(undefined4 * param_1, int param_2)
 * body: 00464e90-00464f37
 */

void __cdecl FUN_00464e90(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_c [2];
  float local_4;
  
  iVar1 = FUN_004641a0(param_2);
  iVar2 = FUN_004641a0(param_2);
  local_c[0] = *(float *)(&DAT_00709f34 + iVar1 * 0x340) - *(float *)(&DAT_00709f24 + iVar2 * 0x340)
  ;
  iVar1 = FUN_004641a0(param_2);
  iVar2 = FUN_004641a0(param_2);
  local_4 = *(float *)(&DAT_00709f3c + iVar1 * 0x340) - *(float *)(&DAT_00709f2c + iVar2 * 0x340);
  fVar3 = FUN_00414ec0(local_c);
  *param_1 = 0;
  param_1[1] = (float)-fVar3;
  param_1[2] = 0;
  return;
}


