
/* ==== TCharResult.vmt_014 @ 0048da18 ==== 
 * signature: undefined TCharResult.vmt_014(void)
 * body: 0048da18-0048daf4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCharResult_vmt_014(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  char cStack_5;
  
  puStack_120 = &stack0xfffffffc;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  FUN_00402ee4(*param_1,abStack_110);
  FUN_00403e80(&iStack_10,abStack_110);
  FUN_00403f9c((int *)&puStack_c,3);
  puVar1 = puStack_c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TDataObject_vmt_014();
  FUN_0045e350(param_2,param_1 + 3);
  FUN_0045e350(param_2,param_1 + 2);
  FUN_0045e350(param_2,param_1 + 4);
  uVar2 = 0;
  do {
    FUN_0045e370(param_2,&cStack_5);
    if (cStack_5 != '\0') {
      FUN_0048dcd0((int)param_1,uVar2);
    }
    uVar2 = uVar2 + 1;
  } while ((char)uVar2 != '\x05');
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&iStack_10,2);
  return;
}


