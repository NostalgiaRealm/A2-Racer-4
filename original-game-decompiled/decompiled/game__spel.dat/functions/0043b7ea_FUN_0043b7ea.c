
/* ==== FUN_0043b7ea @ 0043b7ea ==== 
 * signature: undefined __cdecl FUN_0043b7ea(undefined4 * param_1, byte * param_2, int param_3, undefined4 param_4)
 * body: 0043b7ea-0043b88d;0043b891-0043b8d0;0043b8d4-0043b8fd;0043b907-0043b9b0;0043b9b4-0043b9f1
 */

void __cdecl FUN_0043b7ea(undefined4 *param_1,byte *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined4 unaff_retaddr;
  uint local_8;
  uint local_4;
  
  FUN_004ca110(param_3);
  iVar2 = FUN_004ca9f0((char *)param_2);
  param_1[5] = iVar2;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(DAT_00740a18 + 0x68) + 0x30c) + 8);
  param_1[7] = param_4;
  param_1[6] = uVar3;
  iVar2 = FUN_00447820();
  uVar3 = FUN_00440910(iVar2);
  param_1[4] = uVar3;
  piVar4 = (int *)FUN_004c4a80(param_1[5],param_1[6]);
  param_1[3] = piVar4;
  FUN_004c4a60(piVar4);
  local_8 = FUN_004c81b0(0xff,8);
  local_4 = local_8;
  iVar2 = (**(code **)(*(int *)param_1[3] + 0x74))((int *)param_1[3],8,&local_8);
  if (iVar2 != 0) {
    FUN_004c4400(iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s_Error_setting_color_key__s__0059a1e4);
  }
  uVar5 = FUN_004c81b0(0xff,8);
  FUN_004c4da0((int *)param_1[3],uVar5);
  iVar2 = (**(code **)(*DAT_00740890 + 0x74))(DAT_00740890,8,&stack0xffffffec);
  if (iVar2 != 0) {
    FUN_004c4400(iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s_Error_setting_color_key__s__0059a200);
  }
  iVar2 = FUN_00447820();
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = 2;
      goto LAB_0043b913;
    }
    if (iVar2 != 2) {
      FUN_00447820();
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s___d__Unknown_renderfocus__Foc_0059a240);
    }
  }
  iVar2 = 1;
LAB_0043b913:
  uVar5 = FUN_004c81b0(0xff,8);
  FUN_004c4e00(iVar2,0,0,param_1[5],param_1[6],uVar5);
  FUN_004ca3d0(iVar2,0,0,param_2);
  piVar4 = (int *)FUN_00440910(iVar2);
  FUN_004c9930(piVar4,(int *)param_1[3],0,0,param_1[5],param_1[6],0);
  FUN_004a6800(0x7128b0);
  lVar9 = __ftol();
  param_1[8] = (int)lVar9;
  uVar5 = 0xffffffff;
  param_1[9] = 0;
  pbVar7 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  if (~uVar5 - 1 < 0x14) {
    uVar5 = 0xffffffff;
    do {
      pbVar7 = param_2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar7 = param_2 + 1;
      bVar1 = *param_2;
      param_2 = pbVar7;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
    pbVar7 = pbVar7 + -uVar5;
    pbVar8 = (byte *)(param_1 + 10);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar8 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    }
    param_1[1] = unaff_retaddr;
    param_1[2] = 0;
    *param_1 = 1;
    return;
  }
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__String_too_long_for_gfx_L_0059a28c);
}


