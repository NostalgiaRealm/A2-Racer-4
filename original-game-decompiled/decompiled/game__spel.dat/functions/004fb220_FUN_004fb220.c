
/* ==== FUN_004fb220 @ 004fb220 ==== 
 * signature: undefined __thiscall FUN_004fb220(int * param_1, int param_2, double param_3, double param_4, double param_5)
 * body: 004fb220-004fb29e
 */

void __thiscall FUN_004fb220(int *param_1,int param_2,double param_3,double param_4,double param_5)

{
  undefined4 *puVar1;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = (float)param_3;
  local_c = (float)param_4;
  local_8 = (float)param_5;
  *param_1 = param_2;
  if (*(int *)(param_2 + 0x40) == 0) {
    puVar1 = FUN_004fe470(*(void **)(*(int *)(param_2 + 0x18) + 0xa4),param_2);
    *(undefined4 **)(param_2 + 0x40) = puVar1;
  }
  if ((*(int *)(param_2 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(param_2 + 0x40) < *(int *)(*(int *)(param_2 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(param_2 + 0x40));
  }
  FUN_004fe850(*(void **)(param_2 + 0x40),&local_10,(double *)(param_1 + 2));
  return;
}


