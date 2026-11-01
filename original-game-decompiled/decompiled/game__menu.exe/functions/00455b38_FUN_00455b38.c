
/* ==== FUN_00455b38 @ 00455b38 ==== 
 * signature: undefined __register FUN_00455b38(int * param_1, int * param_2, char param_3)
 * body: 00455b38-00455e25
 */

void FUN_00455b38(int *param_1,int *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined1 *puVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_7a8;
  code *pcStack_7a4;
  code *pcStack_7a0;
  undefined4 *local_790;
  undefined4 *local_78c;
  undefined4 *local_788;
  int local_784 [12];
  uint local_754 [256];
  uint local_354;
  uint local_350;
  uint local_34c;
  undefined1 local_348 [772];
  ushort local_44;
  ushort local_42;
  ushort local_3e;
  int local_3c;
  char local_35;
  int *local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  ushort local_1e;
  int local_1c;
  int local_c;
  
  pcStack_7a0 = (code *)&stack0xfffffffc;
  local_790 = (undefined4 *)0x0;
  local_78c = (undefined4 *)0x0;
  local_788 = (undefined4 *)0x0;
  pcStack_7a4 = thunk_FUN_004036bc;
  uStack_7a8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7a8;
  local_35 = param_3;
  local_34 = param_2;
  local_30 = param_1;
  iVar2 = (**(code **)(*param_2 + 4))(param_2,&local_2c,4);
  if (iVar2 == 0) {
    FUN_004550a4(local_30,-1,extraout_ECX);
  }
  else {
    if (iVar2 != 4) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&local_788);
      piVar3 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',local_788);
      FUN_004036f4(piVar3);
    }
    bVar1 = false;
    if (local_2c == 0xc) {
      FUN_004126b8(local_34,&local_44,8);
      local_c = 0;
      local_1c = 0;
      local_1e = local_3e;
      local_24 = (uint)local_42;
      local_28 = (uint)local_44;
      bVar1 = true;
    }
    else if (local_2c == 0x28) {
      FUN_004126b8(local_34,&local_28,0x24);
    }
    else {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&local_78c);
      piVar3 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',local_78c);
      FUN_004036f4(piVar3);
    }
    if (local_1c == 3) {
      FUN_004126b8(local_34,&local_354,0xc);
      FUN_00454c04(local_354,local_350,local_34c,local_784);
    }
    else if (local_1e == 0x10) {
      FUN_00454b40(5,5,5,local_784);
    }
    else if (local_1e == 0x20) {
      FUN_00454b40(8,8,8,local_784);
    }
    else {
      FUN_00454b40(8,8,8,local_784);
    }
    iVar2 = local_c;
    if ((local_c == 0) && (local_1e < 9)) {
      iVar2 = 1 << ((byte)local_1e & 0x1f);
    }
    if (0x100 < iVar2) {
      iVar2 = 0x100;
    }
    FUN_00402c30(local_754,0x400,0);
    if (bVar1) {
      FUN_004126b8(local_34,local_348,iVar2 * 3);
      if (-1 < iVar2 + -1) {
        local_3c = iVar2;
        puVar5 = local_348;
        puVar6 = local_754;
        do {
          uVar4 = FUN_00454c64(puVar5[2],puVar5[1],*puVar5);
          *puVar6 = uVar4;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 3;
          local_3c = local_3c + -1;
        } while (local_3c != 0);
      }
    }
    else {
      FUN_004126b8(local_34,local_754,iVar2 << 2);
    }
    FUN_00455154(local_30,local_28,(local_24 ^ (int)local_24 >> 0x1f) - ((int)local_24 >> 0x1f),
                 local_1c - 1U < 2,local_35,local_754,local_784,(uint)local_1e);
    if (local_1c == 0) {
      FUN_00455ab4();
    }
    else if (local_1c == 1) {
      FUN_00455a5c();
    }
    else if (local_1c == 2) {
      FUN_00455a04();
    }
    else if (local_1c == 3) {
      FUN_00455ab4();
    }
    else {
      FUN_00405808((undefined4 *)PTR_PTR_004ab8a0,(int *)&local_790);
      piVar3 = FUN_0040b5d8((int *)&DAT_00416698,'\x01',local_790);
      FUN_004036f4(piVar3);
    }
  }
  *in_FS_OFFSET = uStack_7a8;
  pcStack_7a0 = FUN_00455e2d;
  pcStack_7a4 = (code *)0x455e25;
  FUN_00403c80((int *)&local_790,3);
  return;
}


