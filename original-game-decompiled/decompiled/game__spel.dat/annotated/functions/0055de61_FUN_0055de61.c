
/* ==== FUN_0055de61 @ 0055de61 ==== 
 * signature: undefined __cdecl FUN_0055de61(undefined4 param_1, char * param_2, size_t param_3, int param_4)
 * body: 0055de61-0055defb
 */

void __cdecl FUN_0055de61(undefined4 param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_0074dd14 = (int *)FUN_00565c67();
  DAT_0074dd1c = DAT_0074dd14[1] + -1;
  iVar1 = *DAT_0074dd14;
  FUN_00565bf0(param_2 + (iVar1 == 0x2d),param_3,(int)DAT_0074dd14);
  DAT_0074dd20 = DAT_0074dd1c < DAT_0074dd14[1] + -1;
  DAT_0074dd1c = DAT_0074dd14[1] + -1;
  if ((DAT_0074dd1c < -4) || ((int)param_3 <= DAT_0074dd1c)) {
    FUN_0055defc(param_1,param_2,param_3,param_4);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_0074dd20) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_0055df23(param_1,param_2,param_3);
  }
  return;
}


