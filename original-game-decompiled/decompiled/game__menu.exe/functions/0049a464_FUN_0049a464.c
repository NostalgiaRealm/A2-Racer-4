
/* ==== FUN_0049a464 @ 0049a464 ==== 
 * signature: undefined FUN_0049a464(void)
 * body: 0049a464-0049a567
 */

void FUN_0049a464(int *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *in_FS_OFFSET;
  int iStack_124;
  undefined *puStack_120;
  undefined1 *puStack_11c;
  int iStack_110;
  byte abStack_10c [256];
  int iStack_c;
  int iStack_8;
  
  puStack_11c = &stack0xfffffffc;
  iStack_8 = 0;
  iStack_c = 0;
  iStack_110 = 0;
  puStack_120 = &UNK_0049a568;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
  cVar2 = FUN_0048dcdc();
  if (cVar2 == '\0') {
    iVar4 = FUN_0048d458(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10));
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  else {
    uVar3 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
    iVar4 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      thunk_FUN_00402808(uVar3);
    }
  }
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_004085ac(iVar4,&iStack_110);
  iVar4 = iStack_110;
  FUN_00403f9c(&iStack_8,5);
  iVar1 = iStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fe88(uVar3,iVar1);
  *in_FS_OFFSET = iVar4;
  FUN_00403c5c(&iStack_110);
  FUN_00403c80(&iStack_c,2);
  return;
}


