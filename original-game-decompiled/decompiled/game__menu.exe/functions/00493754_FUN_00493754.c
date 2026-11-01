
/* ==== FUN_00493754 @ 00493754 ==== 
 * signature: undefined __register FUN_00493754(int * param_1)
 * body: 00493754-00493874
 */

void FUN_00493754(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  local_8 = (undefined4 *)0x0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,local_110);
  FUN_00403e80(&local_10,local_110);
  FUN_00403f9c((int *)&local_c,3);
  puVar2 = local_c;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  FUN_00403c5c((int *)&local_8);
  do {
    iVar4 = FUN_00498414((int *)&local_8);
    if (local_8 != (undefined4 *)0x0) break;
  } while (iVar4 != 2);
  if (iVar4 == 1) {
    FUN_0047fbd4(*(int **)PTR_DAT_004ab694,local_8);
    piVar5 = (int *)TSettings_vmt_004((int *)&PTR_TSettings_vmt_000_004a6010,'\x01');
    (**(code **)(*piVar5 + 0xc))
              (piVar5,*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18));
    piVar1 = *(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18);
    (**(code **)(*piVar1 + 0xc))(piVar1,piVar5);
    FUN_00402f9c(piVar5);
    FUN_0047fa5c(*(int **)PTR_DAT_004ab694);
    FUN_00493338(param_1);
    FUN_00493ed0(param_1);
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "AddNewPlayer";
  FUN_00403c80(&local_10,3);
  return;
}


