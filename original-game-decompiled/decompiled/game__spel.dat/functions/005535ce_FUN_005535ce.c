
/* ==== FUN_005535ce @ 005535ce ==== 
 * signature: undefined __cdecl FUN_005535ce(undefined2 * param_1, undefined2 * param_2, int param_3)
 * body: 005535ce-00553612
 */

void __cdecl FUN_005535ce(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  if ((param_2 < param_1) && (puVar2 = param_2 + param_3, param_1 < puVar2)) {
    puVar1 = param_1 + param_3;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      puVar2 = puVar2 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar2;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


