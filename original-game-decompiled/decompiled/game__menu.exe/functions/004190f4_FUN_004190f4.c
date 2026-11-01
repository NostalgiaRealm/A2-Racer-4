
/* ==== FUN_004190f4 @ 004190f4 ==== 
 * signature: undefined __register FUN_004190f4(int * param_1, int param_2, int param_3)
 * body: 004190f4-00419126
 */

void FUN_004190f4(int *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xd);
  LineTo((HDC)param_1[1],param_2,param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}


