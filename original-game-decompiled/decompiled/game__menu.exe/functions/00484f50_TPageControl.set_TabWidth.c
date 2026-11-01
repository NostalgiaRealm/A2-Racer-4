
/* ==== TPageControl.set_TabWidth @ 00484f50 ==== 
 * signature: undefined TPageControl.set_TabWidth(void)
 * body: 00484f50-00485007
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_TabWidth(int *param_1,short param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  short extraout_DX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffed8;
  byte **ppbVar4;
  undefined *puStack_120;
  undefined *puStack_11c;
  undefined1 *puStack_118;
  byte *pbStack_110;
  byte abStack_10c [256];
  byte *pbStack_c;
  undefined1 uStack_8;
  
  puStack_118 = &stack0xfffffffc;
  pbStack_110 = (byte *)0x0;
  puStack_11c = &UNK_00485008;
  puStack_120 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_120;
  puVar2 = &stack0xfffffffc;
  if (param_2 != (short)param_1[0x85]) {
    puVar2 = &stack0xfffffffc;
    if (param_2 < 0) {
      FUN_00402ee4(*param_1,abStack_10c);
      pbStack_c = abStack_10c;
      uStack_8 = 4;
      ppbVar4 = &pbStack_c;
      in_stack_fffffed8 = 0;
      FUN_00405808((undefined4 *)PTR_PTR_004ab758,(int *)&pbStack_110);
      uVar3 = FUN_0040b614((int)&DAT_0040ea0c,'\x01',pbStack_110,in_stack_fffffed8,ppbVar4);
      FUN_004036f4(uVar3);
      param_2 = extraout_DX;
      puVar2 = puStack_118;
    }
    puStack_118 = puVar2;
    iVar1 = param_1[0x85];
    *(short *)(param_1 + 0x85) = param_2;
    if (((short)iVar1 == 0) || (param_2 == 0)) {
      FUN_00431e04((int)param_1);
      puVar2 = puStack_118;
    }
    else {
      FUN_00485054(param_1);
      puVar2 = puStack_118;
    }
  }
  puStack_118 = puVar2;
  *in_FS_OFFSET = in_stack_fffffed8;
  puStack_120 = &UNK_0048500f;
  FUN_00403c5c((int *)&pbStack_110);
  return;
}


