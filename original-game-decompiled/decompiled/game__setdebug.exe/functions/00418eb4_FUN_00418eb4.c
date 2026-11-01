
/* ==== FUN_00418eb4 @ 00418eb4 ==== 
 * signature: undefined FUN_00418eb4(void)
 * body: 00418eb4-00418f03
 */

void FUN_00418eb4(int *param_1,char param_2)

{
  int *piVar1;
  VARIANTARG *pVVar2;
  byte extraout_DL;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  
  *(char *)(unaff_EBX + 0x56) = *(char *)(unaff_EBX + 0x56) + param_2;
  piVar1 = FUN_00403074(param_1,param_2);
  iVar3 = piVar1[2];
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      pVVar2 = (VARIANTARG *)FUN_0040f024(piVar1,iVar4);
      FUN_00404578(pVVar2,"\x0e\vTFileFormat\x10");
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  TList_Destroy(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403064(piVar1);
  }
  return;
}


