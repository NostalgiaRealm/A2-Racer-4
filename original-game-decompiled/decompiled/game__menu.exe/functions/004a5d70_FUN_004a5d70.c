
/* ==== FUN_004a5d70 @ 004a5d70 ==== 
 * signature: undefined FUN_004a5d70(void)
 * body: 004a5d70-004a5f43
 */

void FUN_004a5d70(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  undefined4 *puStack_c;
  int iStack_8;
  
  puStack_14 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (undefined4 *)0x0;
  puStack_18 = &UNK_004a5f44;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"StartUp",0);
  iVar3 = FUN_004a5d4c(param_1);
  if (iVar3 == 2) {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) = 0;
    FUN_0047ff64(*(int **)PTR_DAT_004ab694);
  }
  else {
    *(undefined1 *)(*(int *)PTR_DAT_004ab694 + 0xa8) =
         *(undefined1 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9);
    cVar1 = *(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9);
    if (cVar1 == '\0') {
      FUN_004a50d0(param_1);
      FUN_004820d0(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xb0),
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0x18));
      FUN_004a525c(param_1);
    }
    else if (cVar1 == '\x01') {
      FUN_004820d0(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xb0),
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0x18));
      FUN_0047f840(*(int **)PTR_DAT_004ab694,
                   *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14));
      FUN_004a54dc(param_1);
      FUN_004a58a4(param_1);
    }
    else if (cVar1 == '\x02') {
      FUN_004820d0(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xb0),
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x30) + 0x18));
      FUN_0047f840(*(int **)PTR_DAT_004ab694,
                   *(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 0x14));
      FUN_004a5624(param_1);
      FUN_004a59cc(param_1);
    }
    else {
      FUN_004085ac((uint)*(byte *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4) + 9),(int *)&puStack_c)
      ;
      FUN_00403f28(&iStack_8,(undefined4 *)"illegal value of Previous : ",puStack_c);
      iVar3 = iStack_8;
      uVar2 = FUN_0045f46c();
      FUN_0045fe88(uVar2,iVar3);
    }
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_004a5f4b;
  puStack_18 = (undefined *)0x4a5f43;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


