
/* ==== FUN_0042de60 @ 0042de60 ==== 
 * signature: undefined __stdcall FUN_0042de60(void)
 * body: 0042de60-0042e0c1
 */

void FUN_0042de60(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  undefined4 in_stack_ffffff8c;
  int in_stack_ffffff90;
  undefined4 in_stack_ffffff94;
  undefined4 in_stack_ffffff98;
  uint uVar9;
  float fVar10;
  code *pcVar11;
  code *pcVar12;
  int iVar13;
  code *pcVar14;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a2a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042aee0();
  if (DAT_006fb964 == 0) {
    FUN_004c3fa0((byte *)s_Opponents_are_disabled__005975d0);
    DAT_005d2ab0 = 0;
    ExceptionList = local_c;
    return;
  }
  if (DAT_006fb8e8 == 0) {
    bVar8 = DAT_006fb954 != 1;
  }
  else {
    bVar8 = DAT_006fb954 == 1;
  }
  local_30 = (uint)bVar8;
  FUN_0042e0d0();
  FUN_0042e290();
  local_34 = 0;
  local_2c = 0;
  if (0 < DAT_005d2ab0) {
    puVar5 = &DAT_005ce9e8;
    puVar6 = &DAT_005973c8;
    do {
      fVar3 = (float)FUN_004a71e0(DAT_006fb8ac - *puVar6);
      uVar7 = *puVar6 & 1;
      if (local_34 == DAT_006fba5c) {
        local_34 = local_34 + 1;
      }
      FUN_0049df90(local_1c,(byte *)s_RACER__d_005975ec);
      local_4 = 0;
      iVar4 = FUN_00424660(&DAT_005d3458,(int)local_1c);
      fVar2 = *(float *)(iVar4 + 0x44);
      pcVar14 = FUN_0042de50;
      iVar13 = 3;
      pcVar12 = FUN_0044f970;
      pcVar11 = FUN_00419600;
      fVar10 = 1.4013e-45;
      uVar9 = local_30;
      FUN_0041c870(&stack0xffffff8c,local_1c);
      uVar7 = FUN_0042a3d0(in_stack_ffffff8c,in_stack_ffffff90,in_stack_ffffff94,in_stack_ffffff98,
                           fVar3,uVar7,uVar9,fVar10,pcVar11,(int)pcVar12,iVar13,pcVar14);
      *puVar5 = uVar7;
      FUN_0040e250(uVar7);
      iVar4 = uVar7 * 0xf0;
      pcVar14 = FUN_0042b730;
      *(undefined4 *)(iVar4 + 0x60 + DAT_00715e50) = 0;
      *(uint *)(iVar4 + 0x1c + DAT_00715e50) = *(uint *)(iVar4 + 0x1c + DAT_00715e50) | 3;
      FUN_0041c870(&stack0xffffffa8,local_1c);
      FUN_0042b550(uVar7,fVar10,(char *)pcVar11,pcVar12,iVar13,pcVar14);
      FUN_004353e0(fVar2,uVar7);
      *(undefined4 *)(iVar4 + 0x68 + DAT_00715e50) = 1;
      *puVar5 = uVar7;
      iVar4 = FUN_00424660(&DAT_005d3458,(int)local_1c);
      FUN_00403140(puVar5 + 0x25,*(int *)(iVar4 + 0x4c));
      puVar6[1] = uVar7;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[-2] = local_34;
      FUN_004c3fa0((byte *)s_racer_car_added__object_nr_____d_005975f8);
      local_34 = local_34 + 1;
      local_4 = 0xffffffff;
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339((LPVOID)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
      local_2c = local_2c + 1;
      puVar5 = puVar5 + 0xa5;
      puVar6 = puVar6 + 0x16;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
    } while (local_2c < DAT_005d2ab0);
  }
  ExceptionList = local_c;
  return;
}


