
/* ==== FUN_00453784 @ 00453784 ==== 
 * signature: undefined FUN_00453784(void)
 * body: 00453784-0045378b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453784(char *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EBP;
  undefined4 *in_FS_OFFSET;
  bool in_CF;
  bool in_ZF;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined1 *puStack_8;
  
  if ((in_CF || in_ZF) && (!in_ZF)) {
    *param_1 = *param_1 + (char)param_1;
    *param_1 = *param_1 + (char)param_1;
    puStack_8 = &stack0xfffffffc;
    pcStack_c = thunk_FUN_004036bc;
    uStack_10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_10;
    _DAT_004ac88c = _DAT_004ac88c + 1;
    if (_DAT_004ac88c == 0) {
      FUN_00404578((VARIANTARG *)&PTR_DAT_004aab48,&DAT_004010d8,0x40);
    }
    *in_FS_OFFSET = uStack_10;
    return;
  }
  puVar3 = (undefined4 *)&stack0xfffffffc;
  cVar2 = '\x12';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_EBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  bVar1 = *(byte *)(param_2 + 0x59);
  *(byte *)(param_2 + 0x59) = (byte)(CONCAT11(in_CF,bVar1) >> 7) | bVar1 << 2;
  *(int *)((int)in_FS_OFFSET + (int)param_1) = param_2;
  return;
}


