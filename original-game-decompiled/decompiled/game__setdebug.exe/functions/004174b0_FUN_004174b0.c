
/* ==== FUN_004174b0 @ 004174b0 ==== 
 * signature: undefined __register FUN_004174b0(int * param_1, int param_2)
 * body: 004174b0-00417503
 */

void FUN_004174b0(int *param_1,int param_2)

{
  tagPOINT local_10;
  
  if (param_2 != param_1[1]) {
    if (param_1[1] != 0) {
      FUN_00417450((int)param_1);
      FUN_00417378(param_1,&local_10);
      param_1[6] = local_10.x;
      param_1[7] = local_10.y;
      param_1[1] = 0;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    }
    if (param_2 != 0) {
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
      param_1[1] = param_2;
      FUN_0041739c(param_1,param_1 + 6);
    }
  }
  return;
}


