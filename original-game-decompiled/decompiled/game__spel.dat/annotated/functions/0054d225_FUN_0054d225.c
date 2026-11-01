
/* ==== FUN_0054d225 @ 0054d225 ==== 
 * signature: undefined4 * __stdcall FUN_0054d225(void)
 * body: 0054d225-0054d31d
 */

undefined4 * FUN_0054d225(void)

{
  undefined4 *this;
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *extraout_ECX;
  int iVar4;
  int unaff_EBP;
  bool bVar5;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_FUN_00579044;
  iVar1 = *(int *)(unaff_EBP + 8);
  extraout_ECX[2] = 0;
  this = extraout_ECX + 6;
  extraout_ECX[3] = *(undefined4 *)(iVar1 + 0xc);
  extraout_ECX[4] = *(undefined4 *)(iVar1 + 0x10);
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(iVar1 + 0x14);
  *(undefined1 *)this = *(undefined1 *)(iVar1 + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(this,'\0');
  FUN_004093c0(this,(void *)(iVar1 + 0x18),0,0xffffffff);
  *extraout_ECX = &PTR_FUN_0057903c;
  bVar5 = iVar1 == DAT_0074daf4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar5) {
    FUN_0054d3cd();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0054cebb();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0054d486();
  }
  else {
    iVar4 = extraout_ECX[3];
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar4 != 0) {
      pvVar3 = _malloc(iVar4 << 2);
      extraout_ECX[2] = pvVar3;
      if (pvVar3 == (void *)0x0) {
        FUN_0054efbd();
      }
      iVar4 = extraout_ECX[3];
      while (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar4 * 4);
        *(int *)(extraout_ECX[2] + iVar4 * 4) = iVar2;
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


