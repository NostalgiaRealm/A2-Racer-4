
/* ==== FUN_0045e040 @ 0045e040 ==== 
 * signature: undefined4 * __fastcall FUN_0045e040(undefined4 * param_1)
 * body: 0045e040-0045e08c
 */

undefined4 * __fastcall FUN_0045e040(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[0x1b] == 0) {
    puVar4 = (undefined4 *)param_1[0x1a];
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 *)(param_1[0x1b] + 0x68) = param_1[0x1a];
    puVar3 = (undefined4 *)param_1[0x1b];
    puVar2 = puVar3;
    puVar4 = param_1;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
      puVar2 = (undefined4 *)puVar1[0x1b];
    }
  }
  if (param_1[0x1a] != 0) {
    *(undefined4 **)(param_1[0x1a] + 0x6c) = puVar3;
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_0045df60(param_1);
    FUN_0054b339(param_1);
  }
  return puVar4;
}


