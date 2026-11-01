
/* ==== FUN_0045cc98 @ 0045cc98 ==== 
 * signature: undefined FUN_0045cc98(void)
 * body: 0045cc98-0045cc9f
 */

void FUN_0045cc98(void)

{
  undefined *puVar1;
  int *piVar2;
  undefined **ppuVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  char cVar5;
  undefined4 extraout_EDX;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined4 *in_FS_OFFSET;
  bool in_CF;
  bool in_ZF;
  undefined **in_stack_00000004;
  undefined **in_stack_00000008;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  undefined **in_stack_0000001c;
  char *pcStack_110;
  undefined4 uStack_100;
  code *pcStack_fc;
  undefined1 *puStack_f8;
  undefined **ppuStack_f4;
  undefined4 uStack_f0;
  byte abStack_ec [236];
  
  ppuVar7 = in_stack_0000001c;
  cVar5 = (char)in_stack_00000014;
  ppuVar3 = in_stack_0000001c;
  iVar4 = in_stack_00000018;
  ppuVar6 = in_stack_00000008;
  if (!in_CF && !in_ZF) {
    *(char *)in_stack_0000001c = *(char *)in_stack_0000001c + (char)in_stack_0000001c;
    *(char *)in_stack_0000001c = *(char *)in_stack_0000001c + (char)in_stack_0000001c;
    puStack_f8 = (undefined1 *)&stack0x0000001c;
    ppuVar6 = (undefined **)&stack0x0000001c;
    ppuVar3 = (undefined **)&stack0x0000001c;
    in_stack_0000001c = in_stack_00000008;
    uStack_f0 = in_stack_00000010;
    ppuStack_f4 = in_stack_00000004;
    in_stack_00000018 = 0;
    in_stack_00000014 = 0;
    pcStack_fc = thunk_FUN_004036bc;
    uStack_100 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_100;
    FUN_0040c968(ppuVar7 + 3);
    if (cVar5 == '\0') {
      piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',extraout_ECX);
      ppuVar7[3] = (undefined *)piVar2;
      piVar2 = (int *)FUN_0040312c(piVar2,(int)&PTR_TPersistent_vmt_000_00454aa4);
      FUN_00456634(piVar2,extraout_EDX,extraout_ECX_00);
      ppuVar3 = (undefined **)&stack0x0000001c;
      goto LAB_0045cd8c;
    }
    if (cVar5 != '\x01') {
      if (cVar5 == '\x02') {
        piVar2 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00458968,'\x01',extraout_ECX);
        ppuVar7[3] = (undefined *)piVar2;
        ppuVar3 = (undefined **)&stack0x0000001c;
      }
      else if ((cVar5 == '\x03') || (cVar5 == '\x04')) {
        piVar2 = TDaviAnimation_vmt_00c
                           ((int *)&PTR_TPersistent_vmt_000_0045b71c,'\x01',extraout_ECX);
        ppuVar7[3] = (undefined *)piVar2;
        ppuVar3 = (undefined **)&stack0x0000001c;
      }
      else {
        FUN_00402ee4((int)*ppuVar7,abStack_ec);
        FUN_00403e80(&stack0x00000014,abStack_ec);
        pcStack_110 = " Unhandled case-part";
        FUN_00403f9c(&stack0x00000018,4);
        FUN_00403c40(in_stack_00000018);
      }
      goto LAB_0045cd8c;
    }
    cVar5 = '\x01';
    ppuVar3 = &PTR_TPersistent_vmt_000_00454aa4;
    iVar4 = extraout_ECX;
    in_stack_00000004 = ppuVar7;
  }
  piVar2 = TDIB_vmt_00c((int *)ppuVar3,cVar5,iVar4);
  in_stack_00000004[3] = (undefined *)piVar2;
  ppuVar3 = ppuVar6;
  ppuVar7 = in_stack_00000004;
LAB_0045cd8c:
  puVar1 = ppuVar7[3];
  *(undefined **)(puVar1 + 8) = ppuVar7[4];
  *(undefined **)(puVar1 + 0xc) = ppuVar7[5];
  *in_FS_OFFSET = pcStack_110;
  FUN_00403c80((int *)(ppuVar3 + -2),2);
  return;
}


