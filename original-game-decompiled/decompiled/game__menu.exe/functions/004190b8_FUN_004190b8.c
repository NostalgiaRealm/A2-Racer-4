
/* ==== FUN_004190b8 @ 004190b8 ==== 
 * signature: undefined __register FUN_004190b8(int * param_1, RECT * param_2)
 * body: 004190b8-004190ee
 */

void FUN_004190b8(int *param_1,RECT *param_2)

{
  HBRUSH hbr;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,9);
  hbr = (HBRUSH)FUN_00418a18(param_1[5]);
  FrameRect((HDC)param_1[1],param_2,hbr);
  (**(code **)(*param_1 + 0xc))();
  return;
}


