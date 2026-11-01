
/* ==== FUN_00461c8c @ 00461c8c ==== 
 * signature: undefined __register FUN_00461c8c(int * param_1, int param_2)
 * body: 00461c8c-00461f53
 */

void FUN_00461c8c(int *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  byte bVar5;
  undefined4 *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  byte *local_140;
  byte *local_13c;
  undefined4 *local_138;
  undefined4 *local_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  undefined4 *local_128;
  undefined4 *local_124;
  undefined4 *local_120;
  byte local_11c [152];
  undefined4 uStackY_84;
  int *piVar6;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  iVar4 = 0x27;
  do {
    local_c = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  local_8 = (int *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00402ee4(*param_1,local_11c);
  FUN_00403e80((int *)&stack0xffffffe4,local_11c);
  FUN_00403f9c((int *)&stack0xffffffe8,3);
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,unaff_ESI,0);
  param_1[2] = param_2;
  FUN_004085ac(param_2,(int *)&local_120);
  FUN_00403f28(&local_c,(undefined4 *)"track",local_120);
  (**(code **)*local_8)(local_8,local_c,&DAT_00461fb0);
  FUN_00403eb8(local_11c,local_124,0xff);
  FUN_00402b0c((byte *)(param_1 + 3),local_11c,0x20);
  (**(code **)*local_8)(local_8,local_c,"story");
  FUN_00403cb0(param_1 + 0xd,local_128);
  (**(code **)*local_8)(local_8,local_c,&DAT_00461fd0);
  FUN_00403cb0(param_1 + 0xc,local_12c);
  iVar4 = (**(code **)(*local_8 + 8))(local_8,local_c,"nrlaps");
  param_1[0x12] = iVar4;
  uVar1 = (**(code **)(*local_8 + 0x10))(local_8,local_c,"british");
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  (**(code **)*local_8)(local_8,local_c,"wintext");
  FUN_00403cb0(param_1 + 0xe,local_130);
  (**(code **)*local_8)(local_8,local_c,"QualifyText");
  FUN_00403cb0(param_1 + 0x10,local_134);
  (**(code **)*local_8)(local_8,local_c,"losetext");
  FUN_00403cb0(param_1 + 0xf,local_138);
  iVar4 = (**(code **)(*local_8 + 8))(local_8,local_c,"indexingame");
  param_1[0x11] = iVar4;
  piVar3 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',extraout_ECX);
  FUN_004603e0(local_8,local_c,"qualifyposition",&local_10,piVar3);
  bVar5 = 0;
  do {
    (**(code **)(*piVar3 + 0xc))(piVar3,bVar5,&local_13c);
    iVar4 = FUN_00408618(local_13c);
    param_1[bVar5 + 0x14] = iVar4;
    bVar5 = bVar5 + 1;
  } while (bVar5 != 3);
  piVar6 = &local_10;
  uStackY_84 = 0x461edd;
  FUN_004603e0(local_8,local_c,"chasetime",piVar6,piVar3);
  bVar5 = 0;
  do {
    uStackY_84 = 0x461ef1;
    (**(code **)(*piVar3 + 0xc))(piVar3,bVar5,&local_140);
    uStackY_84 = 0x461efc;
    iVar4 = FUN_00408618(local_140);
    param_1[bVar5 + 0x17] = iVar4;
    bVar5 = bVar5 + 1;
  } while (bVar5 != 3);
  uStackY_84 = 0x461f12;
  FUN_00402f9c(piVar3);
  uStackY_84 = 0x461f17;
  uVar2 = FUN_0045f46c();
  uStackY_84 = 0x461f1c;
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = piVar6;
  FUN_00403c80((int *)&local_140,9);
  FUN_00403c80((int *)&stack0xffffffe4,2);
  FUN_00403c80(&local_10,2);
  return;
}


