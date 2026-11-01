
/* ==== TStatic.Destroy @ 0048df74 ==== 
 * signature: undefined TStatic.Destroy(void)
 * body: 0048df74-0048e06f
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TStatic_Destroy(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  byte extraout_DL;
  byte bVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  byte bStack_5;
  
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  puStack_11c = (undefined1 *)0x48df8c;
  piVar2 = FUN_004032fc(param_1,param_2);
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puStack_11c = &stack0xfffffffc;
  bStack_5 = extraout_DL;
  FUN_00402ee4(*piVar2,abStack_110);
  FUN_00403e80(&iStack_10,abStack_110);
  FUN_00403f9c((int *)&puStack_c,3);
  puVar1 = puStack_c;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  FUN_0040c968(piVar2 + 0xe);
  FUN_0040c968(piVar2 + 0xf);
  FUN_0040c968(piVar2 + 0xb);
  FUN_0040c968(piVar2 + 0xc);
  FUN_0045e860(piVar2[0xd]);
  FUN_0040c968(piVar2 + 0xd);
  FUN_0045e860(piVar2[2]);
  FUN_0040c968(piVar2 + 2);
  bVar4 = 0;
  do {
    FUN_00402f9c((int *)piVar2[bVar4 + 6]);
    bVar4 = bVar4 + 1;
  } while (bVar4 != 5);
  TDataObject_Destroy(piVar2,bStack_5 & 0xfc);
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "Destroy";
  FUN_00403c80(&iStack_10,2);
  return;
}


