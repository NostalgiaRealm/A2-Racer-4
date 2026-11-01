
/* ==== FUN_0054ca28 @ 0054ca28 ==== 
 * signature: undefined __fastcall FUN_0054ca28(void * param_1)
 * body: 0054ca28-0054ca69
 */

void __fastcall FUN_0054ca28(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0054c999(param_1,0);
  puVar2 = *(undefined4 **)((int)param_1 + 0x18);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0054b339(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  puVar2 = *(undefined4 **)((int)param_1 + 0x1c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0054b339(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  return;
}


