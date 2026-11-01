
/* ==== FUN_00417100 @ 00417100 ==== 
 * signature: undefined __register FUN_00417100(int * param_1, RECT * param_2)
 * body: 00417100-00417136
 */

void FUN_00417100(int *param_1,RECT *param_2)

{
  HBRUSH hbr;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_00417504(param_1,9);
  hbr = (HBRUSH)FUN_00416d90(param_1[5]);
  FillRect((HDC)param_1[1],param_2,hbr);
  (**(code **)(*param_1 + 0xc))();
  return;
}


