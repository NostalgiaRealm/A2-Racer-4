
/* ==== TGDIHint.dyn_b012 @ 00466438 ==== 
 * signature: undefined TGDIHint.dyn_b012(void)
 * body: 00466438-004664d0
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TGDIHint_dyn_b012(int *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  undefined *puStack_c;
  undefined *puStack_8;
  
  puStack_14 = &stack0xfffffffc;
  puStack_8 = (undefined *)0x0;
  puStack_c = (undefined *)0x0;
  puStack_18 = &UNK_004664d1;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + -0x10))();
  if ((char)param_1[0x4b] == '\0') {
    TGroupBox_get_Caption((int)param_1,(int *)&puStack_8);
    uVar1 = FUN_00419338((int *)param_1[0x48],puStack_8);
    iVar2 = uVar1 + 6;
    if (SCARRY4(uVar1,6)) {
      thunk_FUN_00402808(uVar1);
      iVar2 = extraout_EDX;
    }
    TControl_set_Width(param_1,iVar2);
    TGroupBox_get_Caption((int)param_1,(int *)&puStack_c);
    uVar1 = FUN_00419354((int *)param_1[0x48],puStack_c);
    iVar2 = uVar1 + 4;
    if (SCARRY4(uVar1,4)) {
      thunk_FUN_00402808(uVar1);
      iVar2 = extraout_EDX_00;
    }
    TControl_set_Height(param_1,iVar2);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_004664d8;
  puStack_18 = (undefined *)0x4664d0;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


