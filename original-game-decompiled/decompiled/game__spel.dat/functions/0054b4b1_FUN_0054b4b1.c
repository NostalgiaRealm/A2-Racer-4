
/* ==== FUN_0054b4b1 @ 0054b4b1 ==== 
 * signature: undefined4 __stdcall FUN_0054b4b1(void)
 * body: 0054b4b1-0054b60e
 */

undefined4 FUN_0054b4b1(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  bool bVar3;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  bVar3 = DAT_005c70f8 < 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (bVar3) {
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d838;
    DAT_005c70f8 = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004d0ac0(&DAT_0074d838,0x5c7bd8);
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d710;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_004d0ac0(&DAT_0074d710,0x5c7bf8);
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d7f8;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_004cfb80(&DAT_0074d7f8,&DAT_0074d838,'\x01',1);
    *(undefined4 **)(unaff_EBP + -0x14) = &DAT_0074d768;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_0054b636();
    iVar2 = DAT_0074d7f8;
    *(undefined **)(unaff_EBP + -0x14) = &DAT_0074d7a0;
    *(undefined4 **)(&DAT_0074d824 + *(int *)(iVar2 + 4)) = &DAT_0074d768;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_004d0ac0(&DAT_0074d7a0,0x5c7c18);
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d890;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_0054b636();
    iVar2 = DAT_0074d890;
    *(int **)(unaff_EBP + -0x14) = &DAT_0074d6d8;
    *(undefined4 **)(&DAT_0074d8bc + *(int *)(iVar2 + 4)) = &DAT_0074d768;
    *(uint *)(&DAT_0074d89c + *(int *)(DAT_0074d890 + 4)) =
         *(uint *)(&DAT_0074d89c + *(int *)(DAT_0074d890 + 4)) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_0054b636();
    *(undefined4 **)(&DAT_0074d704 + *(int *)(DAT_0074d6d8 + 4)) = &DAT_0074d768;
  }
  else {
    DAT_005c70f8 = DAT_005c70f8 + 1;
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


