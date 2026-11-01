
/* ==== TSaveGame.Destroy @ 0048ab58 ==== 
 * signature: undefined TSaveGame.Destroy(void)
 * body: 0048ab58-0048ac1c
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TSaveGame_Destroy(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  code *pcStack_11c;
  undefined1 *puStack_118;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = (undefined1 *)0x48ab70;
  piVar2 = FUN_004032fc(param_1,param_2);
  pcStack_11c = thunk_FUN_004036bc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  FUN_00402ee4(*piVar2,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  FUN_0040c968(piVar2 + 2);
  FUN_0040c968(piVar2 + 6);
  FUN_0040c968(piVar2 + 4);
  FUN_0040c968(piVar2 + 3);
  TDataObject_Destroy(piVar2,extraout_DL & 0xfc);
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "Destroy";
  FUN_00403c80(&iStack_c,2);
  return;
}


