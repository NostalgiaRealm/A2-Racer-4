
/* ==== FUN_00419180 @ 00419180 ==== 
 * signature: undefined __register FUN_00419180(int * param_1, POINT * param_2, int param_3)
 * body: 00419180-004191b3
 */

void FUN_00419180(int *param_1,POINT *param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xd);
  Polyline((HDC)param_1[1],param_2,param_3 + 1);
  (**(code **)(*param_1 + 0xc))();
  return;
}


