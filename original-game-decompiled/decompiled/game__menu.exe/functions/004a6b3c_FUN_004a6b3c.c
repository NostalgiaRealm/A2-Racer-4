
/* ==== FUN_004a6b3c @ 004a6b3c ==== 
 * signature: undefined __register FUN_004a6b3c(int param_1, int * param_2)
 * body: 004a6b3c-004a6c26
 */

void FUN_004a6b3c(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS",&DAT_004a6c30,1);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS",&DAT_004a6c54,1);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS",&DAT_004a6c64,1);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Right",1);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Extra1",1);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Extra2",1);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Extra3",1);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","ControlType",0);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","JoySensitivity",1);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","WheelSensitivity",1);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  return;
}


