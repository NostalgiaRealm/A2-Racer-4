
/* ==== FUN_0041907c @ 0041907c ==== 
 * signature: undefined __register FUN_0041907c(int * param_1, RECT * param_2)
 * body: 0041907c-004190b2
 */

void FUN_0041907c(int *param_1,RECT *param_2)

{
  HBRUSH hbr;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,9);
  hbr = (HBRUSH)FUN_00418a18(param_1[5]);
  FillRect((HDC)param_1[1],param_2,hbr);
  (**(code **)(*param_1 + 0xc))();
  return;
}


