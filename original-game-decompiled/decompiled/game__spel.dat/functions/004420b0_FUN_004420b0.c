
/* ==== FUN_004420b0 @ 004420b0 ==== 
 * signature: undefined __fastcall FUN_004420b0(undefined4 * param_1)
 * body: 004420b0-004421e5
 */

void __fastcall FUN_004420b0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 local_14 [20];
  
  uVar1 = FUN_004b7400(&DAT_00712130,s_loradar_pcx_0059d260);
  *param_1 = uVar1;
  param_1[1] = 0;
  puVar2 = (undefined4 *)
           FUN_00441940(local_14,0x41700000,(float)(DAT_005b379c + -0x37),0x425c0000,
                        (float)(DAT_005b379c + -0xf));
  puVar4 = param_1 + 0x22;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  lVar5 = __ftol();
  param_1[0x34] = (int)lVar5;
  lVar5 = __ftol();
  param_1[0x35] = (int)lVar5;
  lVar5 = __ftol();
  param_1[0x36] = (int)lVar5;
  lVar5 = __ftol();
  param_1[0x37] = (int)lVar5;
  param_1[0x2c] = (float)((int)param_1[0x34] / 2) + (float)(int)param_1[0x36];
  param_1[0x2d] = 0;
  param_1[0x2e] = (float)((int)param_1[0x35] / 2) + (float)(int)lVar5;
  return;
}


