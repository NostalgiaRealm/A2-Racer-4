
/* ==== TControlActionLink.vmt_060 @ 0042d66c ==== 
 * signature: undefined TControlActionLink.vmt_060(void)
 * body: 0042d66c-0042d732
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControlActionLink_vmt_060(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar3;
  undefined4 uStack_38;
  code *pcStack_34;
  code *pcStack_30;
  int iStack_20;
  int iStack_1c;
  undefined1 uStack_18;
  int iStack_14;
  undefined1 uStack_10;
  undefined4 *puStack_c;
  undefined1 uStack_5;
  
  pcStack_30 = (code *)&stack0xfffffffc;
  puStack_c = (undefined4 *)0x0;
  iStack_20 = 0;
  pcStack_34 = thunk_FUN_004036bc;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uStack_5 = 1;
  uVar2 = FUN_00403114(*(int **)(param_1 + 0x10),(int)&PTR_TCustomAction_vmt_000_0043943c);
  if ((char)uVar2 != '\0') {
    cVar1 = FUN_00403178(*(int **)(param_1 + 0x10),param_2,extraout_ECX);
    if ((((cVar1 != '\0') && (*(char *)(*(int *)PTR_DAT_004ab8ac + 0x6c) != '\0')) &&
        (*(short *)(*(int *)(param_1 + 0x10) + 0x68) != 0)) && (*param_2 != 0)) {
      ppuVar3 = &puStack_c;
      iStack_1c = *param_2;
      uStack_18 = 0xb;
      FUN_0043c90c(*(ushort *)(*(int *)(param_1 + 0x10) + 0x68),&iStack_20);
      iStack_14 = iStack_20;
      uStack_10 = 0xb;
      FUN_00409254((byte *)"%s (%s)",&iStack_1c,1,(int *)ppuVar3);
      FUN_00403cb0(param_2,puStack_c);
    }
  }
  *in_FS_OFFSET = uStack_38;
  pcStack_30 = FUN_0042d73a;
  pcStack_34 = (code *)0x42d72a;
  FUN_00403c5c(&iStack_20);
  pcStack_34 = (code *)0x42d732;
  FUN_00403c5c((int *)&puStack_c);
  return;
}


