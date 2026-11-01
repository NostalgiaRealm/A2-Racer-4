
/* ==== FUN_00555869 @ 00555869 ==== 
 * signature: undefined4 * __stdcall FUN_00555869(void)
 * body: 00555869-00555980
 */

undefined4 * FUN_00555869(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  byte *pbVar5;
  uint uVar6;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  FUN_0055b39c();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  uStack_38 = FUN_004d4370(*(void **)(unaff_EBP + 0x18),(int *)(unaff_EBP + -0x10));
  uVar6 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_3c = 0x555898;
  uVar3 = FUN_0054e3e2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  std::locale::~locale((locale *)(unaff_EBP + -0x10));
  pbVar5 = *(byte **)(*(int *)(unaff_EBP + 0x20) + 4);
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = &DAT_0057629c;
  }
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  if (*pbVar5 == 0x2d) {
    *(undefined1 *)(unaff_EBP + 0x20) = 1;
    pbVar5 = pbVar5 + 1;
  }
  bVar1 = *pbVar5;
  while ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) + (uint)bVar1 * 2) >> 2 & 1) != 0)
  {
    bVar1 = pbVar5[uVar6 + 1];
    uVar6 = uVar6 + 1;
  }
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1b);
  FUN_004028f0((void *)(unaff_EBP + -0x2c),'\0');
  uStack_38 = 0x5558fb;
  FUN_00402940((void *)(unaff_EBP + -0x2c),(undefined4 *)pbVar5,uVar6);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (uVar6 == 0) {
    uStack_38 = 0x55590d;
    FUN_0047eab0((void *)(unaff_EBP + -0x2c),1,0x30);
  }
  *(undefined4 **)(unaff_EBP + -0x14) = &local_3c;
  local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)(unaff_EBP + -0x2c));
  FUN_004028f0(&local_3c,'\0');
  FUN_004093c0(&local_3c,(void *)(unaff_EBP + -0x2c),0,0xffffffff);
  puVar4 = FUN_005567da();
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = uVar3;
  puVar2[1] = puVar4[1];
  FUN_004028f0((void *)(unaff_EBP + -0x2c),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


