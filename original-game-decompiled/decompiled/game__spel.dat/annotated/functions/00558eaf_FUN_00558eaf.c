
/* ==== FUN_00558eaf @ 00558eaf ==== 
 * signature: undefined __cdecl FUN_00558eaf(undefined1 * param_1, undefined1 * param_2, int param_3, undefined * param_4)
 * body: 00558eaf-00558efc
 */

void __cdecl FUN_00558eaf(undefined1 *param_1,undefined1 *param_2,int param_3,undefined *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  for (; puVar2 = param_1, puVar3 = param_1, param_1 < param_2; param_2 = param_2 + -param_3) {
    while (puVar3 = puVar3 + param_3, puVar3 <= param_2) {
      iVar1 = (*(code *)param_4)(puVar3,puVar2);
      if (0 < iVar1) {
        puVar2 = puVar3;
      }
    }
    FUN_00558efd(puVar2,param_2,param_3);
  }
  return;
}


