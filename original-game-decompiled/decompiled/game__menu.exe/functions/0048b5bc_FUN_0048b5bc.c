
/* ==== FUN_0048b5bc @ 0048b5bc ==== 
 * signature: undefined FUN_0048b5bc(void)
 * body: 0048b5bc-0048b6f1
 */

void FUN_0048b5bc(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined1 *puStack_11c;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_11c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_120 = &UNK_0048b6f2;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  puVar5 = &UNK_0048b708;
  pcVar4 = "WriteQRStuffToIni";
  iVar2 = iStack_c;
  FUN_00403f9c((int *)&puStack_8,3);
  puVar3 = puStack_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar3,0);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","MONEY",0,pcVar4,puVar5,iVar2);
  iVar2 = FUN_0048c20c(param_1);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER",&UNK_0048b754,*(undefined4 *)(iVar2 + 0xc));
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","TURBO_AMOUNT",100);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","MOTOR",1);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","BANDEN",1);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER",&UNK_0048b798,1);
  (**(code **)(*param_2 + 0x14))(param_2,"PLAYER","VERSNELLINGSBAK",1);
  (**(code **)(*param_2 + 0xc))(param_2,"PLAYER","POSITION");
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = 4;
  FUN_00403c80(&iStack_c,2);
  return;
}


