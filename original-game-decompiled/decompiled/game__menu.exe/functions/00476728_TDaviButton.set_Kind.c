
/* ==== TDaviButton.set_Kind @ 00476728 ==== 
 * signature: undefined TDaviButton.set_Kind(void)
 * body: 00476728-00476818
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviButton_set_Kind(int *param_1,uint param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar4;
  char cVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  uint *puStack_c;
  int iStack_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (uint *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar5 = (char)param_2;
  if (cVar5 == (char)param_1[0x82]) goto LAB_004767fb;
  pcVar1 = (code *)&stack0xfffffffc;
  if (cVar5 != '\0') {
    TButton_set_Default(param_1,cVar5 == '\x01');
    *(bool *)((int)param_1 + 0x1f9) = cVar5 == '\x02';
    uVar3 = extraout_ECX;
    uVar4 = extraout_EDX;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
LAB_0047678c:
      if ((*(byte *)(param_1 + 8) & 1) == 0) goto LAB_00476792;
    }
    else {
      TGroupBox_get_Caption((int)param_1,&iStack_8);
      uVar3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
      if (iStack_8 != 0) goto LAB_0047678c;
LAB_00476792:
      if (*(undefined4 **)(&DAT_004ab23c + (param_2 & 0xff) * 4) != (undefined4 *)0x0) {
        FUN_00405808(*(undefined4 **)(&DAT_004ab23c + (param_2 & 0xff) * 4),(int *)&puStack_c);
        TGroupBox_set_Caption((int)param_1,puStack_c);
        uVar3 = extraout_ECX_01;
        uVar4 = extraout_EDX_01;
      }
    }
    param_1[0x7f] = *(int *)(&DAT_004ab3a4 + (param_2 & 0xff) * 4);
    piVar2 = (int *)FUN_00474114(param_2,uVar4,uVar3);
    FUN_004746ac(param_1[0x81],piVar2);
    TDaviButton_set_NumGlyphs(param_1,2);
    *(undefined1 *)(param_1 + 0x84) = 0;
    pcVar1 = pcStack_1c;
  }
  pcStack_1c = pcVar1;
  *(char *)(param_1 + 0x82) = cVar5;
  (**(code **)(*param_1 + 0x74))();
LAB_004767fb:
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00476820;
  pcStack_20 = (code *)0x476810;
  FUN_00403c5c((int *)&puStack_c);
  pcStack_20 = (code *)0x476818;
  FUN_00403c5c(&iStack_8);
  return;
}


