
/* ==== FUN_00529520 @ 00529520 ==== 
 * signature: undefined4 * __cdecl FUN_00529520(undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 00529520-00529578
 */

undefined4 * __cdecl FUN_00529520(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = _malloc(param_2 * (int)param_3 * 8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_error__insufficient_memory_005c1fd4);
    FUN_0051e8e0(4,(int *)0x0);
  }
  iVar2 = (param_2 * (int)param_3 & 0x1fffffffU) << 1;
  puVar3 = puVar1;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return puVar1;
}


