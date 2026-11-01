
/* ==== FUN_005661cf @ 005661cf ==== 
 * signature: undefined4 __thiscall FUN_005661cf(void * this, ushort * param_1, int * param_2, byte * param_3, int param_4, int param_5, int param_6, int param_7)
 * body: 005661cf-0056666f
 */

undefined4 __thiscall
FUN_005661cf(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_00566226:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_00566243:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_00566468;
    }
    if (bVar6 == DAT_005c837c) goto LAB_00566252;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_00566542;
    }
    goto LAB_00566226;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_00566243;
    iVar9 = iVar1;
    if (bVar6 != DAT_005c837c) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_005662d7;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_005662b0;
    }
    goto LAB_00566226;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_00566243;
    if (bVar6 == DAT_005c837c) {
LAB_00566252:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_00566547;
    }
    goto LAB_00566226;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_005c8378 < 2) {
        uVar3 = (byte)PTR_DAT_005c8384[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_005c8384;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_0055c336(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_005c837c) goto LAB_005663c4;
    goto LAB_00566226;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_005c8378 < 2) {
        uVar3 = (byte)PTR_DAT_005c8384[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_005c8384;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_0055c336(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_005663c4:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_005662d7:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_005662b0:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_00566542;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_00566226;
  case 5:
    local_28 = iVar5;
    if (DAT_005c8378 < 2) {
      uVar3 = (byte)PTR_DAT_005c8384[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_005c8384;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_0055c336(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_00566468;
    goto LAB_00566547;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_0056649d;
      if (bVar6 == 0x2d) goto LAB_00566491;
      if (bVar6 != 0x30) goto LAB_00566547;
LAB_00566436:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_00566226;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_00566436;
      goto LAB_00566547;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_00566542;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_005664c8;
  default:
    goto switchD_00566232_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_0056649d:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_00566547;
LAB_00566491:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_00566226;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_00566232_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_00566226;
    goto LAB_00566547;
  }
  iVar9 = 9;
LAB_00566468:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_00566226;
LAB_005664c8:
  if (DAT_005c8378 < 2) {
    uVar3 = (byte)PTR_DAT_005c8384[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_005c8384;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_0055c336(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_00566512;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_0056650a;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_005664c8;
LAB_0056650a:
  pbVar7 = (byte *)0x1451;
LAB_00566512:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_005c8378 < 2) {
      uVar3 = (byte)PTR_DAT_005c8384[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_005c8384;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_0055c336(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_00566542:
  pbVar7 = pbVar8 + -1;
LAB_00566547:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_00566655;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_00567f09(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_005685c9((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_005665da;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_005665da:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_00566655:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}


