
/* ==== FUN_00493d30 @ 00493d30 ==== 
 * signature: undefined __register FUN_00493d30(int * param_1)
 * body: 00493d30-00493e73
 */

void FUN_00493d30(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_278;
  code *pcStack_274;
  undefined1 *puStack_270;
  undefined *local_268;
  byte local_264 [256];
  int local_164;
  undefined4 *local_160;
  WORD local_15c [6];
  undefined *local_150;
  
  local_268 = (undefined *)0x0;
  local_160 = (undefined4 *)0x0;
  local_164 = 0;
  puStack_270 = (undefined1 *)0x493d61;
  FUN_00404480((int)local_15c,(int)&DAT_004075bc);
  pcStack_274 = thunk_FUN_004036bc;
  uStack_278 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_278;
  puStack_270 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_264);
  FUN_00403e80(&local_164,local_264);
  FUN_00403f9c((int *)&local_160,3);
  puVar1 = local_160;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_00403f9c((int *)&local_268,4);
  DVar3 = FUN_00408854(local_268,0x3f,local_15c);
  while (DVar3 == 0) {
    FUN_004088e4(local_150);
    DVar3 = FUN_004088a4(local_15c);
  }
  FUN_004088c8((int)local_15c);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = FUN_00493ed0;
  FUN_00403c5c((int *)&local_268);
  FUN_00403c80(&local_164,2);
  FUN_0040454c((int)local_15c,(int)&DAT_004075bc);
  return;
}


