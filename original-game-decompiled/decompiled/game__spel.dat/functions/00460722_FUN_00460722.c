
/* ==== FUN_00460722 @ 00460722 ==== 
 * signature: undefined __stdcall FUN_00460722(float * param_1)
 * body: 00460722-0046072f
 */

void FUN_00460722(float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *in_stack_00000048;
  float afStack_100 [16];
  float afStack_c0 [16];
  float afStack_80 [16];
  float afStack_40 [16];
  
  pfVar2 = (float *)&stack0x00000008;
  pfVar3 = afStack_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  FUN_004603d0(afStack_100);
  if (((*in_stack_00000048 == 0.0) && (in_stack_00000048[1] == 0.0)) &&
     (in_stack_00000048[2] == 0.0)) {
    pfVar2 = afStack_40;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  FUN_00460570(afStack_c0,*in_stack_00000048);
  FUN_00460410(afStack_80,afStack_100,afStack_c0);
  FUN_004605a0(afStack_c0,in_stack_00000048[1]);
  FUN_00460410(afStack_100,afStack_80,afStack_c0);
  FUN_004605d0(afStack_c0,in_stack_00000048[2]);
  FUN_00460410(afStack_80,afStack_100,afStack_c0);
  FUN_00460410(afStack_100,afStack_40,afStack_80);
  pfVar2 = afStack_100;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


