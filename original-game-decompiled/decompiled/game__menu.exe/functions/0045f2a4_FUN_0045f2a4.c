
/* ==== FUN_0045f2a4 @ 0045f2a4 ==== 
 * signature: undefined FUN_0045f2a4(void)
 * body: 0045f2a4-0045f2a7
 */

void FUN_0045f2a4(byte *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  int iStack_c;
  int iStack_8;
  
  *param_1 = *param_1 & (byte)param_1;
  pcStack_1c = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  iStack_c = 0;
  pcStack_20 = thunk_FUN_004036bc;
  puStack_24 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  uVar2 = FUN_0045edb0((int)param_1);
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  if (-1 < (int)(uVar2 - 1)) {
    iVar3 = 0;
    do {
      FUN_004085ac(iVar3,&iStack_c);
      puStack_24 = &DAT_0045f368;
      FUN_00403f9c(&iStack_8,3);
      cVar1 = FUN_0045ec18((int)param_1,iVar3);
      if (cVar1 == '\0') {
        FUN_00403ee4(&iStack_8,(undefined4 *)"FALSE  ");
      }
      else {
        FUN_00403ee4(&iStack_8,(undefined4 *)"TRUE  ");
      }
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_0045ee68((int)param_1,0,iStack_8);
  *in_FS_OFFSET = puStack_24;
  pcStack_1c = FUN_0045f359;
  pcStack_20 = (code *)0x45f351;
  FUN_00403c80(&iStack_c,2);
  return;
}


