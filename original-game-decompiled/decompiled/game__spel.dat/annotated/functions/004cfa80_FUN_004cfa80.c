
/* ==== FUN_004cfa80 @ 004cfa80 ==== 
 * signature: undefined __fastcall FUN_004cfa80(undefined4 * param_1)
 * body: 004cfa80-004cfaa4
 */

void __fastcall FUN_004cfa80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005777a0;
  FUN_004d38c0((void *)param_1[1],s_OnUnLoad_005b6ee0);
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  return;
}


