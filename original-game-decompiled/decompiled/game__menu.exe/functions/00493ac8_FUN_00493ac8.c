
/* ==== FUN_00493ac8 @ 00493ac8 ==== 
 * signature: undefined __register FUN_00493ac8(int * param_1)
 * body: 00493ac8-00493cbf
 */

void FUN_00493ac8(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_288;
  code *pcStack_284;
  undefined1 *puStack_280;
  undefined4 *local_274;
  undefined *local_270;
  undefined *local_26c;
  undefined *local_268;
  byte local_264 [256];
  int local_164;
  undefined4 *local_160;
  WORD local_15c [6];
  undefined *local_150;
  
  local_270 = (undefined *)0x0;
  local_274 = (undefined4 *)0x0;
  local_26c = (undefined *)0x0;
  local_268 = (undefined *)0x0;
  local_160 = (undefined4 *)0x0;
  local_164 = 0;
  puStack_280 = (undefined1 *)0x493b0c;
  FUN_00404480((int)local_15c,(int)&DAT_004075bc);
  puVar1 = PTR_DAT_004ab694;
  pcStack_284 = thunk_FUN_004036bc;
  uStack_288 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_288;
  puStack_280 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_264);
  FUN_00403e80(&local_164,local_264);
  FUN_00403f9c((int *)&local_160,3);
  puVar2 = local_160;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  FUN_00403f9c((int *)&local_268,4);
  DVar4 = FUN_00408854(local_268,0x3f,local_15c);
  while (DVar4 == 0) {
    FUN_004088e4(local_150);
    DVar4 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  FUN_00403f9c((int *)&local_26c,4);
  DVar4 = FUN_00408854(local_26c,0x3f,local_15c);
  while (DVar4 == 0) {
    uVar5 = FUN_00481208(local_150);
    FUN_00481178(uVar5,(int *)&local_274);
    FUN_00403f28((int *)&local_270,*(undefined4 **)(*(int *)puVar1 + 0xb8),local_274);
    FUN_004088fc(local_150,local_270);
    DVar4 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = &DAT_00493d2c;
  FUN_00403c80((int *)&local_274,4);
  FUN_00403c80(&local_164,2);
  FUN_0040454c((int)local_15c,(int)&DAT_004075bc);
  return;
}


