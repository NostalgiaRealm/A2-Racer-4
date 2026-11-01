
/* ==== FUN_004a887f @ 004a887f ==== 
 * signature: undefined FUN_004a887f(void)
 * body: 004a887f-004a898b;004a899b-004a89cf;004a89df-004a89df
 */

void FUN_004a887f(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  float10 in_ST1;
  undefined4 uStack_18;
  undefined8 uStack_10;
  
  FUN_00409824();
  uStack_10 = (double)CONCAT44(0x4a889b,(char *)uStack_10);
  FUN_0040a490((byte *)"yyyymmdd",(int *)(unaff_EBP + -0x344),extraout_ECX);
  uStack_10 = (double)CONCAT44(0x4a88ab,(char *)uStack_10);
  FUN_00409850();
  uStack_10 = (double)in_ST1;
  FUN_0040a490((byte *)"hh:mm:ss",(int *)(unaff_EBP + -0x348),extraout_ECX_00);
  uStack_10._4_4_ = *(undefined4 *)(unaff_EBP + -0x348);
  uStack_10._0_4_ = (char *)0x4a88d8;
  FUN_00403f9c((int *)(unaff_EBP + -0x340),3);
  uStack_10._0_4_ = (char *)0x4a88e9;
  puVar1 = (undefined *)
           FUN_00404274((undefined *)(unaff_EBP + -0x1d8),*(undefined1 **)(unaff_EBP + -0x340));
  uStack_10._0_4_ = (char *)0x4a88ee;
  FUN_00405d7b(puVar1);
  uStack_10._0_4_ = (char *)0x4a88f3;
  FUN_0040284c();
  if ((*(int *)(unaff_EBP + -4) != 0) || (*(int *)(unaff_EBP + -8) != 0)) {
    uStack_10._0_4_ = "An error occurred in ";
    uStack_18 = *(undefined4 *)(unaff_EBP + -8);
    FUN_00403f9c((int *)(unaff_EBP + -0x34c),3);
    iVar2 = FUN_00404274((undefined *)(unaff_EBP + -0x1d8),*(undefined1 **)(unaff_EBP + -0x34c));
    FUN_00405bfd(iVar2);
    FUN_0040284c();
  }
  puVar1 = (undefined *)
           FUN_00404274((undefined *)(unaff_EBP + -0x1d8),*(undefined1 **)(unaff_EBP + 8));
  FUN_00405d7b(puVar1);
  FUN_0040284c();
  FUN_00405d7b((undefined *)(unaff_EBP + -0x1d8));
  FUN_0040284c();
  FUN_00403f28((int *)(unaff_EBP + -0x350),(undefined4 *)"GameMenuExceptionLogger : ",
               *(undefined4 **)(unaff_EBP + 8));
  iVar2 = *(int *)(unaff_EBP + -0x350);
  uVar3 = FUN_0045f46c();
  FUN_0045fe38(uVar3,iVar2);
  *in_FS_OFFSET = uStack_18;
  *in_FS_OFFSET = uStack_10._4_4_;
  uStack_10 = (double)CONCAT44(&DAT_004a89d0,*in_FS_OFFSET);
  *in_FS_OFFSET = &uStack_10;
  FUN_00405c24((undefined *)(unaff_EBP + -0x1d8));
  FUN_0040284c();
  *in_FS_OFFSET = (char *)uStack_10;
  return;
}


