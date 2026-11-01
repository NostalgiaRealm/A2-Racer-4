
/* ==== TData.DataDestroy @ 0047f4ac ==== 
 * signature: undefined TData.DataDestroy(void)
 * body: 0047f4ac-0047f666
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TData_DataDestroy(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined *puStack_11c;
  undefined1 *puStack_118;
  undefined4 *puStack_110;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_118 = &stack0xfffffffc;
  puStack_110 = (undefined4 *)0x0;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_11c = &UNK_0047f667;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if ((char)param_1[0x36] == '\0') {
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  else if ((char)param_1[0x2a] != '\0') {
    FUN_0048c3f0(param_1[0x30]);
  }
  if (param_1[0x30] != 0) {
    FUN_0047fa5c(param_1);
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x30] + 8))();
    uVar2 = FUN_0045f46c();
    FUN_0045fd98(uVar2,0x47f6a0,piVar3);
  }
  FUN_00403f28((int *)&puStack_110,(undefined4 *)param_1[0x2e],(undefined4 *)"menu.ini");
  FUN_00460568((int *)param_1[0x31],puStack_110);
  piVar3 = (int *)(**(code **)(*(int *)param_1[0x31] + 8))();
  uVar2 = FUN_0045f46c();
  FUN_0045fd98(uVar2,0x47f6d0,piVar3);
  if (*(char *)(param_1[0x31] + 8) == '\0') {
    FUN_0040c968(param_1 + 0x35);
    FUN_0040c968(param_1 + 0x32);
  }
  FUN_0040c968(param_1 + 0x37);
  FUN_0040c968(param_1 + 0x28);
  FUN_0040c968(param_1 + 0x2c);
  FUN_0040c968(param_1 + 0x2d);
  FUN_0040c968(param_1 + 0x2b);
  FUN_0040c968(param_1 + 0x30);
  FUN_0040c968(param_1 + 0x31);
  FUN_0040c968(param_1 + 0x33);
  FUN_0045f46c();
  FUN_0045fed8();
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "DataDestroy";
  FUN_00403c5c((int *)&puStack_110);
  FUN_00403c80(&iStack_c,2);
  return;
}


