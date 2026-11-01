
/* ==== FUN_004294a4 @ 004294a4 ==== 
 * signature: undefined __register FUN_004294a4(int param_1, int * param_2)
 * body: 004294a4-00429545;0042954d-00429552
 */

void FUN_004294a4(int param_1,int *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  short sVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4294b8;
  FUN_00429324(param_1);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  uVar3 = EnumClipboardFormats(0);
  sVar7 = (short)uVar3;
  uVar1 = extraout_ECX;
  while( true ) {
    if (sVar7 == 0) {
      piVar6 = FUN_0040b694((int *)&DAT_00407624,'\x01',(undefined4 *)PTR_PTR_004ab6c0);
      FUN_004036f4(piVar6);
      *in_FS_OFFSET = uStack_20;
      puStack_18 = (undefined1 *)0x42954d;
      pcStack_1c = (code *)0x429545;
      FUN_004292f8(param_1);
      return;
    }
    bVar2 = FUN_0041b644(&PTR_TPicture_vmt_000_0041702c,uVar3,uVar1);
    if (bVar2) break;
    uVar3 = EnumClipboardFormats(uVar3 & 0xffff);
    sVar7 = (short)uVar3;
    uVar1 = extraout_ECX_00;
  }
  pvVar4 = GetClipboardData(uVar3 & 0xffff);
  pvVar5 = GetClipboardData(9);
  FUN_0041b554(param_2,uVar3,pvVar4,pvVar5);
  FUN_00403794();
  return;
}


