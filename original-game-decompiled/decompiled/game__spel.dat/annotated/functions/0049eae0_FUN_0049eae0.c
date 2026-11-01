
/* ==== FUN_0049eae0 @ 0049eae0 ==== 
 * signature: undefined __fastcall FUN_0049eae0(int * param_1)
 * body: 0049eae0-0049eb4a
 */

void __fastcall FUN_0049eae0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar2 = 0;
    if (0 < param_1[1]) {
      do {
        FUN_004a0100((uint)(*(int *)(*param_1 + iVar2 * 4) != 0),
                     (byte *)s__s___d__Trying_to_delete_a_NULL_p_005ae85c);
        puVar1 = *(undefined4 **)(*param_1 + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          FUN_0049e200(puVar1);
          FUN_0054b339(puVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[1]);
    }
    FUN_0054b339((LPVOID)*param_1);
    *param_1 = 0;
  }
  return;
}


