
/* ==== FUN_005249f0 @ 005249f0 ==== 
 * signature: undefined __cdecl FUN_005249f0(int * param_1, int param_2, int * param_3)
 * body: 005249f0-00524a4f
 */

void __cdecl FUN_005249f0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = FUN_005244c0(param_2,&param_2);
  if (iVar1 != 0) {
    FUN_00558953(param_1,&DAT_005ae60c);
    if (iVar2 < param_2) {
      do {
        FUN_00524880(param_1,(uint)(byte)(&DAT_0074cde0)[iVar2]);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = param_2;
  }
  return;
}


