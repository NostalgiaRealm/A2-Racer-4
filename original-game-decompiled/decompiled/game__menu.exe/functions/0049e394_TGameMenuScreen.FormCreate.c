
/* ==== TGameMenuScreen.FormCreate @ 0049e394 ==== 
 * signature: undefined TGameMenuScreen.FormCreate(void)
 * body: 0049e394-0049e53e
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TGameMenuScreen_FormCreate(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  int iVar5;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined1 *puStack_11c;
  undefined4 *puStack_110;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_11c = &stack0xfffffffc;
  puStack_110 = (undefined4 *)0x0;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_120 = &UNK_0049e53f;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar7 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar7,0);
  TGDIButton_set_Definition((int *)param_1[0xb5],*(int *)(*(int *)PTR_DAT_004ab694 + 0x5c));
  TGDIButton_set_Definition((int *)param_1[0xb6],*(int *)(*(int *)PTR_DAT_004ab694 + 0x60));
  *(undefined1 *)(param_1 + 0x7a) = 1;
  param_1[0xb9] = 0;
  uVar8 = 800;
  uVar6 = 600;
  iVar3 = FUN_0044b0f4();
  uVar2 = iVar3 - 600;
  if (SBORROW4(iVar3,600)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  uVar4 = FUN_0044b100();
  uVar2 = uVar4 - 800;
  if (SBORROW4(uVar4,800)) {
    thunk_FUN_00402808(uVar4);
    uVar2 = extraout_EDX;
  }
  iVar5 = (int)uVar2 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar2 & 1) != 0);
  }
  (**(code **)(*param_1 + 0x7c))(param_1,iVar5,iVar3,uVar6,uVar8);
  TGroupBox_set_Align((int *)param_1[0xb4],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),5),
                      extraout_ECX);
  (**(code **)(*param_1 + 0xe4))(param_1,&puStack_110);
  cVar1 = FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),param_1[0xb4],puStack_110);
  uVar8 = extraout_EDX_01;
  if (cVar1 == '\0') {
    FUN_004899ec(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),param_1[0xb4],(undefined4 *)"currentc");
    uVar8 = extraout_EDX_02;
  }
  (**(code **)(*(int *)param_1[0xb5] + 0x5c))
            ((int *)param_1[0xb5],
             CONCAT31((int3)((uint)uVar8 >> 8),*(int *)(*(int *)PTR_DAT_004ab694 + 0xbc) == 0) ^ 1);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = uVar6;
  FUN_00403c5c((int *)&puStack_110);
  FUN_00403c80(&iStack_c,2);
  return;
}


