
/* ==== FUN_004a6de4 @ 004a6de4 ==== 
 * signature: undefined __register FUN_004a6de4(int param_1, int * param_2)
 * body: 004a6de4-004a6f5c
 */

void FUN_004a6de4(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","DIFFICULTY",1);
  *(undefined1 *)(param_1 + 8) = uVar1;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","RESOLUTION",1);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","MUSICVOLUME",100);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","FXVOLUME",100);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","VOICESVOLUME",100);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","MUSICON",1);
  *(undefined1 *)(param_1 + 0x1d) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS",&DAT_004a6ff8,1);
  *(undefined1 *)(param_1 + 0x1c) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","VOICESON",1);
  *(undefined1 *)(param_1 + 0x1e) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","SHOWSTARTINFO",1);
  *(undefined1 *)(param_1 + 0x1f) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","AlphaBlending",1);
  *(undefined1 *)(param_1 + 0x35) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","BiliniarFiltering",1);
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","WaitVbl",0);
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","Mipmapping",0);
  *(undefined1 *)(param_1 + 0x36) = uVar1;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Gamma",0);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","RenderFocus",0);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","DriverIndex",0);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  FUN_004a6b3c(*(int *)(param_1 + 0xc),param_2);
  return;
}


