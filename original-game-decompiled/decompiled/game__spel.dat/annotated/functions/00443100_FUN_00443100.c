
/* ==== FUN_00443100 @ 00443100 ==== 
 * signature: undefined4 __cdecl FUN_00443100(int param_1, uint param_2, void * param_3, undefined4 * param_4, char param_5)
 * body: 00443100-0044370d
 */

undefined4 __cdecl
FUN_00443100(int param_1,uint param_2,void *param_3,undefined4 *param_4,char param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_a8 [5];
  int local_94;
  undefined4 local_90 [5];
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  float local_18;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a40e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004af760(&local_7c);
  local_4 = 0;
  FUN_0047ac50(local_a8);
  local_4._0_1_ = 1;
  FUN_0047ac50(local_90);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (param_1 == 2) {
    if (param_5 == '\0') {
      iVar2 = 0;
      puVar1 = &DAT_006ce0f8;
      do {
        if (*puVar1 == 0xffffffff) {
          (&DAT_006ce0f8)[iVar2] = param_2;
          break;
        }
        if (*puVar1 == param_2) {
          local_4._0_1_ = 1;
          FUN_0047ac70(local_90);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_0047ac70(local_a8);
          local_4 = 0xffffffff;
          uVar4 = FUN_0051ed40();
          ExceptionList = local_c;
          return uVar4 & 0xffffff00;
        }
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + 1;
      } while ((int)puVar1 < 0x6ce120);
      if ((int)param_2 < (int)DAT_006ce134) {
        DAT_006ce134 = param_2;
      }
      else if ((int)DAT_006ce0f0 < (int)param_2) {
        DAT_006ce0f0 = param_2;
      }
    }
    else {
      DAT_006ce0f8 = param_2;
      DAT_006ce134 = param_2;
      DAT_006ce0f0 = param_2;
      puVar8 = &DAT_006ce0fc;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
    }
  }
  else if (param_1 == 0) {
    param_2 = FUN_004a71e0(DAT_006ce0f0 + 1);
  }
  else if (param_1 == 1) {
    param_2 = FUN_004a71e0(DAT_006ce134 - 1);
  }
  FUN_0047ac90(local_a8,0x14);
  FUN_0047ac90(local_90,0x14);
  iVar7 = param_2 * 0x994;
  iVar2 = FUN_004ad770((void *)(iVar7 + DAT_00715f00),0);
  iVar3 = FUN_004ad770((void *)(DAT_00715f00 + iVar7),1);
  local_94 = FUN_004ad770((void *)(iVar7 + DAT_00715f00),2);
  iVar9 = 0;
  if (0 < iVar2) {
    do {
      uVar4 = FUN_004ad7e0((void *)(DAT_00715f00 + iVar7),iVar9,0,&local_7c);
      if (((char)uVar4 != '\0') && (-0.2 < local_18)) {
        FUN_0047b050((int)local_a8);
        FUN_0047b050((int)local_90);
        FUN_0047b060(local_a8,local_7c,local_78 + 0.4,local_74);
        FUN_0047b060(local_a8,local_5c,local_58 + 0.4,local_54);
        FUN_0047b060(local_a8,local_3c,local_38 + 0.4,local_34);
        iVar5 = FUN_0047b790(param_3,local_a8,local_90);
        if (iVar5 < 0) {
          FUN_004c3fa0((byte *)(s_ADrawShadowPolygon_ClipVolume1_e_0059d37b + 1));
        }
        FUN_0047b110(local_90,*param_4);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar2);
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      uVar4 = FUN_004ad7e0((void *)(DAT_00715f00 + iVar7),iVar2,1,&local_7c);
      if (((char)uVar4 != '\0') && (-0.2 < local_18)) {
        FUN_0047b050((int)local_a8);
        FUN_0047b050((int)local_90);
        FUN_0047b060(local_a8,local_7c,local_78 + 0.4,local_74);
        FUN_0047b060(local_a8,local_5c,local_58 + 0.4,local_54);
        FUN_0047b060(local_a8,local_3c,local_38 + 0.4,local_34);
        iVar9 = FUN_0047b790(param_3,local_a8,local_90);
        if (iVar9 < 0) {
          FUN_004c3fa0((byte *)s_DrawShadowPolygon_ClipVolume2_er_0059d3a8);
        }
        FUN_0047b110(local_90,*param_4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  iVar2 = 0;
  if (0 < local_94) {
    do {
      uVar4 = FUN_004ad7e0((void *)(DAT_00715f00 + iVar7),iVar2,2,&local_7c);
      if (((char)uVar4 != '\0') && (-0.2 < local_18)) {
        FUN_0047b050((int)local_a8);
        FUN_0047b050((int)local_90);
        FUN_0047b060(local_a8,local_7c,local_78 + 0.4,local_74);
        FUN_0047b060(local_a8,local_5c,local_58 + 0.4,local_54);
        FUN_0047b060(local_a8,local_3c,local_38 + 0.4,local_34);
        iVar3 = FUN_0047b790(param_3,local_a8,local_90);
        if (iVar3 < 0) {
          FUN_004c3fa0((byte *)s_DrawShadowPolygon_ClipVolume3_er_0059d3d4);
        }
        FUN_0047b110(local_90,*param_4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_94);
  }
  local_4._0_1_ = 1;
  FUN_0047ac70(local_90);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0047ac70(local_a8);
  local_4 = 0xffffffff;
  uVar6 = FUN_0051ed40();
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


