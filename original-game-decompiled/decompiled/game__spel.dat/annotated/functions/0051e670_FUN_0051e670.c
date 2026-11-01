
/* ==== FUN_0051e670 @ 0051e670 ==== 
 * signature: undefined __cdecl FUN_0051e670(int * param_1)
 * body: 0051e670-0051e79a
 */

void __cdecl FUN_0051e670(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < DAT_0074c758) {
    iVar2 = DAT_0074c76c;
    iVar3 = DAT_0074c758;
    do {
      for (puVar1 = *(undefined4 **)((DAT_0074c768 - DAT_0074c76c) + iVar2);
          puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00558953(param_1,(byte *)s_memory_statistics___7d_quick_all_005be6ec);
  if (DAT_0074c7b0 != 0) {
    FUN_00558953(param_1,(byte *)s__7d_calls_to_qh_setlarger__7_2g_a_005be6b4);
    FUN_00558953(param_1,(byte *)s_freelists__bytes_>count___005be698);
  }
  iVar2 = 0;
  if (0 < DAT_0074c758) {
    do {
      for (puVar1 = *(undefined4 **)(DAT_0074c768 + iVar2 * 4); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
      }
      FUN_00558953(param_1,(byte *)s__d_>_d_005be690);
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0074c758);
  }
  FUN_00558953(param_1,&DAT_005be68c);
  return;
}


