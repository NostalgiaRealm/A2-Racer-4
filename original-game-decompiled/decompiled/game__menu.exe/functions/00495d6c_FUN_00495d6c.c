
/* ==== FUN_00495d6c @ 00495d6c ==== 
 * signature: undefined __register FUN_00495d6c(int * param_1)
 * body: 00495d6c-0049603a
 */

void FUN_00495d6c(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  code *pcStack_12c;
  undefined1 *puStack_128;
  undefined4 *local_11c;
  int local_118;
  undefined4 *local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  undefined4 *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = (undefined4 *)0x0;
  local_110 = 0;
  local_114 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  pcStack_12c = thunk_FUN_004036bc;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  FUN_00402ee4(*param_1,local_10c);
  FUN_00403e80(&local_c,local_10c);
  FUN_00403f9c((int *)&local_8,3);
  puVar3 = local_8;
  uVar5 = FUN_0045f46c();
  FUN_0045fb90(uVar5,puVar3,0);
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&local_114);
  FUN_00403f28(&local_110,(undefined4 *)"in CopySettingsToControls. resolution: ",local_114);
  iVar2 = local_110;
  uVar5 = FUN_0045f46c();
  FUN_0045fe88(uVar5,iVar2);
  bVar4 = FUN_00487514(*(uint *)(param_1[0xe1] + 0x2c));
  (**(code **)(*(int *)param_1[0xd5] + 0xbc))((int *)param_1[0xd5],bVar4);
  if ((*(int *)(param_1[0xe1] + 0x2c) == 0) || (*(int *)(param_1[0xe1] + 0x2c) == 6)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  (**(code **)(*(int *)param_1[0xd7] + 0xbc))((int *)param_1[0xd7],uVar6);
  if ((*(int *)(param_1[0xe1] + 0x2c) == 1) || (*(int *)(param_1[0xe1] + 0x2c) == 3)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  (**(code **)(*(int *)param_1[0xd8] + 0xbc))((int *)param_1[0xd8],uVar6);
  if (*(int *)(param_1[0xe1] + 0x2c) != 4) {
    uVar6 = FUN_004967d4((int)param_1);
    if ((char)uVar6 == '\0') {
      uVar6 = 0;
      goto LAB_00495eb5;
    }
  }
  uVar6 = 1;
LAB_00495eb5:
  (**(code **)(*(int *)param_1[0xdb] + 0xbc))((int *)param_1[0xdb],uVar6);
  FUN_004966c8((int)param_1);
  FUN_00496684((int)param_1);
  (**(code **)(*(int *)param_1[0xc5] + 0xbc))
            ((int *)param_1[0xc5],*(undefined1 *)(param_1[0xe1] + 0x1f));
  TDaviGraphicSlider_set_Position((int *)param_1[0xd0],*(int *)(param_1[0xe1] + 0x18));
  if (*(char *)(param_1[0xe1] + 0x1d) == '\0') {
    TDaviGraphicSlider_set_Position((int *)param_1[0xd0],0);
  }
  TDaviGraphicSlider_set_Position((int *)param_1[0xd1],*(int *)(param_1[0xe1] + 0x10));
  if (*(char *)(param_1[0xe1] + 0x1c) == '\0') {
    TDaviGraphicSlider_set_Position((int *)param_1[0xd1],0);
  }
  TDaviGraphicSlider_set_Position((int *)param_1[0xd2],*(int *)(param_1[0xe1] + 0x14));
  cVar1 = *(char *)(*(int *)(param_1[0xe1] + 0xc) + 0x24);
  if (cVar1 == '\0') {
    FUN_00403178((int *)param_1[0xc6],extraout_EDX,extraout_ECX);
  }
  else if (cVar1 == '\x01') {
    FUN_00403178((int *)param_1[200],extraout_EDX,extraout_ECX);
  }
  else if (cVar1 == '\x02') {
    FUN_00403178((int *)param_1[199],extraout_EDX,extraout_ECX);
  }
  else if (cVar1 == '\x03') {
    FUN_00403178((int *)param_1[0xc9],extraout_EDX,extraout_ECX);
  }
  else {
    FUN_00403c40("Unknown controler type specified");
  }
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&local_11c);
  FUN_00403f28(&local_118,(undefined4 *)"in CopySettingsToControls. resolution: ",local_11c);
  iVar2 = local_118;
  uVar5 = FUN_0045f46c();
  FUN_0045fe88(uVar5,iVar2);
  uVar5 = FUN_0045f46c();
  FUN_0045fc70(uVar5);
  *in_FS_OFFSET = "CopySettingsToControls";
  FUN_00403c80((int *)&local_11c,4);
  FUN_00403c80(&local_c,2);
  return;
}


