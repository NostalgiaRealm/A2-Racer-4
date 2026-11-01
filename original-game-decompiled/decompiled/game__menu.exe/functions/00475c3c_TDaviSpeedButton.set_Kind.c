
/* ==== TDaviSpeedButton.set_Kind @ 00475c3c ==== 
 * signature: undefined TDaviSpeedButton.set_Kind(void)
 * body: 00475c3c-00475cfd
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviSpeedButton_set_Kind(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar4;
  char cVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  int iStack_8;
  
  puStack_18 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_1c = &UNK_00475cfe;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar5 = (char)param_2;
  if (cVar5 == (char)param_1[0x4f]) goto LAB_00475ce8;
  puVar2 = &stack0xfffffffc;
  if (cVar5 != '\0') {
    uVar4 = param_2;
    puVar2 = &stack0xfffffffc;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
LAB_00475c7c:
      puStack_18 = puVar2;
      if ((*(byte *)(param_1 + 8) & 1) == 0) goto LAB_00475c82;
    }
    else {
      TGroupBox_get_Caption((int)param_1,&iStack_8);
      param_3 = extraout_ECX;
      uVar4 = extraout_EDX;
      puVar2 = puStack_18;
      if (iStack_8 != 0) goto LAB_00475c7c;
LAB_00475c82:
      TGroupBox_set_Caption((int)param_1,(uint *)0x0);
      puVar1 = *(undefined4 **)((param_2 & 0xff) * 4 + 0x4ab2f0);
      param_3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
      if ((puVar1 != (undefined4 *)0x0) && (param_1[0x1c] == 0)) {
        FUN_00405808(puVar1,param_1 + 0x1c);
        TGroupBox_set_ShowHint((int)param_1,'\x01');
        param_3 = extraout_ECX_01;
        uVar4 = extraout_EDX_01;
      }
    }
    piVar3 = (int *)FUN_00474114(param_2,uVar4,param_3);
    FUN_004746ac(param_1[0x4d],piVar3);
    TDaviSpeedButton_set_NumGlyphs(param_1,2);
    *(undefined1 *)(param_1 + 0x51) = 0;
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  *(char *)(param_1 + 0x4f) = cVar5;
  (**(code **)(*param_1 + 0x74))();
LAB_00475ce8:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_00475d05;
  puStack_1c = (undefined *)0x475cfd;
  FUN_00403c5c(&iStack_8);
  return;
}


