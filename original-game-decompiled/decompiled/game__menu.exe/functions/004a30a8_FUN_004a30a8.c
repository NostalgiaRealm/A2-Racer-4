
/* ==== FUN_004a30a8 @ 004a30a8 ==== 
 * signature: undefined __register FUN_004a30a8(int * param_1)
 * body: 004a30a8-004a3235
 */

void FUN_004a30a8(int *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  MCIERROR MVar8;
  int local_14;
  undefined4 local_10;
  
  FUN_004a2864((int)param_1);
  param_1[0xb4] = 0;
  if (*(char *)((int)param_1 + 0x2d6) == '\0') {
    param_1[0xb4] = 2;
  }
  else {
    if ((char)param_1[0xb5] != '\0') {
      param_1[0xb4] = 2;
    }
    *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    if (*(char *)((int)param_1 + 0x2d5) != '\0') {
      param_1[0xb4] = param_1[0xb4] | 1;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  }
  uVar3 = param_1[0xb4];
  cVar1 = FUN_004a3bdc((int)param_1);
  if (cVar1 == '\n') {
    cVar1 = FUN_004a3b58((int)param_1);
    if (cVar1 == '\x02') {
      FUN_004a3b9c((int)param_1);
      uVar3 = FUN_00453f00();
      uVar4 = FUN_004a3b10((int)param_1);
      if ((uVar3 & 0xff) == uVar4) {
        uVar5 = FUN_004a3b10((int)param_1);
        iVar6 = FUN_004a366c((int)param_1,uVar5);
        FUN_004a36bc((int)param_1,iVar6);
      }
      else {
        FUN_004a3b9c((int)param_1);
        bVar2 = FUN_00453f00();
        iVar6 = FUN_004a366c((int)param_1,bVar2 + 1);
        FUN_004a36bc((int)param_1,iVar6);
      }
      FUN_004a2c98(param_1);
      *(undefined1 *)((int)param_1 + 0x292) = 0;
      return;
    }
    FUN_004a3b9c((int)param_1);
    uVar4 = FUN_00453f00();
    uVar7 = FUN_004a3b10((int)param_1);
    if ((uVar4 & 0xff) == uVar7) {
      uVar5 = FUN_004a3b10((int)param_1);
      local_10 = FUN_004a366c((int)param_1,uVar5);
    }
    else {
      FUN_004a3b9c((int)param_1);
      bVar2 = FUN_00453f00();
      local_10 = FUN_004a366c((int)param_1,bVar2 + 1);
    }
    param_1[0xb4] = uVar3 | 8;
  }
  else {
    param_1[0xb4] = uVar3 | 0x200;
  }
  local_14 = FUN_004349e0(param_1);
  MVar8 = mciSendCommandA((uint)*(ushort *)((int)param_1 + 0x2da),0x807,param_1[0xb4],
                          (DWORD_PTR)&local_14);
  param_1[0xbb] = MVar8;
  return;
}


