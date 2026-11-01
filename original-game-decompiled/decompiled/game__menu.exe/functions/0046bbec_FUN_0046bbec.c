
/* ==== FUN_0046bbec @ 0046bbec ==== 
 * signature: undefined FUN_0046bbec(void)
 * body: 0046bbec-0046bc9a;0046bcb1-0046bcc6
 */

void FUN_0046bbec(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined1 *puStack_2c;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puStack_2c = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  piStack_1c = (int *)0x0;
  puStack_30 = &UNK_0046bcc7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_3c = &UNK_0046bc9b;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  FUN_00405860((int *)&DAT_004ad198);
  iVar2 = DirectSoundCreate();
  FUN_0046ba74(iVar2,0x46bce0);
  FUN_00402c30(&uStack_18,0x14,0);
  uStack_18 = 0x14;
  uStack_14 = 1;
  FUN_0046bb44(&uStack_18,(int *)&piStack_1c);
  FUN_00405878((int *)&DAT_004ad19c,piStack_1c);
  FUN_004349e0(param_1);
  piVar1 = DAT_004ad198;
  iVar2 = (**(code **)(*DAT_004ad198 + 0x18))();
  FUN_0046ba74(iVar2,0x46bd04);
  DAT_004ab06c = 1;
  *in_FS_OFFSET = piVar1;
  *in_FS_OFFSET = 0;
  FUN_00405860((int *)&piStack_1c);
  return;
}


