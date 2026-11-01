
/* ==== FUN_004173e8 @ 004173e8 ==== 
 * signature: undefined __register FUN_004173e8(int * param_1, int param_2, int param_3, uint param_4)
 * body: 004173e8-00417429
 */

void FUN_004173e8(int *param_1,int param_2,int param_3,uint param_4)

{
  COLORREF color;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_00417504(param_1,5);
  color = FUN_004160cc(param_4);
  SetPixel((HDC)param_1[1],param_2,param_3,color);
  (**(code **)(*param_1 + 0xc))();
  return;
}


