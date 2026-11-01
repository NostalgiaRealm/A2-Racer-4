
/* ==== FUN_0055dd83 @ 0055dd83 ==== 
 * signature: char * __cdecl FUN_0055dd83(undefined4 param_1, char * param_2, size_t param_3)
 * body: 0055dd83-0055de60
 */

char * __cdecl FUN_0055dd83(undefined4 param_1,char *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = DAT_0074dd14;
  if (DAT_0074dd18 == '\0') {
    piVar1 = (int *)FUN_00565c67();
    FUN_00565bf0(param_2 + (*piVar1 == 0x2d),piVar1[1] + param_3,(int)piVar1);
  }
  else if (DAT_0074dd1c == param_3) {
    iVar2 = (*DAT_0074dd14 == 0x2d) + DAT_0074dd1c;
    param_2[iVar2] = '0';
    (param_2 + iVar2)[1] = '\0';
  }
  pcVar3 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = '-';
    pcVar3 = param_2 + 1;
  }
  if (piVar1[1] < 1) {
    FUN_0055df97(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + piVar1[1];
  }
  if (0 < (int)param_3) {
    FUN_0055df97(pcVar3,1);
    *pcVar3 = DAT_005c837c;
    iVar2 = piVar1[1];
    if (iVar2 < 0) {
      if ((DAT_0074dd18 != '\0') || (-iVar2 <= (int)param_3)) {
        param_3 = -iVar2;
      }
      FUN_0055df97(pcVar3 + 1,param_3);
      _memset(pcVar3 + 1,0x30,param_3);
    }
  }
  return param_2;
}


