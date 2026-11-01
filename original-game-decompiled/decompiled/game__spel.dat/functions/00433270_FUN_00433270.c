
/* ==== FUN_00433270 @ 00433270 ==== 
 * signature: undefined __stdcall FUN_00433270(void)
 * body: 00433270-004332f3
 */

void FUN_00433270(void)

{
  FILE *pFVar1;
  int iVar2;
  
  pFVar1 = (FILE *)FUN_005589a5(PTR_s_VDYNS_DAT_005962ec,&DAT_005989f0);
  if (pFVar1 != (FILE *)0x0) {
    FUN_00558c1d((char *)&DAT_006b2bc0,0x268,100,(int *)pFVar1);
    FUN_005588fd(pFVar1);
    return;
  }
  FUN_004c5930(0,10,200,(byte *)s_____Could_not_save_file_____005989f4);
  iVar2 = FUN_004c5e40(0x20);
  while (iVar2 == 0) {
    iVar2 = FUN_004c5e40(0x20);
  }
  FUN_00431ad0(0x20);
  FUN_004c5930(0,0,200,(byte *)s__00598a10);
  return;
}


