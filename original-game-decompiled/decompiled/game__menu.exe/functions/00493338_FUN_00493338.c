
/* ==== FUN_00493338 @ 00493338 ==== 
 * signature: undefined __register FUN_00493338(int * param_1)
 * body: 00493338-004934d1
 */

void FUN_00493338(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_27c;
  code *pcStack_278;
  undefined1 *puStack_274;
  undefined *local_268;
  byte local_264 [256];
  int local_164;
  undefined4 *local_160;
  WORD local_15c [6];
  undefined *local_150;
  
  local_268 = (undefined *)0x0;
  local_160 = (undefined4 *)0x0;
  local_164 = 0;
  puStack_274 = (undefined1 *)0x49336a;
  FUN_00404480((int)local_15c,(int)&DAT_004075bc);
  pcStack_278 = thunk_FUN_004036bc;
  uStack_27c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_27c;
  puStack_274 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_264);
  FUN_00403e80(&local_164,local_264);
  FUN_00403f9c((int *)&local_160,3);
  puVar1 = local_160;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_0045e860(param_1[0xcb]);
  FUN_00403f28((int *)&local_268,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"save*.rcr");
  DVar3 = FUN_00408854(local_268,0x3f,local_15c);
  while (DVar3 == 0) {
    iVar4 = FUN_00481208(local_150);
    piVar5 = (int *)FUN_00492dd8((int *)&PTR_TStoredGame_vmt_000_00492db4,'\x01',iVar4);
    piVar6 = (int *)(**(code **)(*piVar5 + 8))();
    uVar2 = FUN_0045f46c();
    FUN_0045fd98(uVar2,0x493524,piVar6);
    if (*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14) != piVar5[2]) {
      uVar2 = FUN_0045f46c();
      FUN_0045fe88(uVar2,0x493544);
      FUN_0045e7e4(param_1[0xcb],piVar5);
    }
    DVar3 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "BuildFileList";
  FUN_00403c5c((int *)&local_268);
  FUN_00403c80(&local_164,2);
  FUN_0040454c((int)local_15c,(int)&DAT_004075bc);
  return;
}


