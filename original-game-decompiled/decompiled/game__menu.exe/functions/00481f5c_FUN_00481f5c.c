
/* ==== FUN_00481f5c @ 00481f5c ==== 
 * signature: undefined __register FUN_00481f5c(int * param_1, int * param_2)
 * body: 00481f5c-0048202a;0048204b-0048206f
 */

void FUN_00481f5c(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  code *pcStack_13c;
  undefined4 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  code *pcStack_12c;
  undefined4 uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  pcStack_12c = (code *)0x481f90;
  local_8 = param_2;
  FUN_00402ee4(*param_1,local_110);
  pcStack_12c = (code *)0x481f9e;
  FUN_00403e80(&local_10,local_110);
  pcStack_12c = (code *)local_10;
  puStack_130 = &DAT_00482088;
  pcStack_134 = "StopSoundBuffer";
  puStack_138 = (undefined4 *)0x481fb8;
  FUN_00403f9c((int *)&local_c,3);
  puStack_138 = local_c;
  pcStack_13c = (code *)0x481fc1;
  uVar3 = FUN_0045f46c();
  puVar2 = puStack_138;
  puStack_138 = (undefined4 *)0x481fcd;
  FUN_0045fb90(uVar3,puVar2,0);
  pcStack_13c = thunk_FUN_00403408;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  iVar1 = *(int *)(param_1[7] + 8);
  iVar5 = iVar1 + -1;
  puStack_138 = (undefined4 *)&stack0xfffffffc;
  if (SBORROW4(iVar1,1)) {
    puStack_138 = (undefined4 *)&stack0xfffffffc;
    thunk_FUN_00402808(param_1[7]);
  }
  if (-1 < iVar5) {
    do {
      piVar4 = (int *)FUN_004102b0((undefined4 *)param_1[7],iVar5);
      if (piVar4 == local_8) {
        (**(code **)(*(int *)piVar4[1] + 0x48))();
        FUN_00410150((int *)param_1[7],iVar5);
        FUN_00402f9c(piVar4);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  *in_FS_OFFSET = uStack_140;
  puStack_138 = (undefined4 *)0x482050;
  uVar3 = FUN_0045f46c();
  puStack_138 = (undefined4 *)0x482055;
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = pcStack_134;
  pcStack_12c = FUN_00482077;
  puStack_130 = (undefined *)0x48206f;
  FUN_00403c80(&local_10,2);
  return;
}


