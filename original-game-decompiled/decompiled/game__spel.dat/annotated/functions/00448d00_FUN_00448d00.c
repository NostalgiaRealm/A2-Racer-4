
/* ==== FUN_00448d00 @ 00448d00 ==== 
 * signature: undefined __fastcall FUN_00448d00(undefined4 * param_1)
 * body: 00448d00-00448dcd
 */

void __fastcall FUN_00448d00(undefined4 *param_1)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iStack_8;
  undefined4 uStack_4;
  
  pFVar1 = (FILE *)FUN_005589a5(s_CfgFiles_INI_0059eefc,&DAT_0059eef8);
  if (pFVar1 != (FILE *)0x0) {
    FUN_00558953((int *)pFVar1,(byte *)s__Config_Files__0059ef0c);
    iVar3 = 0;
    iVar2 = (**(code **)*param_1)();
    if (0 < iVar2) {
      do {
        iStack_8 = *(int *)param_1[6];
        iVar2 = iVar3;
        if (0 < iVar3) {
          do {
            FUN_00448fd0(&iStack_8,&uStack_4);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar2 = iVar3;
        if (0 < iVar3) {
          do {
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00558953((int *)pFVar1,(byte *)s__d__s__s_0059ef1c);
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)*param_1)();
      } while (iVar3 < iVar2);
    }
    FUN_00558953((int *)pFVar1,(byte *)s_count__d_0059ef28);
    FUN_005588fd(pFVar1);
  }
  return;
}


