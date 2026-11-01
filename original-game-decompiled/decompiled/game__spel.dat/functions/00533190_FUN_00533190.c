
/* ==== FUN_00533190 @ 00533190 ==== 
 * signature: int __cdecl FUN_00533190(undefined4 param_1, undefined * param_2, int * param_3, int param_4, int param_5)
 * body: 00533190-00533229
 */

int __cdecl FUN_00533190(undefined4 param_1,undefined *param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_4;
  
  local_4 = 0;
  for (piVar4 = DAT_0074c628; (piVar4 != (int *)0x0 && (*piVar4 != 0)); piVar4 = (int *)*piVar4) {
    piVar4[5] = piVar4[5] & 0xfeffffff;
  }
  if (param_3 != (int *)0x0) {
    piVar4 = (int *)param_3[1];
    piVar2 = (int *)FUN_00514af0(param_3);
    piVar1 = param_3;
    param_3 = piVar2;
    if (0 < (int)piVar2) {
      do {
        if (piVar4 != (int *)0x0) {
          iVar3 = FUN_0052d7f0(param_1,param_2,piVar4,(int *)0x0,param_4,param_5);
          local_4 = local_4 + iVar3;
        }
        piVar4 = (int *)piVar1[2];
        param_3 = (int *)((int)param_3 + -1);
        piVar1 = piVar1 + 1;
      } while (param_3 != (int *)0x0);
      return local_4;
    }
  }
  return 0;
}


