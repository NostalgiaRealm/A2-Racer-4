
/* ==== FUN_00524880 @ 00524880 ==== 
 * signature: undefined __cdecl FUN_00524880(int * param_1, int param_2)
 * body: 00524880-005249e9
 */

void __cdecl FUN_00524880(int *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  
  if (0xc1 < param_2) {
    return;
  }
  if ((&DAT_0074d3fa)[param_2] != '\0') {
    return;
  }
  if ((&DAT_0074d338)[param_2] == '\0') {
    FUN_00558953(param_1,&DAT_005aeff8);
    return;
  }
  iVar3 = FUN_00524550(param_2);
  if (iVar3 != 0) {
    return;
  }
  if (*(int *)(&DAT_0074ceac + param_2 * 4) == 0) {
    return;
  }
  (&DAT_0074d3fa)[param_2] = 1;
  sVar2 = *(short *)(&DAT_0074d1b4 + param_2 * 2);
  if ((sVar2 != -1) && (*(int *)(&DAT_0074c7d0 + (byte)sVar2) == 0)) {
    FUN_00558953(param_1,(byte *)s__0_cnt__005c0864);
    goto LAB_005249d1;
  }
  cVar1 = (&DAT_0074d338)[param_2];
  if (cVar1 < '\x05') {
LAB_0052497d:
    if (sVar2 == -1) {
      FUN_00558953(param_1,(byte *)&PTR_DAT_005c0858);
      goto LAB_005249d1;
    }
    if (('\x04' < cVar1) || (sVar2 == -1)) goto LAB_005249d1;
    pcVar4 = s__7_3g_005c0850;
  }
  else {
    if (sVar2 != -1) {
      if ('\x04' < cVar1) {
        if (sVar2 != -1) {
          pcVar4 = s__7_2g_005c085c;
          goto LAB_005249c8;
        }
        if ('\x04' < cVar1) goto LAB_005249d1;
      }
      goto LAB_0052497d;
    }
    pcVar4 = s__7_2g_005c085c;
  }
LAB_005249c8:
  FUN_00558953(param_1,(byte *)pcVar4);
LAB_005249d1:
  FUN_00558953(param_1,&DAT_005b0c9c);
  return;
}


