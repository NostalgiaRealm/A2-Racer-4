
/* ==== FUN_004d5610 @ 004d5610 ==== 
 * signature: undefined __stdcall FUN_004d5610(undefined4 * param_1, undefined4 param_2, int * param_3, int param_4, byte param_5)
 * body: 004d5610-004d57c7
 */

void FUN_004d5610(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,byte param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iStack00000018;
  undefined4 local_54;
  undefined4 local_4c;
  byte local_44 [68];
  
  iVar5 = FUN_005587a3(local_44,&DAT_005b70a0);
  iStack00000018 = *(int *)(param_4 + 0x14);
  if ((iStack00000018 < 1) || (iStack00000018 <= iVar5)) {
    iStack00000018 = 0;
  }
  else {
    iStack00000018 = iStack00000018 - iVar5;
  }
  iVar3 = iStack00000018;
  if ((*(uint *)(param_4 + 0xc) & 0x1c0) != 0x40) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (param_3 == (int *)0x0) {
LAB_004d56b5:
        local_54 = CONCAT31((int3)((uint)param_2 >> 8),1);
      }
      else {
        uVar6 = *(uint *)param_3[8];
        if (uVar6 == 0) {
LAB_004d569e:
          uVar6 = (**(code **)(*param_3 + 4))(param_5);
        }
        else {
          iVar2 = *(int *)param_3[0xc];
          if (iVar2 + uVar6 <= uVar6) goto LAB_004d569e;
          *(int *)param_3[0xc] = iVar2 + -1;
          pbVar7 = *(byte **)param_3[8];
          *(byte **)param_3[8] = pbVar7 + 1;
          *pbVar7 = param_5;
          uVar6 = (uint)param_5;
        }
        local_54 = param_2;
        if (uVar6 == 0xffffffff) goto LAB_004d56b5;
      }
      param_2 = local_54;
    }
    iStack00000018 = 0;
  }
  pbVar7 = local_44;
  local_4c = param_2;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (param_3 == (int *)0x0) {
LAB_004d5731:
      uVar6 = (uint)local_4c >> 8;
      local_4c = CONCAT31((int3)uVar6,1);
    }
    else {
      bVar1 = *pbVar7;
      uVar6 = *(uint *)param_3[8];
      if (uVar6 == 0) {
LAB_004d571a:
        uVar6 = (**(code **)(*param_3 + 4))(bVar1);
      }
      else {
        iVar3 = *(int *)param_3[0xc];
        if (iVar3 + uVar6 <= uVar6) goto LAB_004d571a;
        *(int *)param_3[0xc] = iVar3 + -1;
        pbVar4 = *(byte **)param_3[8];
        *(byte **)param_3[8] = pbVar4 + 1;
        *pbVar4 = bVar1;
        uVar6 = (uint)bVar1;
      }
      if (uVar6 == 0xffffffff) goto LAB_004d5731;
    }
    pbVar7 = pbVar7 + 1;
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  param_2 = local_4c;
  iVar5 = iStack00000018;
  do {
    if (iVar5 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    if (param_3 == (int *)0x0) {
LAB_004d57aa:
      uVar6 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar6,1);
    }
    else {
      uVar6 = *(uint *)param_3[8];
      if (uVar6 == 0) {
LAB_004d5793:
        uVar6 = (**(code **)(*param_3 + 4))(param_5);
      }
      else {
        iVar3 = *(int *)param_3[0xc];
        if (iVar3 + uVar6 <= uVar6) goto LAB_004d5793;
        *(int *)param_3[0xc] = iVar3 + -1;
        pbVar7 = *(byte **)param_3[8];
        *(byte **)param_3[8] = pbVar7 + 1;
        *pbVar7 = param_5;
        uVar6 = (uint)param_5;
      }
      if (uVar6 == 0xffffffff) goto LAB_004d57aa;
    }
    iVar5 = iVar5 + -1;
  } while( true );
}


