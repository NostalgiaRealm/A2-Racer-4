
/* ==== FUN_004171c8 @ 004171c8 ==== 
 * signature: undefined __register FUN_004171c8(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 004171c8-00417208
 */

void FUN_004171c8(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_00417504(param_1,0xd);
  Rectangle((HDC)param_1[1],param_2,param_3,param_5,param_4);
  (**(code **)(*param_1 + 0xc))();
  return;
}


