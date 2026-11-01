
/* ==== FUN_0054d3cd @ 0054d3cd ==== 
 * signature: undefined1 * __stdcall FUN_0054d3cd(void)
 * body: 0054d3cd-0054d485
 */

undefined1 * FUN_0054d3cd(void)

{
  undefined1 *this;
  uint *puVar1;
  size_t sVar2;
  undefined1 *this_00;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined1 **)(unaff_EBP + -0x14) = this_00;
  *this_00 = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004028f0(this_00,'\0');
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this_00[0x10] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004028f0(this_00 + 0x10,'\0');
  this = this_00 + 0x20;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *this = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004028f0(this,'\0');
  *(undefined1 *)(unaff_EBP + -4) = 2;
  this_00[0x30] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004028f0(this_00 + 0x30,'\0');
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puVar1 = FUN_0055badc(0,(uint *)0x0);
  *(uint **)(unaff_EBP + -0x10) = puVar1;
  sVar2 = _strlen((char *)puVar1);
  FUN_00402940(this,*(undefined4 **)(unaff_EBP + -0x10),sVar2);
  if (*(int *)(unaff_EBP + 8) != 0) {
    puVar1 = FUN_0055badc(0,*(uint **)(unaff_EBP + 8));
    if (puVar1 != (uint *)0x0) goto LAB_0054d462;
  }
  puVar1 = (uint *)&DAT_005b7560;
LAB_0054d462:
  sVar2 = _strlen((char *)puVar1);
  FUN_00402940(this_00 + 0x30,puVar1,sVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_00;
}


