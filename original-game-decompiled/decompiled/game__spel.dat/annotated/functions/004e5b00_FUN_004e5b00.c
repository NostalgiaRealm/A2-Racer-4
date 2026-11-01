
/* ==== FUN_004e5b00 @ 004e5b00 ==== 
 * signature: undefined __fastcall FUN_004e5b00(undefined4 * param_1)
 * body: 004e5b00-004e5b51
 */

void __fastcall FUN_004e5b00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_00577df4;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 1;
  }
  puVar1 = (undefined4 *)puVar2[2];
  for (puVar3 = (undefined4 *)puVar2[1]; puVar3 != puVar1; puVar3 = puVar3 + 4) {
    (**(code **)*puVar3)(0);
  }
  FUN_0054b339((LPVOID)puVar2[1]);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}


