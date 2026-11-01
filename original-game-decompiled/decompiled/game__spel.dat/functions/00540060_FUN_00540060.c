
/* ==== FUN_00540060 @ 00540060 ==== 
 * signature: float10 __thiscall FUN_00540060(int param_1, void * param_2, void * param_3)
 * body: 00540060-005401ab
 */

float10 __thiscall FUN_00540060(int param_1,void *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_40;
  double local_38;
  double local_30;
  double local_20;
  double local_18;
  double local_10;
  
  FUN_004fad20(param_2,(double *)(param_1 + 0x28),&local_60);
  FUN_004faec0(param_2,(double *)(param_1 + 0x48),&local_20);
  FUN_004fad20(param_3,(double *)(param_1 + 0x68),&local_40);
  FUN_004faec0(param_3,(double *)(param_1 + 0x88),&local_a8);
  local_88 = local_60 - local_40;
  local_80 = local_58 - local_38;
  local_78 = local_50 - local_30;
  dVar1 = local_78 * local_a0 - local_98 * local_80;
  dVar2 = local_98 * local_88 - local_78 * local_a8;
  dVar3 = local_80 * local_a8 - local_a0 * local_88;
  local_68 = local_98 * dVar1;
  local_c8 = dVar2 * local_98 - dVar3 * local_a0;
  local_c0 = dVar3 * local_a8 - local_68;
  local_b8 = dVar1 * local_a0 - dVar2 * local_a8;
  FUN_004f9870(&local_c8);
  return (float10)local_c8 * (float10)local_20 +
         (float10)local_18 * (float10)local_c0 + (float10)local_10 * (float10)local_b8;
}


