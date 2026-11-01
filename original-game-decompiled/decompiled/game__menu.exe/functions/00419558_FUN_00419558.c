
/* ==== FUN_00419558 @ 00419558 ==== 
 * signature: undefined __register FUN_00419558(int * param_1, int param_2)
 * body: 00419558-004195ab
 */

void FUN_00419558(int *param_1,int param_2)

{
  tagPOINT local_10;
  
  if (param_2 != param_1[1]) {
    if (param_1[1] != 0) {
      FUN_004194f8((int)param_1);
      FUN_00419420(param_1,&local_10);
      param_1[6] = local_10.x;
      param_1[7] = local_10.y;
      param_1[1] = 0;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    }
    if (param_2 != 0) {
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
      param_1[1] = param_2;
      FUN_00419444(param_1,param_1 + 6);
    }
  }
  return;
}


