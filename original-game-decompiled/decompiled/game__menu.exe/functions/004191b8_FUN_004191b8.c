
/* ==== FUN_004191b8 @ 004191b8 ==== 
 * signature: undefined __register FUN_004191b8(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 004191b8-004191f8
 */

void FUN_004191b8(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,0xd);
  Rectangle((HDC)param_1[1],param_2,param_3,param_5,param_4);
  (**(code **)(*param_1 + 0xc))();
  return;
}


