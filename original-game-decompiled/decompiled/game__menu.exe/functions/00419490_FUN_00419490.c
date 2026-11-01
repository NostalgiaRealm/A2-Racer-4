
/* ==== FUN_00419490 @ 00419490 ==== 
 * signature: undefined __register FUN_00419490(int * param_1, int param_2, int param_3, uint param_4)
 * body: 00419490-004194d1
 */

void FUN_00419490(int *param_1,int param_2,int param_3,uint param_4)

{
  COLORREF color;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_004195ac(param_1,5);
  color = FUN_00417d54(param_4);
  SetPixel((HDC)param_1[1],param_2,param_3,color);
  (**(code **)(*param_1 + 0xc))();
  return;
}


