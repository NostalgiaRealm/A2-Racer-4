
/* ==== TPageControl.set_TabHeight @ 00484dec ==== 
 * signature: undefined TPageControl.set_TabHeight(void)
 * body: 00484dec-00484e89
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_TabHeight(int *param_1,short param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  short extraout_DX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffed8;
  byte **ppbVar3;
  undefined *puStack_120;
  undefined *puStack_11c;
  undefined1 *puStack_118;
  byte *pbStack_110;
  byte abStack_10c [256];
  byte *pbStack_c;
  undefined1 uStack_8;
  
  puStack_118 = &stack0xfffffffc;
  pbStack_110 = (byte *)0x0;
  puStack_11c = &UNK_00484e8a;
  puStack_120 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_120;
  puVar1 = &stack0xfffffffc;
  if (param_2 != *(short *)((int)param_1 + 0x216)) {
    puVar1 = &stack0xfffffffc;
    if (param_2 < 0) {
      FUN_00402ee4(*param_1,abStack_10c);
      pbStack_c = abStack_10c;
      uStack_8 = 4;
      ppbVar3 = &pbStack_c;
      in_stack_fffffed8 = 0;
      FUN_00405808((undefined4 *)PTR_PTR_004ab758,(int *)&pbStack_110);
      uVar2 = FUN_0040b614((int)&DAT_0040ea0c,'\x01',pbStack_110,in_stack_fffffed8,ppbVar3);
      FUN_004036f4(uVar2);
      param_2 = extraout_DX;
      puVar1 = puStack_118;
    }
    puStack_118 = puVar1;
    *(short *)((int)param_1 + 0x216) = param_2;
    FUN_00485054(param_1);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  *in_FS_OFFSET = in_stack_fffffed8;
  puStack_120 = &UNK_00484e91;
  FUN_00403c5c((int *)&pbStack_110);
  return;
}


