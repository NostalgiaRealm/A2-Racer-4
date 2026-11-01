
/* ==== FUN_004c0e10 @ 004c0e10 ==== 
 * signature: undefined4 * __fastcall FUN_004c0e10(undefined4 * param_1)
 * body: 004c0e10-004c0e43;004c0e47-004c0ed6;004c0eda-004c0f01;004c0f05-004c0f31;004c0f35-004c0f40
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c0e44-004c0e46 004c0ed7-004c0ed9 004c0f02-004c0f04 004c0f32-004c0f34
 */

undefined4 * __fastcall FUN_004c0e10(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = param_1 + 0xb;
  iVar2 = (**(code **)(*DAT_0073b778 + 0x18))(DAT_0073b778,puVar1,0);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____D3DError_Creating_viewp_005b2c50);
  }
  param_1[0xf] = (float)DAT_005b379c / (float)DAT_005b3798;
  puVar3 = param_1;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = 0x2c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = DAT_005b3798;
  iVar2 = DAT_005b379c;
  param_1[8] = (float)param_1[0xf] + (float)param_1[0xf];
  param_1[4] = iVar2;
  param_1[5] = 0xbf800000;
  param_1[6] = param_1[0xf];
  param_1[7] = 0x40000000;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x18))(DAT_0073b4b4,*puVar1);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d___D3DError_Creating_viewpo_005b2bfc);
  }
  iVar2 = (**(code **)(*(int *)*puVar1 + 0x44))((int *)*puVar1,param_1);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____error_setting_viewport___005b2c28);
  }
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x34))(DAT_0073b4b4,*puVar1);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d___D3DError_Setting_viewpor_005b2bd0);
  }
  param_1[0xc] = 1;
  return param_1;
}


