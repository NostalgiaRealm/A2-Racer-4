
/* ==== FUN_00419048 @ 00419048 ==== 
 * signature: undefined __register FUN_00419048(int * param_1, RECT * param_2)
 * body: 00419048-00419075
 */

void FUN_00419048(int *param_1,RECT *param_2)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,9);
  DrawFocusRect((HDC)param_1[1],param_2);
  (**(code **)(*param_1 + 0xc))();
  return;
}


