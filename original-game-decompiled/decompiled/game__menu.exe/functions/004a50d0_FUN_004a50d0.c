
/* ==== FUN_004a50d0 @ 004a50d0 ==== 
 * signature: undefined FUN_004a50d0(void)
 * body: 004a50d0-004a51cb
 */

void FUN_004a50d0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  int iStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  iStack_14 = 0;
  puStack_20 = &UNK_004a51cc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"ShowIntro",0);
  FUN_00408a30(*(undefined **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x10),(int *)&puStack_c);
  FUN_00403f28((int *)&puStack_8,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),puStack_c);
  uVar3 = FUN_004087a4((undefined *)puStack_8);
  cVar4 = (char)uVar3;
  if (cVar4 == '\0') {
    FUN_00403f28(&iStack_10,(undefined4 *)"intro not found : ",puStack_8);
    iVar1 = iStack_10;
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,iVar1);
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,0x4a5214);
    FUN_004a5c24(param_1,&puStack_8);
    cVar4 = puStack_8 != (undefined4 *)0x0;
  }
  if (cVar4 == '\0') {
    FUN_00403f28(&iStack_14,(undefined4 *)"final search: intro not found : ",puStack_8);
    iVar1 = iStack_14;
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,iVar1);
  }
  else {
    FUN_004a4850(puStack_8);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &UNK_004a51d3;
  puStack_20 = (undefined *)0x4a51cb;
  FUN_00403c80(&iStack_14,4);
  return;
}


