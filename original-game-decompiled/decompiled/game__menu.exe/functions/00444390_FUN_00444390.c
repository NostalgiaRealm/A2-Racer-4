
/* ==== FUN_00444390 @ 00444390 ==== 
 * signature: undefined __register FUN_00444390(undefined4 * param_1)
 * body: 00444390-004443c6
 */

void FUN_00444390(undefined4 *param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  
  while (param_1 != (undefined4 *)0x0) {
    BVar2 = IsWindow((HWND)param_1[1]);
    if (BVar2 != 0) {
      EnableWindow((HWND)param_1[1],-1);
    }
    puVar1 = (undefined4 *)*param_1;
    FUN_00402794((int)param_1);
    param_1 = puVar1;
  }
  return;
}


