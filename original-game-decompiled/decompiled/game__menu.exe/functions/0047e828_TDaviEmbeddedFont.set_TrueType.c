
/* ==== TDaviEmbeddedFont.set_TrueType @ 0047e828 ==== 
 * signature: undefined TDaviEmbeddedFont.set_TrueType(void)
 * body: 0047e828-0047e8d5;0047e8dd-0047e8f2
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviEmbeddedFont_set_TrueType(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStackY_2c;
  undefined *puStackY_28;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  uint *puStack_8;
  
  puStack_18 = (undefined1 *)0x47e83d;
  puStack_8 = param_2;
  FUN_00404090((int)param_2);
  bVar3 = true;
  puStack_1c = &UNK_0047e8f3;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00403fec(*(uint **)(param_1 + 0x28),puStack_8);
  if (!bVar3) {
    FUN_00403cb0((int *)(param_1 + 0x28),puStack_8);
    if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
      puStackY_28 = (undefined *)0x47e87e;
      piVar1 = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0040f0bc,'\x01',
                            *(undefined **)(param_1 + 0x28),0);
      puStackY_28 = &UNK_0047e8d6;
      uStackY_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_2c;
      iVar2 = FUN_00412680(piVar1);
      *(int *)(param_1 + 0x2c) = iVar2;
      FUN_004027ac((int *)(param_1 + 0x30),iVar2);
      (**(code **)(*piVar1 + 0xc))(piVar1,0,0);
      FUN_004126b8(piVar1,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x2c));
      *in_FS_OFFSET = uStackY_2c;
      puStackY_28 = (undefined *)0x47e8d5;
      FUN_00402f9c(piVar1);
      return;
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &UNK_0047e8fa;
  puStack_1c = (undefined *)0x47e8f2;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


