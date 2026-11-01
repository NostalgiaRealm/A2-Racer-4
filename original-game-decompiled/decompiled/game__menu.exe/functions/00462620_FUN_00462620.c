
/* ==== FUN_00462620 @ 00462620 ==== 
 * signature: undefined FUN_00462620(void)
 * body: 00462620-0046273f
 */

void FUN_00462620(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_FS_OFFSET;
  int iVar5;
  undefined *puStack_138;
  undefined *puStack_134;
  undefined1 *puStack_130;
  undefined4 *puStack_120;
  int iStack_11c;
  byte abStack_118 [256];
  int iStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  int iStack_c;
  int iStack_8;
  
  puStack_130 = &stack0xfffffffc;
  iStack_11c = 0;
  puStack_120 = (undefined4 *)0x0;
  iStack_18 = 0;
  puStack_134 = &UNK_00462740;
  puStack_138 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_138;
  uStack_14 = *(undefined4 *)(param_2 + 8);
  uStack_10 = 0;
  iVar5 = 0;
  iStack_8 = param_2;
  FUN_00402ee4(*param_1,abStack_118);
  FUN_00403e80(&iStack_18,abStack_118);
  FUN_00403ee4(&iStack_18,(undefined4 *)".GetRaceIndex");
  iVar1 = iStack_18;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar1,2,iVar5);
  iStack_c = -1;
  uVar2 = FUN_00462abc((int)param_1);
  if (SBORROW4(uVar2,1)) {
    thunk_FUN_00402808(uVar2);
  }
  iVar1 = iStack_c;
  if (-1 < (int)(uVar2 - 1)) {
    iVar4 = 0;
    do {
      iVar3 = FUN_004627d0((int)param_1,iVar4);
      iVar1 = iVar4;
      if (iVar3 == iStack_8) break;
      iVar4 = iVar4 + 1;
      uVar2 = uVar2 - 1;
      iVar1 = iStack_c;
    } while (uVar2 != 0);
  }
  iStack_c = iVar1;
  if (iStack_c < 0) {
    FUN_004085ac(*(undefined4 *)(iStack_8 + 8),(int *)&puStack_120);
    FUN_00403f28(&iStack_11c,(undefined4 *)"GetRaceIndex : Track not found in Race. AbsIndex = ",
                 puStack_120);
    FUN_00403c40(iStack_11c);
  }
  *in_FS_OFFSET = iVar5;
  puStack_138 = &UNK_00462747;
  FUN_00403c80((int *)&puStack_120,2);
  FUN_00403c5c(&iStack_18);
  return;
}


