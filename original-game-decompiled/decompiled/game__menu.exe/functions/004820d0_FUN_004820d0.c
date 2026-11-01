
/* ==== FUN_004820d0 @ 004820d0 ==== 
 * signature: undefined FUN_004820d0(void)
 * body: 004820d0-004821be
 */

void FUN_004820d0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined1 *puStack_11c;
  int *piStack_110;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_11c = &stack0xfffffffc;
  piStack_110 = (int *)0x0;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_120 = &UNK_004821bf;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  cVar2 = FUN_00482750(param_1);
  if (cVar2 != '\0') {
    FUN_0046bd3c(param_1[4],(int *)&piStack_110);
    FUN_00405878(param_1 + 6,piStack_110);
    FUN_00482830(param_1,param_2);
    FUN_0046bdc4(param_1[4],(int *)param_1[6]);
    (**(code **)(*(int *)param_1[6] + 0x30))();
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "StartMusic";
  FUN_00405860((int *)&piStack_110);
  FUN_00403c80(&iStack_c,2);
  return;
}


