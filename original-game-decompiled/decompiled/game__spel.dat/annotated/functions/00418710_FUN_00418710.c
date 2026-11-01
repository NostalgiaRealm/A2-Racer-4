
/* ==== FUN_00418710 @ 00418710 ==== 
 * signature: int __cdecl FUN_00418710(int param_1)
 * body: 00418710-00418883
 */

int __cdecl FUN_00418710(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int local_3c [15];
  
  iVar6 = DAT_00715eb8;
  local_3c[0] = 2;
  local_3c[6] = 2;
  local_3c[0xb] = 2;
  local_3c[3] = 3;
  local_3c[8] = 3;
  local_3c[10] = 3;
  iVar3 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar4 = *(int *)(&DAT_005cea48 + param_1 * 0x294);
  local_3c[4] = 4;
  local_3c[9] = 4;
  local_3c[0xc] = 4;
  local_3c[1] = 1;
  local_3c[5] = 1;
  local_3c[0xe] = 1;
  pfVar1 = (float *)(iVar3 * 0xf0 + 0xc4 + DAT_00715e50);
  local_3c[2] = 0;
  local_3c[7] = 0;
  local_3c[0xd] = 0;
  pfVar7 = (float *)&DAT_005d2b74;
  do {
    if (((*pfVar1 < *pfVar7) && (*(char *)(pfVar7 + -1) == '\x01')) &&
       (*pfVar7 = 3.4028235e+38, (*(byte *)((int)pfVar7[1] * 0x50 + iVar6) & 4) != 0)) {
      *pfVar7 = 1.7014117e+38;
    }
    pfVar7 = pfVar7 + 3;
  } while ((int)pfVar7 < 0x5d2bb0);
  iVar8 = 0;
  iVar6 = -1;
  do {
    iVar5 = local_3c[iVar4 * 5 + iVar8];
    if (((&DAT_005d2b74)[iVar5 * 3] == 0x7f7fffff) && ((&DAT_005d2b70)[iVar5 * 0xc] == '\x01')) {
      iVar8 = 5;
      iVar6 = iVar5;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  if (iVar6 == -1) {
    fVar2 = 1.1754944e-38;
    iVar6 = -1;
    iVar8 = 5;
    piVar9 = local_3c + iVar4 * 5;
    do {
      iVar4 = *piVar9;
      if ((fVar2 < (float)(&DAT_005d2b74)[iVar4 * 3]) && ((&DAT_005d2b70)[iVar4 * 0xc] == '\x01')) {
        fVar2 = (float)(&DAT_005d2b74)[iVar4 * 3];
        iVar6 = iVar4;
      }
      piVar9 = piVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (iVar6 == -1) {
      FUN_004185c0(iVar3);
      return 0;
    }
  }
  return iVar6;
}


