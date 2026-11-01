
/* ==== FUN_0048ba20 @ 0048ba20 ==== 
 * signature: undefined FUN_0048ba20(void)
 * body: 0048ba20-0048bbc7
 */

void FUN_0048ba20(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 *puStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  puStack_20 = &stack0xfffffffc;
  uStack_8 = 0;
  iStack_c = 0;
  puStack_10 = (undefined4 *)0x0;
  puStack_24 = &UNK_0048bbc8;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  (**(code **)(*param_2 + 0xc))
            (param_2,"PROGRAM","RESOLUTION",*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c));
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x1d) == '\0') {
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","MUSICVOLUME",0);
  }
  else {
    uVar1 = FUN_00480f04(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18));
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","MUSICVOLUME",uVar1);
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x1c) == '\0') {
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","SFXVOLUME",0);
  }
  else {
    uVar1 = FUN_00480f04(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10));
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","SFXVOLUME",uVar1);
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x1e) == '\0') {
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","POLICEVOLUME",0);
  }
  else {
    uVar1 = FUN_00480f04(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14));
    (**(code **)(*param_2 + 0xc))(param_2,"SOUND","POLICEVOLUME",uVar1);
  }
  (**(code **)(*param_2 + 0xc))
            (param_2,"directx","index",*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20));
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x28) == '\0') {
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,0x48bca8);
  }
  else {
    FUN_0048128c(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x24),&uStack_8);
    (**(code **)(*param_2 + 4))(param_2,"directx",&UNK_0048bc74,uStack_8);
    FUN_0048128c(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x24),&puStack_10);
    FUN_00403f28(&iStack_c,(undefined4 *)"RASER.INI : [directx] guid=",puStack_10);
    iVar3 = iStack_c;
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,iVar3);
  }
  (**(code **)(*param_2 + 0xc))
            (param_2,"program","resolution",*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c));
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x38);
  (**(code **)(*param_2 + 0xc))(param_2,"program","focus");
  *in_FS_OFFSET = uVar1;
  FUN_00403c80((int *)&puStack_10,3);
  return;
}


