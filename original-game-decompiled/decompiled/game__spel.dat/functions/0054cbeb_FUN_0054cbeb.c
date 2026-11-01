
/* ==== FUN_0054cbeb @ 0054cbeb ==== 
 * signature: undefined4 * __stdcall FUN_0054cbeb(void)
 * body: 0054cbeb-0054cc5c
 */

undefined4 * FUN_0054cbeb(void)

{
  undefined4 *this;
  undefined1 uVar1;
  size_t sVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_FUN_00579044;
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(unaff_EBP + 8);
  uVar1 = *(undefined1 *)(unaff_EBP + 0xb);
  this = extraout_ECX + 6;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  *(undefined1 *)this = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(this,'\0');
  sVar2 = _strlen(&DAT_005b7560);
  FUN_00402940(this,(undefined4 *)&DAT_005b7560,sVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_0057903c;
  return extraout_ECX;
}


