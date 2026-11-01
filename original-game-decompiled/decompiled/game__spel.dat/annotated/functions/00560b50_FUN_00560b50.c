
/* ==== FUN_00560b50 @ 00560b50 ==== 
 * signature: undefined1 * __cdecl FUN_00560b50(int * param_1)
 * body: 00560b50-00560bfd
 */

undefined1 * __cdecl FUN_00560b50(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[6];
  iVar2 = param_1[4];
  pcVar4 = &DAT_0074dd2c;
  iVar5 = 0;
  do {
    pcVar3 = pcVar4;
    iVar6 = iVar5 + 1;
    *pcVar3 = "SunMonTueWedThuFriSat"[iVar1 * 3 + iVar5];
    (&DAT_0074dd30)[iVar5] = "SunMonTueWedThuFriSat"[iVar6 + iVar2 * 3 + 0x17];
    pcVar4 = pcVar3 + 1;
    iVar5 = iVar6;
  } while (iVar6 < 3);
  pcVar3[1] = ' ';
  pcVar3[5] = ' ';
  pcVar4 = FUN_00560bfe(pcVar3 + 6,param_1[3]);
  *pcVar4 = ' ';
  pcVar4 = FUN_00560bfe(pcVar4 + 1,param_1[2]);
  *pcVar4 = ':';
  pcVar4 = FUN_00560bfe(pcVar4 + 1,param_1[1]);
  *pcVar4 = ':';
  pcVar4 = FUN_00560bfe(pcVar4 + 1,*param_1);
  *pcVar4 = ' ';
  pcVar4 = FUN_00560bfe(pcVar4 + 1,param_1[5] / 100 + 0x13);
  pcVar4 = FUN_00560bfe(pcVar4,param_1[5] % 100);
  *pcVar4 = '\n';
  pcVar4[1] = '\0';
  return &DAT_0074dd2c;
}


