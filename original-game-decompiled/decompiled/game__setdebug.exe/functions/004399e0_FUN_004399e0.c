
/* ==== FUN_004399e0 @ 004399e0 ==== 
 * signature: undefined __register FUN_004399e0(undefined4 * param_1)
 * body: 004399e0-00439a16
 */

void FUN_004399e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  
  while (param_1 != (undefined4 *)0x0) {
    BVar2 = IsWindow((HWND)param_1[1]);
    if (BVar2 != 0) {
      EnableWindow((HWND)param_1[1],-1);
    }
    puVar1 = (undefined4 *)*param_1;
    FUN_004026d0((int)param_1);
    param_1 = puVar1;
  }
  return;
}


