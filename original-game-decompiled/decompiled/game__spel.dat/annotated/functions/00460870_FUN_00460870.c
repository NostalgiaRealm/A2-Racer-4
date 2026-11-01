
/* ==== FUN_00460870 @ 00460870 ==== 
 * signature: undefined __cdecl FUN_00460870(float * param_1)
 * body: 00460870-0046097f
 */

void __cdecl FUN_00460870(float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *in_stack_00000048;
  float local_c0 [16];
  float local_80 [16];
  float local_40 [16];
  
  pfVar2 = (float *)&stack0x00000008;
  pfVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  FUN_004603d0(local_c0);
  if (((*in_stack_00000048 != 0.0) || (in_stack_00000048[1] != 0.0)) ||
     (in_stack_00000048[2] != 0.0)) {
    FUN_00460570(local_80,*in_stack_00000048);
    FUN_00460410(local_c0,local_c0,local_80);
    FUN_004605a0(local_80,in_stack_00000048[1]);
    FUN_00460410(local_c0,local_c0,local_80);
    FUN_004605d0(local_80,in_stack_00000048[2]);
    FUN_00460410(local_c0,local_c0,local_80);
    FUN_00460410(local_40,local_40,local_c0);
  }
  pfVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


