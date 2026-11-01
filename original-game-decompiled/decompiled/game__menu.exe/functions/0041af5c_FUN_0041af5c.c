
/* ==== FUN_0041af5c @ 0041af5c ==== 
 * signature: undefined FUN_0041af5c(void)
 * body: 0041af5c-0041afab
 */

void FUN_0041af5c(int *param_1,char param_2)

{
  int *piVar1;
  VARIANTARG *pVVar2;
  byte extraout_DL;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  
  *(char *)(unaff_EBX + 0x56) = *(char *)(unaff_EBX + 0x56) + param_2;
  piVar1 = FUN_004032fc(param_1,param_2);
  iVar3 = piVar1[2];
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      pVVar2 = (VARIANTARG *)FUN_004102b0(piVar1,iVar4);
      FUN_00404890(pVVar2,"\x0e\vTFileFormat\x10");
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  TList_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar1);
  }
  return;
}


