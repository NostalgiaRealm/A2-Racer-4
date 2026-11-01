
/* ==== FUN_0054cd3c @ 0054cd3c ==== 
 * signature: FILE * __cdecl FUN_0054cd3c(LPCSTR param_1, uint param_2)
 * body: 0054cd3c-0054cdb4
 */

FILE * __cdecl FUN_0054cd3c(LPCSTR param_1,uint param_2)

{
  uint uVar1;
  FILE *pFVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = 1;
  iVar4 = 0;
  puVar3 = &DAT_00579048;
  do {
    if (uVar1 == (param_2 & 0xfffffffb)) break;
    uVar1 = puVar3[1];
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (uVar1 != 0);
  if (((&DAT_00579048)[iVar4] != 0) &&
     (pFVar2 = (FILE *)FUN_005589a5(param_1,(&PTR_DAT_005c741c)[iVar4]), pFVar2 != (FILE *)0x0)) {
    if ((param_2 & 4) == 0) {
      return pFVar2;
    }
    iVar4 = FUN_0055a06b((int *)pFVar2,0,2);
    if (iVar4 == 0) {
      return pFVar2;
    }
    FUN_005588fd(pFVar2);
  }
  return (FILE *)0x0;
}


