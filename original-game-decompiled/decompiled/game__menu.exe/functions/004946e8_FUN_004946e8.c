
/* ==== FUN_004946e8 @ 004946e8 ==== 
 * signature: undefined FUN_004946e8(void)
 * body: 004946e8-004947e9
 */

void FUN_004946e8(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 *puStack_10;
  int iStack_c;
  int iStack_8;
  
  puStack_20 = &stack0xfffffffc;
  iStack_8 = 0;
  iStack_c = 0;
  puStack_10 = (undefined4 *)0x0;
  puStack_24 = &UNK_004947ea;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar1 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    iStack_8 = 0;
    do {
      piVar2 = (int *)TGDICustomButtonDefinition_vmt_02c
                                (&PTR_TPersistent_vmt_000_00466ed8,1,param_1);
      TGDIButtonDefinition_set_Translucent((int)piVar2,'\x01');
      FUN_00480b08(iStack_8,(int *)&puStack_10);
      FUN_00403f28(&iStack_c,(undefined4 *)"defChar",puStack_10);
      (**(code **)(*piVar2 + 0x18))(piVar2,iStack_c);
      TGDIButtonDefinition_set_Font(piVar2,*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xdc));
      (**(code **)(*(int *)piVar2[0x1a] + 0x2c))((int *)piVar2[0x1a],10);
      (**(code **)(*(int *)piVar2[0x1a] + 0x34))((int *)piVar2[0x1a],0x87);
      (**(code **)(*(int *)piVar2[0x1a] + 0x30))((int *)piVar2[0x1a],0x73);
      (**(code **)(*(int *)piVar2[0x1a] + 0x38))((int *)piVar2[0x1a],0x9b);
      piVar2[0x19] = param_1;
      piVar2[0x18] = (int)TfrmPlayer_gdfBtnDeletePlayerButtonStateChange;
      iStack_8 = iStack_8 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &UNK_004947f1;
  puStack_24 = (undefined *)0x4947e9;
  FUN_00403c80((int *)&puStack_10,2);
  return;
}


