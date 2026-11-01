
/* ==== FUN_004943b8 @ 004943b8 ==== 
 * signature: undefined FUN_004943b8(void)
 * body: 004943b8-004944c7
 */

void FUN_004943b8(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  int *in_FS_OFFSET;
  char *pcVar6;
  int iStack_12c;
  code *pcStack_128;
  int *piVar2;
  
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)param_2;
  uVar1 = in((short)param_2);
  piVar2 = (int *)CONCAT31((int3)((uint)(param_1 + -1) >> 8),uVar1);
  *(undefined4 *)(unaff_EBP + -0xc) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  pcStack_128 = thunk_FUN_004036bc;
  iStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_12c;
  *(undefined4 *)(unaff_EBP + -8) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402ee4(*piVar2,(byte *)(unaff_EBP + -0x110));
  FUN_00403e80((int *)(unaff_EBP + -0x10),(byte *)(unaff_EBP + -0x110));
  pcVar6 = "btn1Click";
  FUN_00403f9c((int *)(unaff_EBP + -0xc),3);
  iVar5 = *(int *)(unaff_EBP + -0xc);
  uVar3 = FUN_0045f46c();
  FUN_0045fa3c(uVar3,iVar5,0,(int)pcVar6);
  iVar5 = *(int *)(param_2 + 0xc);
  if (iVar5 == -1) {
    FUN_00493754(piVar2);
  }
  else {
    FUN_00402f9c(*(int **)(*(int *)PTR_DAT_004ab694 + 0xc0));
    uVar4 = TSaveGame_vmt_004((int *)&PTR_TSaveGame_vmt_000_0048aa08,'\x01');
    *(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xc0) = uVar4;
    iVar5 = FUN_0045e640(piVar2[0xcb],iVar5);
    FUN_0047f840(*(int **)PTR_DAT_004ab694,*(undefined4 *)(iVar5 + 8));
  }
  FUN_00493338(piVar2);
  FUN_00493ed0(piVar2);
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = (int)pcVar6;
  FUN_00403c80((int *)(unaff_EBP + -0x10),2);
  return;
}


